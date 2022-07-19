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
    
	int a,vetor[3];
	
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a);
        vetor[i]=a;
    }

	close(fd[0]);
    
    write(fd[1],vetor,sizeof(vetor));
    
    exit(0);
   
return 0;}
