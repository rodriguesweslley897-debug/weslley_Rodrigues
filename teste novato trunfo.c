#include <stdio.h>

int main (){

// COMPARAÇÃO DE CARTAS SUPERTRUNFO!!//

float Populacaocarta1 , Populacaocarta2;
int PontosTuristicoscarta1, PontosTuristicoscarta2;
int resultado1;
int resultado2;

printf("Entre com a população da carta 1\n ");
scanf("%f", &Populacaocarta1);
printf("Entre com a população da carta 2\n");
scanf("%f", &Populacaocarta2);
printf("Comente o numero de pontos Turisticos da carta 1\n");
scanf("%d", &PontosTuristicoscarta1);
printf("Comente o numero de pontos Turisticos da carta 2\n");
scanf("%d", &PontosTuristicoscarta2);


printf("o resultado 1 é :", resultado1); 
if( resultado1 = Populacaocarta1 > Populacaocarta2){
    printf("carta 1 venceu!!\n");
}else{
    printf("carta 2 venceu!!\n");
}

printf("O resultado 2 é:", resultado2);

if(resultado2 = PontosTuristicoscarta1 > PontosTuristicoscarta2){
    printf("Carta 1 tem mais pontos turisticos!\n");
}else{
    printf("Carta 2 tem mais pontos turisticos!\n");
}


}