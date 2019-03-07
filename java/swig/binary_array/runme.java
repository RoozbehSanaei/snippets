
import java.util.Arrays;


public class runme {

  static {
    try {
	System.load("/home/roozbeh/Dropbox/Codes/examples/java/swig/binary_array/build/example.so");
    } catch (UnsatisfiedLinkError e) {
      System.err.println("Native code library failed to load. See the chapter on Dynamic Linking Problems in the SWIG Java documentation for help.\n" + e);
      System.exit(1);
    }
  }

  public static void main(String argv[]) {
    byte[] bytes = new byte[100];
    Arrays.fill( bytes, (byte) 1 );

    example.some_func(bytes);
  }
}
