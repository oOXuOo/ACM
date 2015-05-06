import java.util.Scanner;

/**
 * Created by Zahi on 15/5/4.
 *
 *
 */
public class StringMatch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = Integer.parseInt(sc.nextLine());
        while (N-- != 0) {
            String mt = sc.nextLine();
            StringBuilder sb = new StringBuilder(sc.nextLine());
            int count = 0;
            int preIndex = -1;
            int nextIndex = sb.indexOf(mt, 0);
            while (nextIndex!=-1&&nextIndex != preIndex) {
                count++;
                preIndex = nextIndex;
                nextIndex = sb.indexOf(mt, preIndex+1);
            }
            System.out.println(count);
        }
    }

}
