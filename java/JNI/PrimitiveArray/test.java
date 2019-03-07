public class test {
   static {
   	String path =  test.class.getProtectionDomain().getCodeSource().getLocation().getPath();
   	System.load(path+"test.so"); 
   }
 
   // Declare a native method sayHello() that receives nothing and returns void
   private native double[] sumAndAverage(int[] numbers);
 
   // Test Driver
   public static void main(String[] args) {
    int[] numbers = {22, 33, 33};
    double[] results = new test().sumAndAverage(numbers);
    System.out.println("In Java, the sum is " + results[0]);
    System.out.println("In Java, the average is " + results[1]);
   }
}