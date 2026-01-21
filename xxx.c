#include <stdio.h>

int main (){

    float temperatura, umidade;
    unsigned int estoque;

    printf("Entre com a temperatura\n");
    scanf("%f", &temperatura);
    printf("Entre com a umidade\n");
    scanf("%f", &umidade);
    printf("entre com o estoque\n");
    scanf("%u", &estoque);

    if(temperatura > 26.0){
        printf(" temperatura está normal!\n");
    }else{
        ("temperatura está alta!\n");
    }

   if (umidade > 43.0){
    printf(" umidade está alta!\n");
   }else{
    printf("umidade está ok!!\n");
   }

    if( estoque >= 1000){
        printf("estoque ok!\n");
    }else{
        printf("estoque baixo!\n");
    }


}
