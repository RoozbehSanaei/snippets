import java.util.*;

class test {
  //Native method declaration
  native int[] loadFile(int[] name);
  //Load the library
   static {
    String path =  test.class.getProtectionDomain().getCodeSource().getLocation().getPath();
    System.load(path+"test.so"); 
   }

  public static void main(String args[]) {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    //Create class instance
    test mappedFile=new test();
    //Call native method to load SendArray.java
    int[] buf = mappedFile.loadFile(arr);
    //Print contents of SendArray.java
    for(int i=0;i<buf.length;i++) {
      System.out.print(buf[i]+" , ");
    }
  }
}