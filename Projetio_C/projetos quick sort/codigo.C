#include <stdio.h>
int particionar(float vetor[], int inicio, int fim){
	int pivo = vetor[fim]; 		//ultimo elemento
	int i = inicio - 1;			//posição dos menores
	
	for(int j = inicio; j < fim; j++){
		if(vetor[j] <= pivo){
			i++;
			//troca vetor[i] com o vetor [j]
			float temp = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = temp;
		}
	}
	
	//coloca o pivo na posição definitiva
	float temp = vetor[i + 1];
	vetor[i + 1] = vetor[fim];
	vetor[fim] = temp;
	return i + 1;
}
void quickSort(float vetor[], int inicio, int fim){
	if(inicio < fim){
		int p = particionar(vetor, inicio, fim);
		
		//ordena os elementos a esquerda do pivo
		quickSort(vetor, inicio, p - 1);
		//ordena os elementos a direita do pivo
		quickSort(vetor, p + 1, fim);
	}
}

int main(){
	float tempos[10];
	int n = sizeof(tempos) / sizeof(tempos[0]);
	
	printf("--- ANALISADOR DE TEMPOS: 100 METROS RASOS ---\n");
    printf("Digite os tempos dos 10 atletas:\n");
	for(int i = 0; i < 10; i++){
		printf("Tempo do atleta %d: ", i+1);
		scanf("%f", &tempos[i]);
	}
	
	quickSort(tempos, 0, n -1);
	
	printf("\n--- PÓDIO E CLASSIFICAÇÃO FINAL ---\n");
    for(int i = 0; i < n; i++){
        if(i == 0) {
            printf("1º LUGAR (OURO): %.2f \n", tempos[i]);
        } else if(i == 1) {
            printf("2º LUGAR (PRATA): %.2f \n", tempos[i]);
        } else if(i == 2) {
            printf("3º LUGAR (BRONZE): %.2f \n", tempos[i]);
        } else {
            printf("%dº LUGAR: %.2f s\n", i + 1, tempos[i]);
        }

	}
}
