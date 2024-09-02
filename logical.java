import java.util.Scanner;
public class logical {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the age ");
        int age = sc.nextInt();

      /* 
        if(age>56){
            System.out.println("you are experienced");
        }
        else if(age>35){
            System.out.println("you are experienced");
        }
        else{
            System.out.println("you are not experiencerd");
        }
        */
        switch(age){
            case 15:
            System.out.println("you are minor");
            break;
            case 18:
            System.out.println("you are now an adult");
            break;
            default:
            System.out.println("enjoy ur life");
            
        }



            
        }
    }


