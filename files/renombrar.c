#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int arc, char **argv){

    char * nombreOriginal = argv[1];
    char * nombreNuevo = argv[2];
    
    char * pwd = getcwd(NULL, 0);

    char pathOriginal[strlen(nombreOriginal) + strlen(pwd) + 2];
    char pathNuevo[strlen(nombreNuevo) + strlen(pwd) + 2];
    
    sprintf(pathOriginal, "%s/%s", pwd, nombreOriginal);
    sprintf(pathNuevo, "%s/%s", pwd, nombreNuevo);

    int resultado = link(pathOriginal, pathNuevo);
    int resultadoUnlink = unlink(pathOriginal);

    if(resultado == -1){
        printf("No c pudo");
        return -1;
    }
}