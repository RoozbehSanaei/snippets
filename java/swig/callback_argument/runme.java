// This example illustrates the manipulation of C++ references in Java.

public class runme {
  static {
	try {
		System.load("/home/roozbeh/Dropbox/Codes/examples/java/swig/callback_argument/build/example.so");
	} catch (UnsatisfiedLinkError e) {
	  System.err.println("Native code library failed to load. See the chapter on Dynamic Linking Problems in the SWIG Java documentation for help.\n" + e);
	  System.exit(1);
	}
  }

  public static void main(String argv[]) 
  {
	

	Callback callback = new JavaCallback();
	example.call(callback);
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

  public void run()
  {
	System.out.println("JavaCallback.run()");
  }
}
