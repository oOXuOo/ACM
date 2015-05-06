import java.util.Scanner;

/**
 * Created by Zahi on 15/5/4.
 */
public class CountDivisor {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        while (N-- != 0) {
            int num = sc.nextInt()+1;
            int count = 0;
            for (int i = 2; i < Math.sqrt(num+1.0); i++)
                if (num%i == 0) count++;
            System.out.println(count);
        }
    }
}
