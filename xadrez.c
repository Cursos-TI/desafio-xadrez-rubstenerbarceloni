#include <stdio.h> 

int main() {
    
      
    // A Torre se move em linha reta (horizontal ou vertical).
    // 5 casas para a direita.
    printf("Movimento da Torre (5 casas para a direita):\n");

    
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");  // Imprime a direção a cada passo
    }

    printf("\n");  
    
    // Movimento do BISPO usando estrutura while
    
    // O Bispo se move na diagonal.
    
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");

    int j = 1;  
    while (j <= 5) { 
        printf("Cima, Direita\n");  
        j++;  
    }

    printf("\n");
    
    // Movimento da RAINHA usando estrutura do-while
    
    // A Rainha se move em qualquer direção.
 
    printf("Movimento da Rainha (8 casas para a esquerda):\n");

    int k = 1; 
    do {
        printf("Esquerda\n");  
        k++;  
    } while (k <= 8);  /

  
    return 0;
}

        printf("\n");
    }

    return 0;
}
