import java.util.Scanner;

/**
 * Created by Zahi on 15/4/30.
 *
 * @描述
 * 做了A+B Problem之后，Yougth感觉太简单了，于是他想让你求出两个数反转后相加的值。帮帮他吧
 * @输入
 * 有多组测试数据。每组包括两个数m和n，数据保证int范围，当m和n同时为0是表示输入结束。
 * @输出
 * 输出反转后相加的结果。
 */
public class ReversePlus {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (true) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            if (a==0 && b==0)
                break;
            else {
                StringBuilder asb = new StringBuilder(Integer.toString(a)).reverse();
                StringBuilder bsb = new StringBuilder(Integer.toString(b)).reverse();
                System.out.println(Integer.parseInt(asb.toString()) + Integer.parseInt(bsb.toString()));
            }
        }
    }
}
