package fatorial;

public class Main {

	public static void main(String[] args) {
		Fatorial a = new Fatorial();
		String commands= "";

        for(String str : args) {
            commands += str;
        }
	
	int convertido = Integer.parseInt(commands);
	System.out.println(a.calcula_fatorial(convertido));

	}

}
