package com.hackbulgaria.programming51.week2;

public class Person {
	public String firstName;
	private String lastName;
	private int age;
	
	//Default constructor
	public Person() {
		firstName = "unnamed";
		lastName = "unnamed";
		age = 0;
	}
	
	public Person(String firstName, String lastName, int age) {
		this.firstName = firstName;
		this.lastName = lastName;
		this.age = age;
	}
	
	public String getName() {
		return firstName + " " + lastName;
	}
	
	public int getAge() {
		return age;
	}
}