#include<stdio.h>

int main(){
   int numero = 21;
   
   if( (numero % 5 )== 0 ){
   	
   	 printf("%d" , numero , " e multiplo de 5");
   	
   }else{
      printf("O numero %d ", numero , "Não é multiplo de 5");
   }
}
