import java.util.Scanner;

/**
 * Created by Zahi on 15/4/29.
 */
public class Que521 {
    // 程序入口
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int count = 0, from, to;
        int countAngry, countVeryAngry;
        while (sc.hasNextLine()) {
            String[] parts = sc.nextLine().split(" ");
            count++; countAngry = 0; countVeryAngry = 0;
            from = Integer.parseInt(parts[0]);
            to = Integer.parseInt(parts[1]);
            for (int i = from; i <= to; i++) {
                String target = Integer.toString(i);
                if (target.contains("521")) {
                    countVeryAngry++;
                    countAngry++;
                    continue;
                }
                if (target.contains("5")&&target.contains("2")&&target.contains("1")) countAngry++;
            }
            System.out.println("Case "+count+":"+countAngry+" "+countVeryAngry);
        }
    }
}
