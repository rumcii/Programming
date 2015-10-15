//Coffee Machine
//In a com.hackbulgaria.programming51.week2 package create a CoffeeMachine class,
//where you have the following attributes:
//
//Coffee[] brandsOfCoffee - an array for Coffee. One coffee machine can hold up to 10 brands of coffee.
//float balance - the current money balance in the coffee machine.
//And the following methods:
//
//Create method for adding Coffee in the machine - public boolean addCoffee(Coffee coffee). 
//The method should return true if you can add that coffee type to the machine. 
//Otherwise, return false (more than 10 cups are added)
//Create method for buying Coffee from the Coffee Machine public float buyCoffee(String brand, float price).
//This method recieves coffee brand and money given by the buyer. 
//If the coffee brand exsists in brandsOfCoffee - return the change. 
//If it doesn't - return -1. The amounts of coffee we can buy, for now, is unlimited.
//Example in main:
//
//CoffeeMachine cm = new CoffeeMachine();
//Coffee java = new Coffee();
//Coffee latte = new Coffee();
//
//java.brand = "Java";
//java.price = 1.00;
//
//latte.brand = "Latte";
//latte.price = 1.50;
//
//cm.addCoffee(java);
//cm.addCoffee(latte);
//
//System.out.println(cm.buyCoffee("Latte",3.40));
//System.out.println("Current balance: " + cm.balance));
//Should return:
//
//1.90
//Current balance: 1.50


package com.hackbulgaria.programming51.week2;

public class CoffeeMachine {
	
	private Coffee [] brands = new Coffee[10];
	private float currentBalans = 0;
	private int currentIndex = 0;
	private int maxCapacity = 10;
	private float reminder = 0;
	private float pay = 0;
	//Default string
	public CoffeeMachine() {
		
	}
	
	public boolean addToBrands(String brand) {
		if (currentIndex < maxCapacity) {
			brands[currentIndex] = brand;
			currentIndex++;
			return true;
		}
		return false;
	}
	
	private float givingChange(float pay, float price) {
		reminder = pay - price;
		return reminder;
	}
	
	public float machineBalans(String brand, float pay) {
		for (int i = 0; i < 10; i ++) {
			if (brands[i].equals(brand)) {
				
			}
		}
	}

}
