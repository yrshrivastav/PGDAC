/*  
    Write Java program for the following - 
    It should  run till user enters any other option than add or sub or multiply or divide
    Prompt user to enter the input operation : (add|subtract|multiply|divide) & 2 numbers(double)
    Display the result of the operation.
    Use Scanner for accepting all inputs from user. 
    Hint : use switch-case
*/
import java.util.Scanner;

class Menu{

	public static void main(String args[]){
		int dosaprice= 80;
		int samosaprice=20;
		int idliprice=40;
		int quantity;
		int caluculate=0;

		Scanner sc= new Scanner(System.in);

		boolean flag= false;
		System.out.println("MENU 1. DOSA 2. SAMOSA 3. IDLI");
		while(!flag){
			System.out.println("Enter choice");
			switch(sc.nextInt())	{
				case 1:
				System.out.println("Enter quantity");	
				quantity=sc.nextInt();
				caluculate = (dosaprice* quantity)+caluculate;
	
				break;
				case 2:
				System.out.println("Enter quantity");	
				quantity=sc.nextInt();
				caluculate = (samosaprice* quantity)+caluculate;
	
				break;
				case 3:
				System.out.println("Enter quantity");	
				quantity=sc.nextInt();	
				caluculate = (idliprice* quantity)+caluculate;

				break;
				
				default :
				System.out.println("You entered wrong choice, total bill "+caluculate);
				flag= true;
				break;


			}
	

		}

	}


}

