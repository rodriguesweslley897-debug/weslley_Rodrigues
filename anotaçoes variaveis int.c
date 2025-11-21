#include <stdio.h>

int main(){

 int a = 30;
 int b = 10;
 int soma = a + b;
 int diferenca = a - b;
 int produto = a * b;
 int quociente = a / b; // note que a divisão de inteiros será inteiro

 printf("Soma: %d\n", soma);
 printf("Diferença: %d\n", diferenca);
 printf("Produto: %d\n", produto);
 printf("Quociente: %d\n", quociente);

return 0;

}




#include <stdio.h>

int main(){

 float y = 4.4;
 float x = 7.7;
 float soma = x + y;
 float diferenca = x - y;
 float produto = x * y;
 float quociente = y / x; // note que a divisão de inteiros será inteiro

 printf("Soma: %.2f\n", soma);
 printf("Diferença: %.2f\n", diferenca);
 printf("Produto: %.2f\n", produto);
 printf("Quociente: %.2f\n", quociente);

return 0;

}