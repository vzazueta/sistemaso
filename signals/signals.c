#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

int infinito = 1;

void signalHandler(int signalNumber){
    printf("Signal received %d \n", signalNumber);
    infinito = 0;
}

int main() {
    int pid;
    signal(10, signalHandler);
    pid = fork();

    if(pid == 0){
        printf("Soy el hijo \n");

        while(infinito){
            printf("dentro del infinito \n");
            sleep(1);
        }

        printf("Ya sali \n");
    }
    else{
        printf("Soy el padre \n");
        sleep(2);
        kill(pid, 10);
        for(;;);
    }
}