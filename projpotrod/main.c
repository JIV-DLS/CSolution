#include <stdio.h>
#include <stdlib.h>

typedef struct Bus{
    int voyage;
    int passager;
} Bus;

int main()
{
    Bus bus[15];
    int prime=2;
    puts("*********************\tAgence de bus*********************\n\n\n");
    for(int i=0;i<15;i++){
        printf("Veuillez entrer le nombre de voyage de ce bus %i: ",i+1);
        while(!scanf("%i",&bus[i].voyage)&&bus[i].voyage<0){
                fflush(stdin);
                bus[i].voyage=0;
            puts("desole le nombre de voyage entre est incorrect!\n");
            printf("Veuillez entrer le nombre de voyage de ce bus %i: ",i+1);
        };
    }
    for(int i=0;i<15;i++){
            printf("\n\n-_-__-_-\tBus %i\t-_-__-_-\n",i+1);
            for(int j=0;j<bus[i].voyage;j++){
                printf("Nombre de passager du voyage %i: ",j+1);
                while(!scanf("%i",&bus[i].passager)&&bus[i].passager<0){
                fflush(stdin);
                bus[i].passager=0;
                    puts("desole le nombre de voyage entre est incorrect!\n");
                    printf("Nombre de passager du voyage %i: ",j);
                };
            }
    }
    for(int i=0;i<15;i++){
            printf("\n\n-_-_-_-_-_-\tBus %i\t_-_-_-_-_-_-_-",i+1);
    if(bus[i].voyage<10)
    printf(" !Ce bus a fait moins de 10 voyages");
    if(bus[i].voyage>10){
        printf("\nle chauffeur de ce bus a fait %i de voyage, ce qui lui rapporte une prime de %d\n",bus[i].voyage,bus[i].voyage-10);
        printf("son salaire totale est de: %d\n", 10+(bus[i].voyage-10)*prime);
    }
    else
        printf("\nle chauffeur de ce bus a fait %i et a pour salaire: %d\n",bus[i].voyage,bus[i].voyage);
    }
    return 0;
}
