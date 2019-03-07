public class test {
   static {
      String path =  test.class.getProtectionDomain().getCodeSource().getLocation().getPath();
      System.load(path+"test.so");    
   }
 
 
   // Declare a native method sayHello() that receives nothing and returns void
   private native double average(int n1, int n2);
 
   // Test Driver
   public static void main(String[] args) {
      System.out.println("In Java, the average is " + new test().average(3, 2));
   }
}