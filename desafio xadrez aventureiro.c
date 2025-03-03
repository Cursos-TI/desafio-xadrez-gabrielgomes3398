#include <stdio.h>

int main(){
    int movimentoCompleto = 1; // Flag para controlar movimento em 'L'
    
    while (movimentoCompleto --)
     {
         for (int i = 0; i < 2; i++) {
              printf("Baixo\n"); // Imprime "Baixo" duas vezes
         }
         printf("Esquerda\n"); // Imprime "Esquerda" uma vez
    }
  return 0;
} 