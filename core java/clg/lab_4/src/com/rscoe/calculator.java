package com.rscoe;

import java.util.Scanner;

public class calculator {
	
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		
		int choice;
		Double num1, num2, result;
		
		while(true) {
			System.out.println("Calculator ");
			System.out.println("1. Addition ");
			System.out.println("2. Subtraction ");
			System.out.println("3. EXIT ");
			System.out.print("Choose an operator : ");
			choice = sc.nextInt();
			
			if(choice == 3) {
				System.out.println("Exit Calculator,ThankkYouu!! Visit Again!!");
				break;
			}
			
			System.out.print("Enter First Number : ");
			num1 = sc.nextDouble();
			
			System.out.print("Enter Second Number : ");
			num2 = sc.nextDouble();
			
            switch (choice) {
            case 1:
                result = num1 + num2;
                System.out.println("Result: " + result);
                break;

            case 2:
                result = num1 - num2;
                System.out.println("Result: " + result);
                break;

            default:
                System.out.println("Invalid choice!!");
        }
		
		}
		sc.close();
		
	}

}
