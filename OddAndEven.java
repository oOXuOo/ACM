import java.util.Scanner;

public class OddAndEven {

    public static void main(String[] args) {
        // 获取数据
        Scanner input = new Scanner(System.in);
        int groups = input.nextInt();
        int[] numbers = new int[groups];
        for (int i = 0; i < groups; i++) {
            numbers[i] = input.nextInt();
        }

        for (int number : numbers) {
            // 输出奇数
            for (int i = 1; i <= number; i += 2) {
                System.out.print(i + " ");
            }
            System.out.println();
            // 输出偶数
            for (int i = 2; i <= number; i += 2) {
                System.out.print(i + " ");
            }
            System.out.println();
        }
    }
}
