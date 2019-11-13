#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int arc, char **argv){

    char * nombreArchivo = argv[1];
    char * pwd = getcwd(NULL, 0);
    char pathArchivo[strlen(nombreArchivo) + strlen(pwd) + 2];
    
    sprintf(pathArchivo, "%s/%s", pwd, nombreArchivo);

    int resultado = unlink(pathArchivo);

    if(resultado == -1){
        printf("No c pudo");
        return -1;
    }
}