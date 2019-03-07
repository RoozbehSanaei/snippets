public class main {
	public static void main(String argv[]) {
	System.load("/home/roozbeh/Dropbox/Codes/examples/java/swig/swig tutorial example/example.so");
	System.out.println(example.getMy_variable());
	System.out.println(example.fact(5));
	System.out.println(example.get_time());
	}
}