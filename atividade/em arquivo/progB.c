#include <stdio.h>

int main (){
	
	FILE *p;

	int a,soma=0;
	double media;
	p = fopen("Com.txt", "r");
	
	while (fscanf(p, "%d", &a) != EOF) {
        soma+=a;
    }
	fclose(p);
	media= soma/3;
	printf("%lf",media);

return 0;
}
