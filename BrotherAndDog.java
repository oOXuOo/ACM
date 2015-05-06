import java.util.Scanner;

/**
 * Created by Zahi on 15/4/29.
 * @描述
 * 兄弟俩骑车郊游，弟弟先出发，每分钟X米，M分钟后，哥哥带一条狗出发。以每分钟Y米的速度去追弟弟，而狗则以每分钟Z米的速度向弟弟跑去，追上弟弟后又立即返回，直到哥哥追上弟弟时，狗跑了多少米？
 * @输入
 * 第一行输入一个整数N，表示测试数据的组数(N<100)
 * 每组测试数据占一行，是四个正整数，分别为M,X,Y,Z（数据保证X<Y<Z)
 * @输出
 * 输出狗跑的路径，结果保留小数点后两位。
 */
public class BrotherAndDog {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        double M, X, Y, Z, tot;
        while (N-- != 0) {
            M = sc.nextDouble();
            X = sc.nextDouble();
            Y = sc.nextDouble();
            Z = sc.nextDouble();
            tot = (M * X / (Y - X)) * Z;
            System.out.printf("%.2f\n", tot);

        }
    }
}
