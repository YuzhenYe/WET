import java.util.Scanner;

public class Insertion 
{
	public static void main(String argv[]) {
		Scanner in = new Scanner(System.in);
		int tot = in.nextInt();
		int[] nums = new int[tot];
		int i = 0;
		while(i < tot) {
			nums[i] = in.nextInt();
			i ++;
		}

		for(int k = 0; k < tot - 1; k ++) {
			System.out.print(nums[k] + " ");
		}
		System.out.println(nums[tot - 1]);

		for(i = 1; i < tot; i ++) {
			int key = nums[i];
			int j = i - 1;
			while(j >= 0 && nums[j] > key) {
				nums[j + 1] = nums[j];
				j --;
			}
			nums[j + 1] = key;
			for(int k = 0; k < tot - 1; k ++) {
				System.out.print(nums[k] + " ");
			}
			System.out.println(nums[tot - 1]);
		}
	}
}
