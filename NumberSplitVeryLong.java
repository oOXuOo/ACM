import java.math.BigDecimal;
import java.text.DecimalFormat;
import java.util.Scanner;

/**
 * Created by Zahi on 15/5/3.
 *
 * @描述
 * 在一个遥远的国家，银行为了更快更好的处理用户的订单，决定将一整串的数字按照一定的规则分隔开来，分隔规则如下：
 * 1、实数的整数部分按照每三个数字用逗号分隔开（整数部分的高位有多余的0时，需先将多余的0过滤后，再进行数字分隔，
 * 如：0001234567 输出结果为1,234,567.00）
 * 2、小数部分保留两位小数(四舍五入)
 * 3、如果该数是负的，则在输出时需用括号将分隔后的数字括起来，例如：-10005.1645的输出结果为(10,005.16)
 * @输入
 * 多组测试数据，每行输入一个实数n（n的位数小于double的处理能力）
 * @输出
 * 输出分隔后的结果
 */
public class NumberSplitVeryLong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            BigDecimal big = sc.nextBigDecimal();
            DecimalFormat df = new DecimalFormat("####,##0.00;(####,##0.00)");
            System.out.println(df.format(big));
        }
    }
}
