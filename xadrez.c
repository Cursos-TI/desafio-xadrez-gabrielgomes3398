#include <stdio.h>

int main() {
      
    

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

int movimentoCompleto = 1; // Flag para controlar movimento em 'L'
        
        while (movimentoCompleto --) 
         {
             for (int i = 0; i < 2; i++) { 
                  printf("Baixo\n"); // Imprime "Baixo" duas vezes  
             } 
             printf("Esquerda\n"); // Imprime "Esquerda" uma vez  
        }  
      return 0;  

