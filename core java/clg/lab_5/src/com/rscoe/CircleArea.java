package com.rscoe;

import java.util.Scanner;

class Area{
	private int radius;
	
	public Area()
	{
		
	}
	
	public Area(int radius)
	{
		this.radius = radius;
	}
	
	public void areaCirle()
	{
		double area = 3.14 * radius * radius;
		System.out.println("Area Of Circle : "+area);
	}
	
	public void perimeterCirle()
	{
		double perimeter = 2 * 3.14 * r;
		System.out.println("Perimeter of Circle : "+perimeter);
	}
}

public class CircleArea {

	public static void main(String[] args) {
		Scanner sr = new Scanner(System.in);
				
			Area ob = new Area(5);
			ob.areaCirle();
			
			Perimeter ob = new Perimeter(5);
			ob.perimeterCircle();

	}

}
