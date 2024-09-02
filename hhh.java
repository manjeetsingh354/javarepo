import java.util.Scanner;
public class hhh {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the marks of sub1");
        int sub1 = sc.nextInt();
        System.out.println("enter the marks of sub2");
        int sub2 = sc.nextInt();
        System.out.println("enter the marks of sub3");
        int sub3 = sc.nextInt();
        int sum = sub1 + sub2 + sub3 ;
        System.out.println("enter the out of total marks");
        int tm = sc.nextInt();
        int p = sum *100/tm;
        System.out.println(p);



        
        

     
    }

}
