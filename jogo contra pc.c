#include <stdio.h>
#include  <stdlib.h>
#include <time.h> 

int main(){

int Escolhajogador, EscolhaComputador , resultado;
char tipocomparacao;

// gerar numero aleatório

srand(time(0));
EscolhaComputador = rand() % 100 + 1 ;// numero 1 a 100

// escolha das opções 

printf("escolha uma opção abaixo\n");
printf("M. o numero é maior\n");
printf("N. o numero é menor\n");
printf("I. o numero é igual\n");

printf("escolha a comparação\n");
scanf("%c",&tipocomparacao);

printf("Escolha um numero entre 1 a 100\n");
scanf("%d", &Escolhajogador);

switch (tipocomparacao){
case 'M':
case 'm':
printf("voce escolheu a opção maior!!\n");
resultado = Escolhajogador > EscolhaComputador ? 1 : 0;
printf("o computador escolheu :%d e o do jogador é %d\n"  , EscolhaComputador ,Escolhajogador);
break;
case 'N':
case 'n':
printf("voce escolheu a opção menor!!\n");
resultado = Escolhajogador < EscolhaComputador ? 1 : 0;
printf("o computador escolheu :%d e o do jogador é %d\n"  , EscolhaComputador ,Escolhajogador);
break;
case 'I':
case 'i':
resultado = Escolhajogador == EscolhaComputador ? 1 : 0;
printf("voce escolheu a opção igual!!\n");
printf("o computador escolheu :%d e o do jogador é %d\n"  , EscolhaComputador ,Escolhajogador);
break;
default:
printf("opção invalida!\n");
break;
}

if (resultado == 1){
    printf("você venceu!\n");
}else {
    printf("você perdeu!\n");
}

//printf("o computador escolheu :%d\n", EscolhaComputador);



return 0;


}