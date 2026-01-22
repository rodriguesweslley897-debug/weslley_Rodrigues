#include <stdio.h>

int main (){

// COMPARAÇÃO DE CARTAS SUPERTRUNFO!!//

 int Populacaocarta1 , Populacaocarta2;
int PontosTuristicoscarta1, PontosTuristicoscarta2;
int resultado1;
int resultado2;

// Dados carta 1//

Populacaocarta1 = 888;
PontosTuristicoscarta1 = 10;

// Dados carta 2//

Populacaocarta2 = 999;
PontosTuristicoscarta2 = 11;

printf("O valor da população da carta 1 é: %d \n", &Populacaocarta1);
printf("O valor da população da carta 2 é: %d \n", &Populacaocarta2);
printf("O valor dos pontos turisticos da carta 1 é: %d \n", &PontosTuristicoscarta1);
printf("O valor dos pontos turisticos da carta 2 é: %d \n", &PontosTuristicoscarta2);


printf("o resultado 1 é :", resultado1); 
if( resultado1 = Populacaocarta1 < Populacaocarta2){
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