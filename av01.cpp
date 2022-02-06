#include <stdio.h>
int main(){
int a, b, c;
c = a - b;

/* A atribuição c = a - b é feita antes que as variáveis a e b recebam os valores informados pelo usuário. Logo, não se sabe o valor delas.*/

printf("Entre com um número inteiros:");
scanf("%d", &a);
printf("\nEntre com outro número inteiro:");
scanf("%d",&b);
printf("A diferença entre %d e %d vale %d\n", a, b, c);
}
