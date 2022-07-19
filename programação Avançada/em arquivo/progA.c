#include <stdio.h>

int main (){
	
	FILE *p;
	int a;

	p = fopen("Com.txt","w");

	for(int i=0 ; i <3 ; i++){
		scanf("%d",&a);
		fprintf(p,"%d\n",a);
	}
	fclose(p);


return 0;}
