#include <stdio.h>

   int main(){
   
     int movimentocompleto = 1 // Flag para controlar o movimento em 'L' 
   
       while (movimentocompleto --)
       { 
         for(int i = 0; i < 2; i++) {  
           printf("Baixo\n"); // imprime "Baixo" duas vezes  
       }  
         printf("Esquerda\n"); // imprime "Esquerda" uma vez 
     
     return 0;

}