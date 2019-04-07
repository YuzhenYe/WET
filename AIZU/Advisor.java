import java.util.Scanner;

public class Advisor {
	public static int gcd(int x, int y) {
	        if (x % y == 0) return y;
       	 	else return gcd(y, x % y);
	}	
	public static void main(String argv[]) {
		Scanner in = new Scanner(System.in);
		int a = in.nextInt();
		int b = in.nextInt();
        	int d = gcd(a, b);
        	System.out.println(d);
	}
}

