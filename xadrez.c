#include <stdio.h>

int main() {

    int movimentocompleto = 1 // Flag para controlar o movimento em 'L'

    printf("Desafio xadrez!\n");
   
    printf("Mover a Torre 5 casas para a direira... \n");

for (int i = 0; i < 5; i++){ 
    printf("Direira\n"); //imprime a direcao do movimento 
}
   printf ("Mover o bispo 5 casas na diagonal cime e á direira... \n");
   
for (int i = 0; i < 5; i++){ 
    printf("Cima, Direita\n"); //imprime a direcao do movimento 
}   

  printf("Mover a Rainha 8 casas para esquerda... \n");
 
for (int i = 0; i < 8; i++){
    printf("Esquerda \n"); //imprime a direcao do movimento

}

   while (movimentocompleto --)
   {
       for(int i = 0; i < 2; i++) { 
           printf("baixo\n"); // imprime "baixo" duas vezes 
       } 

    return 0;
}
