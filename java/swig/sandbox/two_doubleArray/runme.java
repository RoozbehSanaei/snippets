
public class runme {

  static {
    try {
	System.load("/home/roozbeh/Dropbox/Codes/examples/java/swig/sandbox/two_doubleArray/build/example.so");
    } catch (UnsatisfiedLinkError e) {
      System.err.println("Native code library failed to load. See the chapter on Dynamic Linking Problems in the SWIG Java documentation for help.\n" + e);
      System.exit(1);
    }
  }

  public static void main(String argv[]) {
    // Call our gcd() function
    
    double doubleArray1[] = new double[10];
    double doubleArray2[] = new double[10];

    example.doubleReference(doubleArray1,doubleArray2);
    System.out.println("doubleArray1[5] = " + doubleArray1[5]);
    System.out.println("doubleArray2[5] = " + doubleArray2[5]);

  }
}
