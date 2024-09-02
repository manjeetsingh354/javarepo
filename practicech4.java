import java.util.Scanner;

public class practicech4 {
    public static void main(String[] args) {
        byte m1 , m2 , m3 ;
        Scanner sc = new Scanner(System.in);
        System.out.println("enter maths marks:");

        m1 = sc.nextByte();
        System.out.println("enter marks of physics:");
        m2 = sc.nextByte();
        System.out.println("enter marks of chemistry");
        m3 = sc.nextByte();
        float avg = (m1 + m2 + m3)/3.0f;
        if(avg>40 && m1>33 && m2>33 && m3>33){
            System.out.println("you are promoted");

        }
        else{
            System.out.println("you are fail sorry");

        }
            
        
    }

}
