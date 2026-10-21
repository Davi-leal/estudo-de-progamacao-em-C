#include <stdio.h>
#include <string.h>
#include <locale.h>
#define TAM 70
#define N 10

// struct com as informações dos alunos
struct AlunosNotas {
    char Aluno[TAM];
    int indice;
    float notas;
};

void NotasDesordenadas(struct AlunosNotas alunos[N]); 
void limparBuffer();
void exibirOrdenado(struct AlunosNotas alunos[N]);

int main() {
    struct AlunosNotas Alunos[N];
    struct AlunosNotas temp;
    
    for(int i = 0; i < N; i++) {
        printf("Digite o nome do aluno: ");
        fgets(Alunos[i].Aluno, sizeof(Alunos[i].Aluno), stdin);
        
        printf("Digite o indice de procura do aluno: ");
        scanf("%d", &Alunos[i].indice);
        limparBuffer();

        printf("Digite a nota do aluno: ");
        scanf("%f", &Alunos[i].notas);  
		printf("\n");    
        limparBuffer();

    }
	printf("\nOrdenando as notas dos alunos");
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N - i - 1; j++){
			if(Alunos[j].notas < Alunos[j+1].notas){
				temp = Alunos[j];
				Alunos[j] = Alunos[j+1];
				Alunos[j+1] = temp;
				}
			}
		}
	
	exibirOrdenado(Alunos);
	return 0;
}

void NotasDesordenadas(struct AlunosNotas alunos[N]){
    printf("\n--- Notas Desordenadas ---\n");    
    for(int i = 0; i < N; i++){
        printf("Nota do aluno %d: %.2f\n", i + 1, alunos[i].notas);
    }
}
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
void exibirOrdenado(struct AlunosNotas alunos[N]) {
    printf("\n================ RANQUEAMENTO DE NOTAS ================\n");
    for(int i = 0; i < N; i++) {
        printf("%dº Lugar | O aluno %s (Índice: %d) tirou a nota: %.2f\n", i + 1, alunos[i].Aluno, alunos[i].indice, alunos[i].notas);
    }
    printf("=======================================================\n");
}
