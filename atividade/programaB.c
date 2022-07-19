#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main (){
	
    int fd[2];
    
    if(pipe(fd)<0) {
        perror("pipe") ;
        return -1 ;
    }
    
    int vetor[3],soma=0;
    
    close(fd[1]);
    
    read(fd[0],vetor,sizeof(vetor));
    
    for(int i=0; i<3; i++)
        soma+=vetor[i];
    
    double mediaAritimetica;
    mediaAritimetica= soma/3;
    
    printf("%lf",mediaAritimetica);
    
    exit(0);
return 0;}
