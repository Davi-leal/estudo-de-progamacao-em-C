#include <stdio.h>
#include <string.h>

int main() {
    FILE *estoque = fopen("relatorio_estoque.txt", "w");
    

    fprintf(estoque, "=== RELATÓRIO DE ESTOQUE ===\n\n");

    for (int i = 0; i < 3; i++) {
        char produto[50];
        int itens;
        float preco, valorT;
        
        printf("Qual o nome do produto: ");
        fgets(produto, sizeof(produto), stdin);
        produto[strcspn(produto, "\n")] = 0; // Remove o Enter extra do nome
        
        printf("Qual a quantidade dele em estoque: ");
        scanf("%d", &itens);
        getchar();
        
        printf("digite o preco do produto: ");
        scanf("%f", &preco);
        getchar();
        
        printf("-----------------------------\n\n");
        valorT = preco * itens;
        
        fprintf(estoque, "Produto: %s\n", produto);
        fprintf(estoque, "Preco unitario: %.2f\n", preco);
        fprintf(estoque, "Valor do total de itens: %.2f\n", valorT);
        
        if (itens >= 10) {
            fprintf(estoque, "Status: ESTOQUE OK.\n");
        } else {
            fprintf(estoque, "Status: REPOR ESTOQUE.\n");
        }
        fprintf(estoque, "-----------------------------\n");
    }

    fclose(estoque);
    printf("programa finalizado com sucesso!\n");
    return 0;
}
