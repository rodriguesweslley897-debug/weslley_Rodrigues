#include <stdio.h>

int main(){

int escolhacarta1, escolhacarta2;
float populacaoBrasil = 112.0;
float populacaoCanada =119.0;
float areaBrasil = 22.2 , areaCanada = 11.0;
int pontosturisticosBrasil = 38 , pontosturisticosCanada = 20;

printf("!!!CARTAS DISPONIVEIS BRASIL X CANADA!!!!\n");
printf("Escolha uma dessas opções abaixo para comparação!!!:\n");
printf("1:população\n");
printf("2:area\n");
printf("3:pontos turisticos\n");
printf("escolha:\n");
scanf("%d", &escolhacarta1);


switch (escolhacarta1){
case 1:
printf("escolheu 1 população brasil: %f\n", populacaoBrasil);
printf("escolheu 1 população Canada: %f\n", populacaoCanada);
if (populacaoBrasil == populacaoCanada){
    printf("empatou\n");
}else if (populacaoBrasil > populacaoCanada){
    printf("Brasil 1 venceu\n");
}else{
    printf("Canada 2 venceu\n");
}
break;
case 2:
printf("escolheu 2 area brasil km²: %f\n", areaBrasil);
printf("escolheu 2 area canada km²: %f\n", areaCanada);
if (areaBrasil == areaCanada){
    printf("areas iguais então é empate!\n");
}else if (areaBrasil > areaCanada){
    printf("brasil venceu!!\n");
}else {
    printf("canada venceu!!\n");
}
break;
case 3:
printf("escolheu 3 pontos turisticos brasil: %d\n", pontosturisticosBrasil);
printf("escolheu 3 pontos turisticos canada: %d\n", pontosturisticosCanada);
if (pontosturisticosCanada == pontosturisticosBrasil){
    printf("empatou ambas são iguais!!\n");
}else if (pontosturisticosCanada > pontosturisticosBrasil){
    printf("Canada ganhou!!\n");
}else {
    printf("brasil ganhou\n");
}
break;
default:
printf("nenhuma das opções são validas\n");
break;
}


}

