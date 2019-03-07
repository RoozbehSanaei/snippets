import java.util.*;

class test {
  //Native method declaration
  native void loadFile(int[] name);
  //Load the library
   static {
    String path =  test.class.getProtectionDomain().getCodeSource().getLocation().getPath();
    System.load(path+"test.so"); 
   }
   public static native void process(JavaClass jc);

   public static void main(String args[]) {
   	JavaClass jc = new JavaClass();
   	jc.a = new byte[]{1,2,3,4,5};
    process(jc);

    for(int i=0;i<jc.a.length;i++) {
      System.out.print(jc.a[i]+" , ");
    }
    System.out.println("\n");
    
  }
}

class JavaClass {
  int i;
  byte[] a;
}
