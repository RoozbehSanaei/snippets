// This example illustrates the manipulation of C++ references in Java.

public class runme {
  static {
	try {
		System.load("/home/roozbeh/Dropbox/Codes/examples/java/swig/sandbox/optim/build/example.so");
	} catch (UnsatisfiedLinkError e) {
	  System.err.println("Native code library failed to load. See the chapter on Dynamic Linking Problems in the SWIG Java documentation for help.\n" + e);
	  System.exit(1);
	}
  }

  public static void main(String argv[]) 
  {
  	System.out.println( "" );
	System.out.println( "Creating some objects:" );
	Vector a = new Vector(3,4,5);
	double doubleArray1[] = {1.1,2.2,3.3};
	a.set_doubleArray(doubleArray1);
	
	System.out.println( "    Created " + a.print() );
	Callback            callback = new Callback();


	callback = new JavaCallback();
	callback.set_vec(a);
	callback.call();
	callback.delete();
	a.delete();	



  }
}

class JavaCallback extends Callback
{
  public JavaCallback()
  {
	super();
  }

  public void run(Vector vec)
  {
  	double doubleArray1[] = new double[3];
	System.out.println("JavaCallback.run():");
	System.out.println( "    Recieved " + vec.print() );
	vec.get_doubeArray(doubleArray1);
	System.out.println( doubleArray1[1]);
	System.out.println( "" );

  }
}
