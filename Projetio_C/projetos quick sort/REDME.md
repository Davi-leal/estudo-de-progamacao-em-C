[readme_analisador_de_tempos.md]
# Analisador de Tempos — 100 Metros Rasos 

Este projeto em C realiza a leitura, ordenação e exibição dos tempos alcançados por 10 atletas em uma prova de corrida de 100 metros rasos. A ordenação é realizada utilizando o algoritmo **QuickSort**, apresentando ao final a classificação completa e o pódio (Ouro, Prata e Bronze).

---

##  Funcionalidades

- **Entrada Interativa:** Leitura dos tempos em segundos de 10 atletas através do terminal.
- **Algoritmo QuickSort:** Ordenação eficiente dos tempos em ordem crescente (menor tempo indica melhor colocação).
- **Pódio e Ranking:** Destaque para os três primeiros colocados (Medalhas de Ouro, Prata e Bronze) e listagem ordenada das posições restantes.

---

## Estrutura do Código

O programa é dividido nas seguintes funções:

- `particionar(float vetor[], int inicio, int fim)`: Seleciona o pivô (último elemento do intervalo) e reorganiza os elementos de modo que valores menores ou iguais ao pivô fiquem à esquerda e os maiores à direita.
- `quickSort(float vetor[], int inicio, int fim)`: Função recursiva que aplica a abordagem de *Divisão e Conquista* para ordenar o vetor.
- `main()`: Responsável pelo fluxo de execução, coleta de dados, chamada da ordenação e exibição formatada dos resultados.

---

##  Como Compilar e Executar

### Pré-requisitos
- Um compilador C instalado (como `gcc` ou `clang`).

### Passo a Passo

1. **Salve o código em um arquivo** (por exemplo, `main.c`).

2. **Abra o terminal e compile o código:**
   ```bash
   gcc -o analisador main.c
   ```

3. **Execute o programa:**
   - **Linux/macOS:**
     ```bash
     ./analisador
     ```
   - **Windows:**
     ```cmd
     analisador.exe
     ```

---

##  Exemplo de Execução

```text
--- ANALISADOR DE TEMPOS: 100 METROS RASOS ---
Digite os tempos dos 10 atletas:
Tempo do atleta 1: 10.15
Tempo do atleta 2: 9.81
Tempo do atleta 3: 10.02
Tempo do atleta 4: 10.45
Tempo do atleta 5: 9.95
Tempo do atleta 6: 10.30
Tempo do atleta 7: 10.10
Tempo do atleta 8: 9.88
Tempo do atleta 9: 10.22
Tempo do atleta 10: 10.05

--- PÓDIO E CLASSIFICAÇÃO FINAL ---
1º LUGAR (OURO): 9.81 
2º LUGAR (PRATA): 9.88 
3º LUGAR (BRONZE): 9.95 
4º LUGAR: 10.02 s
5º LUGAR: 10.05 s
6º LUGAR: 10.10 s
7º LUGAR: 10.15 s
8º LUGAR: 10.22 s
9º LUGAR: 10.30 s
10º LUGAR: 10.45 s
```

---
