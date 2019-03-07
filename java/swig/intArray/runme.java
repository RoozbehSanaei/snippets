
public class runme {

  static {
    try {
	System.load("/home/roozbeh/Dropbox/Codes/examples/java/swig/intArray/build/example.so");
    } catch (UnsatisfiedLinkError e) {
      System.err.println("Native code library failed to load. See the chapter on Dynamic Linking Problems in the SWIG Java documentation for help.\n" + e);
      System.exit(1);
    }
  }

  public static void main(String argv[]) {
    // Call our gcd() function
    
    int intArray[] = new int[10];
    example.intReference(intArray);
    System.out.println("intArray[0] = " + intArray[5]);
  }
}
