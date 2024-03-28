package Java;

import java.util.Scanner;

public class outputformatting {

    public static void main(String[] args) {
            Scanner sc =new Scanner(System.in);
            System.out.println("================================");
            for(int i=0;i<3;i++){
                String s1=sc.next();
                int x=sc.nextInt();
                //Complete this line
                
                // formats the String s1 to have a minimum width of 15 characters, with left-alligned
                System.out.printf("%-15s", s1);
                
                // formats the integer x to have a minimum width of 3 digits, with leading zeros if necessary
                System.out.printf("%03d", x);
                
                // new line for next string and number
                System.out.println();
                
            }
            System.out.println("================================");
            sc.close();
    }
}
