public class test {
   static {
      String path =  test.class.getProtectionDomain().getCodeSource().getLocation().getPath();
      System.load(path+"test.so");    
   }
 
   // Instance variables
   private int number = 88;
   private String message = "Hello from Java";
 
   // Declare a native method that modifies the instance variables
   private native void modifyInstanceVariable();
 
   // Test Driver   
   public static void main(String args[]) {
      test obj = new test();
      obj.modifyInstanceVariable();
      System.out.println("In Java, int is " + obj.number);
      System.out.println("In Java, String is " + obj.message);
   }
}