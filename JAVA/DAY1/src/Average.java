/*  
    Accept 5 doubles from user (scanner)
    Print it's average.
    
*/

import java.util.Scanner;

class Average{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Hello world");
		double num1 = sc.nextDouble();
		double num2= sc.nextDouble();	
		double num3 = sc.nextDouble();
		double num4 = sc.nextDouble();
		double num5 = sc.nextDouble();

		double avg= (num1+num2+num3+num4+num5)/5;

		System.out.println("Average : "+ avg);
			
	}	

}
