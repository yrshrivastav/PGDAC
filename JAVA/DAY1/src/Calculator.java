/*
    
*/
import java.util.Scanner;

class Calculator{

	public static void main(String args[]){

		
		

		Scanner sc= new Scanner(System.in);
		int num1;
		int num2;
		boolean flag= false;
		System.out.println("-------------MENU--------------");
		System.out.println("1. Addition 2. Subtraction 3. Multiply 4. Divide ");
		while(!flag){

			System.out.println("Enter choice");
			switch(sc.nextInt())	{
				case 1:
				System.out.println("Enter no.1 and no.2:");	
					num1 = sc.nextInt();
					num2 = sc.nextInt();
					System.out.println("Addition : " +(num1+num2));
	
				break;
				case 2:
				System.out.println("Enter no.1 and no.2:");	
					num1 = sc.nextInt();
					num2 = sc.nextInt();
					System.out.println("Sub : " +(num1-num2));

	
				break;
				case 3:
				System.out.println("Enter no.1 and no.2:");	
					num1 = sc.nextInt();
					num2 = sc.nextInt();
					System.out.println("Multiply : " +(num1*num2));


				break;
				case 4:
				System.out.println("Enter no.1 and no.2:");	
					num1 = sc.nextInt();
					num2 = sc.nextInt();
					System.out.println("Division : " +(num1/num2));

				break;				
				default :
				System.out.println("You entered wrong choice, dafa hojao");
				flag= true;
				break;


			}
	

		}

	}


}
