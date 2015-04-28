/**
 * Created by Zahi on 15/4/28.
 *
 * <h>描述</h>
 *  荷兰国旗有三横条块构成，自上到下的三条块颜色依次为红、白、蓝。
 *  现有若干由红、白、蓝三种颜色的条块序列，要将它们重新排列使所有相同颜色的条块在一起。
 *  本问题要求将所有红色的条块放最左边、所有白色的条块放中间、所有蓝色的条块放最右边。
 * <h>输入</h>
 *  第1行是一个正整数n（n<100），表示有n组测试数据。
 *  接下来有n行，每行有若干个由R，W，B三种字符构成的字符串序列，其中R，W和B分别表示红、白、蓝三种颜色的条块,每行最多有1000个字符。
 * <h>输出</h>
 *  对输入中每行上由R，W，B三种字符构成的字符串序列，将它们重新排列使所有相同颜色的条块在一起，满足前述要求。
 * <h>样例输入</h>
 *  3
 *  BBRRWBWRRR
 *  RRRWWRWRB
 *  RBRW
 * <h>样例输出</h>
 *  RRRRRWWBBB
 *  RRRRRWWWB
 *  RRWB
 *
 */

import java.util.Scanner;

public class HollandFlag {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int lines = Integer.parseInt(input.nextLine());
        String[] lineGroup = new String[lines];
        for (int i = 0; i <lines ; i++)
            lineGroup[i] = input.nextLine();

        for (int i = 0; i < lines; i++) {
            StringBuilder R = new StringBuilder();
            StringBuilder W = new StringBuilder();
            StringBuilder B = new StringBuilder();
            for (char c : lineGroup[i].toCharArray()){
                switch (c){
                    case 'R':
                        R.append('R'); break;
                    case 'W':
                        W.append('W'); break;
                    case 'B':
                        B.append('B'); break;
                }
            }
            System.out.println(R.append(W.append(B)));
        }
    }
}
