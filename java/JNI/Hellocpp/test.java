public class test {
   static {
   	String path =  test.class.getProtectionDomain().getCodeSource().getLocation().getPath();
   	System.load(path+"test.so"); 
   }
 
 
   // Declare a native method sayHello() that receives nothing and returns void
   private native void sayHello();
 
   // Test Driver
   public static void main(String[] args) {
      new test().sayHello();  // invoke the native method
   }
}