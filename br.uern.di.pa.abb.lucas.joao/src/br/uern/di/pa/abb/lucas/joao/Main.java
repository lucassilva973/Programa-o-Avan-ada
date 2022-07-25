package br.uern.di.pa.abb.lucas.joao;

import br.uern.di.pa.abb.lucas.joao.Passaro;
import br.uern.di.pa.abb.lucas.joao.Currupio;
import br.uern.di.pa.abb.lucas.joao.Papagaio;

public class Main {
	
	public static void main(String[] args) {
	Passaro p1= new Papagaio(100);
	Passaro p2= new Currupio(200);
	
	p1.cantar();
	p1.voar(150);
	
	p2.cantar();
	p2.voar(50);
	
	}
}
