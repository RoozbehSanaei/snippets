public class test {
   static {
      String path =  test.class.getProtectionDomain().getCodeSource().getLocation().getPath();
      System.load(path+"test.so"); 
   }
 
   // Declare a native method that calls back the Java methods below
   private native void nativeMethod();
 
   // To be called back by the native code
   private void callback() {
      System.out.println("Callback is called");
   }
 

}