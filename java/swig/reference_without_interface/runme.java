// This example illustrates the manipulation of C++ references in Java.

public class runme {
  static {
	try {
		System.load("/home/roozbeh/Dropbox/Codes/examples/java/swig/reference_without_interface/build/example.so");
	} catch (UnsatisfiedLinkError e) {
	  System.err.println("Native code library failed to load. See the chapter on Dynamic Linking Problems in the SWIG Java documentation for help.\n" + e);
	  System.exit(1);
	}
  }

  public static void main(String argv[]) 
  {
	System.out.println( "Creating some objects:" );
	Vector a = new Vector(3,4,5);
	Vector b = new Vector(10,11,12);
	
	System.out.println( "    Created " + a.print() );
	System.out.println( "    Created " + b.print() );
	
	// ----- Call an overloaded operator -----
	
	// This calls the wrapper we placed around
	//
	//      operator+(const Vector &a, const Vector &) 
	//
	// It returns a new allocated object.
	
	System.out.println( "Adding a+b" );
	Vector c = example.addv(a,b);
	System.out.println( "    a+b = " + c.print() );
	
	// Note: Unless we free the result, a memory leak will occur if the -noproxy commandline
	// is used as the proxy classes define finalizers which call the delete() method. When
	// -noproxy is not specified the memory management is controlled by the garbage collector.
	// You can still call delete(). It will free the c++ memory immediately, but not the 
	// Java memory! You then must be careful not to call any member functions as it will 
	// use a NULL c pointer on the underlying c++ object. We set the Java object to null
	// which will then throw a Java exception should we attempt to use it again.
	c.delete();
	c = null;

	System.out.println("Adding and calling a normal C++ callback");
	System.out.println("----------------------------------------");

	Caller              caller = new Caller();
	Callback            callback = new Callback();



	callback = new JavaCallback();
	caller.setCallback(callback);
	caller.call();
	caller.delCallback();

	// Test that a double delete does not occur as the object has already been deleted from the C++ layer.
	// Note that the garbage collector can also call the delete() method via the finalizer (callback.finalize())
	// at any point after here.
	callback.delete();

	System.out.println();
	System.out.println("java exit");	



  }
}

class JavaCallback extends Callback
{
  public JavaCallback()
  {
	super();
  }

  public void run(int a)
  {
	System.out.print("argument value: ");
	System.out.println(a);

  }
}
