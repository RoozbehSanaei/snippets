class test {
   static {
      String path =  test.class.getProtectionDomain().getCodeSource().getLocation().getPath();
      System.load(path+"test.so");    
   }
 

 
   // Test Driver   
   public static void main(String args[]) {
      newclass obj = new newclass();
      obj.modifyInstanceVariable();
      System.out.println("In Java, String is " + obj.msg);
   }
}

class newclass{
      public String msg = "Hello from Java";
      public native void modifyInstanceVariable();
}