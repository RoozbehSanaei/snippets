// This example illustrates the manipulation of C++ references in Java.

public class runme {
  static {
	try {
		System.load("/home/roozbeh/Dropbox/Codes/examples/java/swig/sandbox/output_array/build/example.so");
	} catch (UnsatisfiedLinkError e) {
	  System.err.println("Native code library failed to load. See the chapter on Dynamic Linking Problems in the SWIG Java documentation for help.\n" + e);
	  System.exit(1);
	}
  }

  public static void main(String argv[]) 
  {
    obj_t obj = new obj_t();
    double[] result = example.get_data(obj);
    for (int i = 0; i < result.length; ++i) {
      System.out.println(result[i]);
    }
  }
}
