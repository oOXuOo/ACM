import java.util.Scanner;

/**
 * Created by Zahi on 15/4/29.
 *
 * @描述
 * 计算正整数二进制中的1的个数
 *
 */

public class CountOneInBinary {

    // 程序入口
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        while (N-- != 0){
            int num = sc.nextInt();
            int count = 0;
            while (num!=0){
                if ((num & 1) == 1) count++;
                num >>= 1;
            }
            System.out.println(count);
        }
    }
}
