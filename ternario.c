#include <stdio.h>

int main(){

int opcao;
float nota1 , nota2 , media;

printf("!!! CALCULOS DE NOTAS!!!\n");
printf("1. calcular media de notas\n");
printf("2. saber se foi aprovado com a media\n");
printf("3. sair desse menu\n");
scanf("%d", &opcao);

switch (opcao){
case 1: 
printf("Entre com a primeira nota\n");
scanf("%f", &nota1);
printf("entre com segunda nota\n");
scanf("%f", &nota2);
media = (nota1 + nota2) / 2;
printf("media é: %2.f\n",media);
break;
case 2:
printf("digite a media para saber se foi aprovado\n");
scanf("%f", &media);
media >= 5 ? printf("você passou!\n") : printf("você não passou!\n");
break;
case 3:
printf (" sair do menu\n");
break;
default:
printf("opção invalida!\n");
break;
}

return 0;
}