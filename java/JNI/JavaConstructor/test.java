public class test {
   static {
      String path =  test.class.getProtectionDomain().getCodeSource().getLocation().getPath();
      System.load(path+"test.so"); 
   }

   // Native method that calls back the constructor and return the constructed object.
   // Return an Integer object with the given int.
   private native Integer getIntegerObject(int number);
 
   public static void main(String args[]) {
      test obj = new test();
      System.out.println("In Java, the number is :" + obj.getIntegerObject(9999));
   }
}