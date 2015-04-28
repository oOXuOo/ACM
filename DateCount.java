/**
 * @author Zahi
 * @CreateOn: 2015年4月28日下午8:52:29
 * @问题描述: 如题，输入一个日期，格式如：2010 10 24 ，判断这一天是这一年中的第几天。
 */


import java.util.Scanner;


public class DateCount {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] dayInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int N = sc.nextInt();

        while (N-- != 0) {
            int year = sc.nextInt();
            int month = sc.nextInt();
            int day = sc.nextInt();
            int answer = 0;
            for (int i = 0; i < month - 1; i++) {
                answer += dayInMonth[i];
            }
            answer += day;
            if ((year % 4 == 0 && year / 100 != 0 || year % 400 == 0) && month > 2)
                answer += 1;
            System.out.println(answer);
        }
    }
}