package fatorial;

import java.math.BigInteger;

public class Fatorial {

	public static BigInteger calcula_fatorial (int valor) {
		
		if(valor == 0) return BigInteger.ONE;

        BigInteger fat = BigInteger.valueOf(valor);

        return fat.multiply(calcula_fatorial(valor-1));		
	}
	
}

