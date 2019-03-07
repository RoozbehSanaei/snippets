
public class runme {

  static {
    try {
	System.load("/home/roozbeh/Dropbox/Codes/examples/java/swig/doubleArray/build/example.so");
    } catch (UnsatisfiedLinkError e) {
      System.err.println("Native code library failed to load. See the chapter on Dynamic Linking Problems in the SWIG Java documentation for help.\n" + e);
      System.exit(1);
    }
  }

  public static void main(String argv[]) {
    // Call our gcd() function
    
    double doubleArray[] = new double[10];
    example.doubleReference(doubleArray);
    System.out.println("doubleArray[0] = " + doubleArray[5]);
  }
}
