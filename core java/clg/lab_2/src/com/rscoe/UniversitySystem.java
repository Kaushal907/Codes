package com.rscoe;

class Person
{
	private int id;
	private String name;
	
	public Person(int id,String name)
	{
		this.id = id;
		this.name = name;
	}
	void display()
	{
		System.out.println("Person ID   : "+id);
		System.out.println("Person Name : "+name);
	}
}

class Student 
{
	private 
}

public class UniversitySystem
{
	public static void main(String args[])
	{
		
		
		Person ob = new Person(16,"Kaushal");
		
		ob.display();
	}
}