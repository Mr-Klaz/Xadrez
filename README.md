# 💻 Projeto: Simulador de Movimentos de Peças de Xadrez em C

Este projeto simula os movimentos de peças de xadrez usando estruturas de repetição e recursividade na linguagem C. Ele foi desenvolvido como parte de um desafio educacional para praticar lógica de programação.

## 📋 Descrição

O programa simula os movimentos das seguintes peças:
- **Torre** (loop `for` e recursividade)
- **Bispo** (loop `while`, recursividade e loops aninhados)
- **Rainha** (loop `do-while` e recursividade)
- **Cavalo** (loops aninhados simples e complexos)

Cada movimento é impresso no console utilizando o comando `printf()`.

---

## 🧩 Níveis do Projeto

### 🔰 Nível Novato
- **Torre:** 5 casas para a direita com `for`
- **Bispo:** 5 casas na diagonal superior-direita com `while`
- **Rainha:** 8 casas para a esquerda com `do-while`

### ⚔️ Nível Aventureiro
- **Cavalo:** Movimento em "L" (2 para baixo, 1 para esquerda) com loops aninhados (`for` + `while`)

### 🧠 Nível Mestre
- **Torre, Bispo e Rainha:** Reimplementadas com **recursividade**
- **Cavalo:** Movimento em "L" (2 para cima, 1 para direita) com **loops complexos**
- **Bispo:** Implementado com **loops aninhados verticais e horizontais**

---

## 📁 Estrutura

- `xadrez.c`: Arquivo principal com todo o código-fonte comentado

---

## ▶️ Como Executar

1. Compile com GCC:
```bash
gcc xadrez.c -o xadrez
