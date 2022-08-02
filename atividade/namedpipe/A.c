
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
    // mkfifo(<pathname>, <permission>)
    mkfifo(myfifo, 0666);

    int valores[3];
    
    scanf("%d %d %d", &valores[0], &valores[1], &valores[2]);
    
    // Open FIFO for write only
    fd = open(myfifo, O_WRONLY);

        
    write(fd, valores, sizeof(valores));
    close(fd);
 
    return 0;
}
