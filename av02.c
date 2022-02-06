#include<stdio.h>

int main(){
	int num,ind,soma=0;

for (ind=1;ind<=5;ind++)

{ 
printf("Digite numero:");
scanf ("%d",&num);

   if (num%2 == 0)

       soma=soma+num;

 } 

 printf("%d",soma);
	
}
