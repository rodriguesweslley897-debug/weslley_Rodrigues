#include <stdio.h>

int main(){

int carta1, carta2;

printf(" !!!COMPARAÇÕES CARTAS SUPERTRUNFO!!!\n");
printf("1 POPULAÇÃO:\n");
printf("2 AREA POR KM²:\n");
printf("3 PIB:\n");
scanf("%d", &carta1);

switch(carta1){
case 1:
printf("jogador escolheu população:\n");
break;
case 2:
printf("jogador escolheu area por km²:\n");
break;
case 3:
printf("jogador escolheu Pib:\n");
break;
default:
printf("opção invalida\n");
break;

}
}