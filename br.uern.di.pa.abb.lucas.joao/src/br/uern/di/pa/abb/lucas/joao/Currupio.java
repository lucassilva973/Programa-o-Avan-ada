package br.uern.di.pa.abb.lucas.joao;

public class Currupio extends Passaro {
	
	private int distanciaDeVoo=0;
	
	
	public Currupio (int distanciaDeVoo) {
		this.distanciaDeVoo = distanciaDeVoo;
	}
	
	public int getDistanciaDeVoo() {
		return distanciaDeVoo;
	}
	public void setDistanciaDeVoo(int distanciaDeVoo) {
		this.distanciaDeVoo = distanciaDeVoo;
	}
	@Override
	public void cantar() {
		System.out.println("Piu frio fru fri Pió");		
	}

	@Override
	public int voar(int valor) {
		int distancia=0;
		if(this.distanciaDeVoo < valor) {
			distancia = this.distanciaDeVoo;
		}else {
			distancia = valor;
		}
		return distancia;
	}

}
