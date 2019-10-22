#include "types.h"
#include "stat.h"
#include "user.h"
//#include "stdio.h"
//#include "stdlib.h"

int main(int argc, char *argv[]) {
	int sleep_sec;

	if (argc < 2){
		printf(2, "Uso: segundos dormido\n");
		exit();
	}

	sleep_sec = atoi(argv[1]);

    if (sleep_sec > 0){
		sleep(sleep_sec);
	}
    else {
		printf(2, "Intervalo invalido %s\n", argv[1]);
	}

	exit();
}