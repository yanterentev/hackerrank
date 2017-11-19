

public class IfElse {

	public static void main(String[] args) {
		if (args.length > 0) {
			System.out.println(args.length);
		} else {
			System.out.println("Нет аргументов");
		}

		if (args.length % 2 == 0) {
			System.out.println("Количество аргументов четное");
		} else if (args.length % 3 == 0) {
			System.out.println("Аргументы кратны 3");
		} else if (args.length % 5 == 0 || args.length % 6 == 0) {
			System.out.println("Аргументы кратны пяти и шести");
		} else if (args.length % 8 == 0 && args.length < 100) {
			System.out.println("Аргументы кратны восьми и меньше ста");
		} else {
			System.out.println("Все неверно");
		}
	}

}