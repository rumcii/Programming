package com.hackbulgaria.programming51.week2;

public class Main {

	public static void main(String[] args) {
		Person ivan = new Person("Ivan", "Ivanov", 21);
		Auto ford = new Auto();
		ford.addOwner(ivan.getName());
		
		System.out.println(ford.owner);
	}

}
