#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
int EscolhaJogador, EscolhaComputador;
srand(time (0));

printf("JOKENPÔ\n");
printf("Escolha um número abaixo\n");
printf("1 pedra\n");
printf("2 tesoura\n");
printf("3 papel\n");
scanf("%d", &EscolhaJogador);

EscolhaComputador = rand() % 3 +1;

switch (EscolhaJogador){
case 1:
printf("Jogador escolheu pedra -");
break;
case 2:
printf("Jogador escolheu tesoura -");
break;
case 3:
printf("Jogador escolheu papel -");
break;
default:
printf("opção invalida\n");
}

switch (EscolhaComputador){
case 1:
printf("Computador: pedra\n");
break;
case 2:
printf("Computador: tesoura\n");
break;
case 3:
printf("Computador: papel\n ");
break;
}

if (EscolhaComputador == EscolhaJogador){
 printf("### jogo empatou! ###\n");
}else if ( (EscolhaJogador == 1) && (EscolhaComputador == 2) ||
           (EscolhaJogador == 2) && (EscolhaComputador == 3) ||
           (EscolhaJogador == 3) && (EscolhaComputador == 1) )
{
printf("### Você ganhou!\n");
}else{
    printf("voce perdeu!\n");
}
          

}
