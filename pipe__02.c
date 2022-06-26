#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
    int fd[2]; /* File descriptors pro Pipe*/
    pid_t pid; /* Variável para armazenar o pid*/

    /* Criando nosso Pipe */
    if(pipe(fd)<0) {
        perror("pipe") ;
        return -1 ;
    }

    /* Criando o processo filho*/
    if ((pid = fork()) < 0)
    {
        perror("fork");
        exit(1);
    }
    /* Processo Pai*/
    if (pid > 0)
    {
        int soma_valor_pai = 0;
	int valor_recebido = 0;
	soma_valor_pai = 1 + 3 + 5 + 7 + 9; 
	/*No pai, vamos LER, então vamos fechar a ESCRITA do Pipe neste lado*/
	close(fd[1]);

        /* Lendo o que foi escrito no pipe */
        read(fd[0], &valor_recebido, sizeof(valor_recebido));
	
	printf("Inteiro lido pelo pai no pipe : '%d'\n\n",valor_recebido);
	
	soma_valor_pai = soma_valor_pai + valor_recebido; 
	
	/* Imprimindo o Resultado na tela */
	printf("Resultado da soma realizada no processo pai: '%d'\n\n",soma_valor_pai);

	exit(0);
    }
    /* Processo Filho*/
    else
    {
        
	int valor_soma = 2 + 4 + 6 + 8 + 10;
        /* No filho, vamos enviar. Então vamos fechar a entrada de leitura do pipe */
        close(fd[0]);
        /* Escrevendo no pipe */
        
	write(fd[1],&valor_soma,sizeof(valor_soma));
        printf("Inteiro Escrito pelo filho no Pipe : '%d'\n\n", valor_soma);
        exit(0);
    }

    return(0);
}

