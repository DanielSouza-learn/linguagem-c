#include <stdio.h>
int main(){
int a, b, c;
c = a - b;

/* A atribui��o c = a - b � feita antes que as vari�veis a e b recebam os valores informados pelo usu�rio. Logo, n�o se sabe o valor delas.*/

printf("Entre com um n�mero inteiros:");
scanf("%d", &a);
printf("\nEntre com outro n�mero inteiro:");
scanf("%d",&b);
printf("A diferen�a entre %d e %d vale %d\n", a, b, c);
}
