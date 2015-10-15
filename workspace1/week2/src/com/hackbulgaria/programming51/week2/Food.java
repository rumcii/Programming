package com.hackbulgaria.programming51.week2;

public class Food {
	private String name;
	private String[] type = {"Milk", "Sweet", "Vegetable", "Fruit", "Bevarage"};
	private String milk = new String[10];
	private int milkWeight = new int[10];
	private String sweet = new String[10];
	private int sweetWeight = new int[10];
	private String vegetable = new String[10];
	private int weight;
	private int capacity;
	private int currentNumber;
	private int maxWeight;
	private int currentWeight;
	
	public String getName() {
		return this.name;
	}
	
	public String getType() {
		String str = "";
		for (int i = 0; i < 5; i++) {
			str = str + type[i] + "\n";
		}
		return str;
	}
	
	public int getWeight() {
		return weight;
	}
	
	//Default constructor
	public Food() {
		
	}
	
}
 