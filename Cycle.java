

public class Cycle {
	
	public static void main(String[] args) {
		for (int i = 0;i < 100 ; ++i) {
			if (i % 2 == 0 && i % 3 == 0) {
				System.out.println("i = " + i);
			}
		}

		double x = 0.0;

		while (x < 2*3.15) {
			System.out.println("x = " + x + " sin(x) = " + Math.sin(x) + " cos(x) = " + Math.cos(x));
			x += 0.1;
		}

		x = 0.0;
		do {
			System.out.println("x = " + x + " sin(x) = " + Math.sin(x) + " cos(x) = " + Math.cos(x));
			x += 0.1;
		} while (x < 2*3.15);
	}
}