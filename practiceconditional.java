
import java.util.Scanner;

public class practiceconditional {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("markas of sub1:");
        int sub1 = sc.nextInt();
        System.out.println("marks of sub2:");
        int sub2 = sc.nextInt();
        System.out.println("marks of sub3:");
        int sub3 = sc.nextInt();
        int sum = sub1 + sub2 + sub3;
        int percentage = sum*100/300;
        if(percentage<33){
            System.out.println("sorry you are fail");
        }
        else{
            System.out.println("congratulations you are qualified");
        }


    }

}
