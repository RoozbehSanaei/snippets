 public class test {
   static {
      String path =  test.class.getProtectionDomain().getCodeSource().getLocation().getPath();
      System.load(path+"test.so"); 
   }
 
   // A native method that returns a java.lang.Integer with the given int.
   private native Integer getIntegerObject(int number);
 
   // Another native method that also returns a java.lang.Integer with the given int.
   private native Integer anotherGetIntegerObject(int number);
 
   public static void main(String args[]) {
      test obj = new test();
      System.out.println(obj.getIntegerObject(1));
      System.out.println(obj.getIntegerObject(2));
      System.out.println(obj.anotherGetIntegerObject(11));
      System.out.println(obj.anotherGetIntegerObject(12));
      System.out.println(obj.getIntegerObject(3));
      System.out.println(obj.anotherGetIntegerObject(13));
   }
}