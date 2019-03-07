import java.util.*;

class test {
  //Native method declaration
   static {
    String path =  test.class.getProtectionDomain().getCodeSource().getLocation().getPath();
    System.load(path+"test.so"); 
   }

   public static void main(String args[]) {
   	JavaClass jc = new JavaClass();
   	jc.a = new byte[]{1,2,3,4,5};
    jc.i = 2;
    jc.process();

    for(int i=0;i<jc.a.length;i++) {
      System.out.print(jc.a[i]+" , ");
    }
    System.out.println("\n");
    System.out.println(jc.i);


  }
}

class JavaClass {
	public native void process();
	public int i;
	public byte[] a;

  private void callback() {
      System.out.println("Callback is called");
      for(int i=0;i<a.length;i++) {
      System.out.print(a[i]+" , ");
     }
     System.out.println("\n");
     System.out.println(i);

   }
}
