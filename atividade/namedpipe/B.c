#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    int fd;

    // FIFO file path
    char * myfifo = "/tmp/myfifo";

    // Creating the named file(FIFO)
    // mkfifo(<pathname>,<permission>)
    mkfifo(myfifo, 0666);

    int valores[3];
    // First open in read only and read
    fd = open(myfifo,O_RDONLY);
    read(fd, valores, sizeof(valores));
    
    float media = (valores[0] + valores[1] + valores[2])/3;
    // Print the read string and close
    printf("Media é: %f\n", media);
    close(fd);


    return 0;
}
