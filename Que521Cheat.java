import java.util.Scanner;

/**
 * Created by Zahi on 15/4/29.
 *
 * @描述 Acm队的流年对数学的研究不是很透彻，但是固执的他还是想一头扎进去。
 * 浏览网页的流年忽然看到了网上有人用玫瑰花瓣拼成了521三个数字，顿时觉得好浪漫，因为每个男生都会不经意的成为浪漫的制造者。此后，流年走到哪里都能看到5、2、1三个数字，他怒了，现在他想知道在连续的数中有多少数全部包含了这三个数字。例如12356就算一个，而5111就不算。特别的，如果他看到了521三个数连续出现，会特别的愤怒。例如35210。
 * @输入 多组测试数据：
 * 一行给定两个数a，b（0<a，b<1000000），表示数字的开始和结束。
 * @输出 一行显示他想要知道的数有几个及显示有多少个数字令他特别的愤怒。用空格隔开。
 */
public class Que521Cheat {

    static int[][] angry = new int[1000001][2];

    static {
        int countAngry = 0;
        int countVeryAngry = 0;
        for (int i = 0; i < angry.length; i++) {
            String target = Integer.toString(i);
            if (target.contains("521")) countVeryAngry++;
            if (target.contains("5") && target.contains("2") && target.contains("1")) countAngry++;
            angry[i][0] = countAngry;
            angry[i][1] = countVeryAngry;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int countCase = 0;
        while (sc.hasNext()) {
            countCase++;
            int from = sc.nextInt();
            int to = sc.nextInt();
            System.out.println("Case " + countCase + ":" + (angry[to][0] - angry[from][0]) + " " +
                    (angry[to][1] - angry[from][1]));
        }
    }
}
