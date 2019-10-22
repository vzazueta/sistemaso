#include <stdio.h>
#include <stdlib.h>

#define LIMIT 100

int main(){
    unsigned long long int i,j;
    int *primes;
    int num;

    scanf("%d", &num);
//fprintf(stderr, "rec: %d\n", num);

    for (i=0; i<LIMIT; i++)
        scanf("%d", &primes[i]);;

//fprintf(stderr,"%d\n", primes[num]);

    while(!primes[num])
        num++;

//fprintf(stderr, "mod: %d\n", num);

    for (j=num; (num*j)<LIMIT; j++)
        primes[num*j]=0;

    fprintf(stderr, "%d es primo\n", num);
    printf("%d\n", (num+1));

    for(i=0; i<LIMIT; i++)
        printf("%d ", primes[i]);


return 0;

}