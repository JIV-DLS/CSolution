#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(){
    int number,sqrtN;
    printf("Veuillez entrer le nombre: ");
    scanf("%i",&number);
    sqrtN=sqrt(number);
    puts("Decomposition en nombre premier:");

    for(int i=2;i<=number;i++){
        if(!(number%i)){
            int puis=0;
            for(;!(number%i);puis++)number/=i;
            printf("%i^(%i) %c ",i,puis,number>1?'+':' ');
        }
    }
}
