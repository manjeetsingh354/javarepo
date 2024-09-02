import java.util.Scanner;

public class percentage {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter marks of subject1");
        int subject1 = sc.nextInt();
        System.out.println("enter the markers of subject2");
        int subject2 = sc.nextInt();
        int percentage = (subject1 + subject2)*100/200 ;
        System.out.println(percentage); 

    }

}
