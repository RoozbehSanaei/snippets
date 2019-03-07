public class test {
   static {
      String path =  test.class.getProtectionDomain().getCodeSource().getLocation().getPath();
      System.load(path+"test.so");    
   }
 
 
 
   // Declare a native method sayHello() that receives nothing and returns void
   private native String sayHello(String msg);
 
   // Test Driver
   public static void main(String[] args) {
	  String result = new test().sayHello("Hello from Java");
	  System.out.println("In Java, the returned string is: " + result);
   }
}