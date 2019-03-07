public class test {
   static {
      String path =  test.class.getProtectionDomain().getCodeSource().getLocation().getPath();
      System.load(path+"test.so"); 
   }

   // Static variables
   private static double number = 55.66;
 
   // Declare a native method that modifies the static variable
   private native void modifyStaticVariable();
 
   // Test Driver
   public static void main(String args[]) {
      test obj = new test();
      obj.modifyStaticVariable();
      System.out.println("In Java, the double is " + number);
   }
}