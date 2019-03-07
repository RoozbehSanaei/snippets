// This example illustrates the manipulation of C++ references in Java.

public class runme {
  static {
	try {
		System.load("/home/roozbeh/Dropbox/Codes/examples/java/swig/sandbox/double_array_field/build/example.so");
	} catch (UnsatisfiedLinkError e) {
	  System.err.println("Native code library failed to load. See the chapter on Dynamic Linking Problems in the SWIG Java documentation for help.\n" + e);
	  System.exit(1);
	}
  }

  public static void main(String argv[]) 
  {

	Vector V = new Vector();
	double doubleArray1[] = {3.14,2.2,3.3};
	V.set_doubleArray(doubleArray1);
	
	doubleArray1[0] = 7;
	V.get_doubleArray(doubleArray1);

	//System.out.println(doubleArray1[0]);

	



	V.delete();	



  }
}