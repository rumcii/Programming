package firstproject;

public class Main {

	public static void main(String[] args) {

		int a = 5;
		int b = 13;

		System.out.println("a + b = " + (a + b));

		System.out.println();

		for (int i = 0; i < 10; i++) {
			System.out.println("i = " + i);
		}

		if (a < b) {
			System.out.println("a is samller");
		} else {
			System.out.println("b is smaller");
		}

		int i = 0;
		while (i < 10) {
			System.out.println(i);
			i++;
		}
		i = 0;
		do {
			System.out.println("i = " + i);
			i++;
		} while (i < 10);

		int [] n = { 1, 2, 3, 4, 5 };
		System.out.println(n[0]);
		n[1] = 15;
		System.out.println(n[1]);
		
		int [] m = new int [10];
		
		for (i = 0; i < 10; i++) {
			m[i] = i;
		}
				

	}
}
