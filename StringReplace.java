import java.util.Scanner;

/**
 * Created by Zahi on 15/5/4.
 *
 * @描述
 * 编写一个程序实现将字符串中的所有"you"替换成"we"
 * @输入
 * 输入包含多行数据
 * 每行数据是一个字符串，长度不超过1000
 * 数据以EOF结束
 * @输出
 * 对于输入的每一行，输出替换后的字符串
 */

public class StringReplace {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            StringBuilder sb = new StringBuilder(sc.nextLine());
            int fromIndex = sb.indexOf("you", 0);
            while (fromIndex != -1 && fromIndex < sb.length()) {
                sb.replace(fromIndex, fromIndex + 3, "we");
                fromIndex = sb.indexOf("you", fromIndex + 2);
            }
            System.out.println(sb);
        }
    }
}
