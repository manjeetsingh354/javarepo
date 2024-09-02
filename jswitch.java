import java.util.Scanner;
public class jswitch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the age:");
        int age = sc.nextInt();
        switch(age){
            case 15:
            System.out.println("yoy are minor ");
            break;
            case 18:
            System.out.println("you are adult");
            break;
            default:
            System.out.println("enjoy ure liffe");
        }
        System.out.println("thanks for using my java code");

    }

}
