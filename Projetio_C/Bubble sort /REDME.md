


# Sistema de Ranqueamento de Notas — Algoritmo Bubble Sort

## 1. Informações Acadêmicas
- **Instituição:** UDF — Centro Universitário do Distrito Federal
- **Curso:** Engenharia de Software
- **Disciplina:** Algoritmos e Pensamento Computacional
- **Professora:** Profa. Karla R. Sartin
- **Valor da Atividade:** 1,0 ponto

---

## 2. Integrantes do Grupo
- **Davi Leal Cândido** - *Matrícula - 48147028*


---

## 3. Descrição do Problema Cotidiano
Em ambientes educacionais, a organização e análise do desempenho dos alunos é essencial para a tomada de decisões pedagógicas. Identificar rapidamente os estudantes com melhor rendimento (para premiações ou bolsas) e aqueles que necessitam de acompanhamento prioritário requer a ordenação eficiente dos registros.

Muitas vezes, esses dados são inseridos no sistema sem nenhuma ordem específica. Por isso, desenvolveu-se esta aplicação para classificar e ranquear as notas de uma turma automaticamente a partir do cadastro inicial.

---

## 4. Objetivo da Aplicação
Desenvolver um programa funcional em **Linguagem C** que cadastre as informações de uma turma de no mínimo 10 alunos (`struct`), apresente os dados sem ordenação e, em seguida, aplique o algoritmo **Bubble Sort** para reordenar os registros e exibir um ranking em **ordem decrescente de nota** (da maior para a menor).

---

## 5. Explicação do Funcionamento do Bubble Sort
O **Bubble Sort** (ordenação por bolha) é um algoritmo simples de ordenação que percorre o vetor repetidamente. Em cada passada:
1. Compara elementos adjacentes (vizinhos no vetor).
2. Se o elemento da esquerda for **menor** que o elemento da direita (no caso da ordenação decrescente), o algoritmo realiza a **troca** (`swap`) das posições.
3. Esse processo se repete até que o maior/menor elemento "flutue" para sua posição correta ao final do vetor.
4. O laço prossegue reduzindo o escopo das comparações até que todo o array esteja ordenado.

Para manter a integridade dos registros (garantindo que o nome, o índice e a nota continuem vinculados ao mesmo aluno), a troca no código é feita atribuindo a `struct` inteira a uma variável auxiliar temporária (`temp = Alunos[j]`).

---

## 6. Instruções para Compilação e Execução

### Pré-requisitos
Possuir um compilador C instalado (como GCC, Clang, MinGW ou uma IDE como Dev-C++, VS Code ou Code::Blocks).
<img width="1477" height="762" alt="Captura de tela 2026-10-21 141517" src="https://github.com/user-attachments/assets/7bd9f857-79c2-4e6e-81a4-820756610e0c" />

### Compilando via Terminal (GCC)
```bash
gcc main.c -o programa_notas
