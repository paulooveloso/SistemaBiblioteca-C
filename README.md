# 📚 Sistema de Gerenciamento de Biblioteca em C

Este é um projeto de terminal desenvolvido em **C** para simular um sistema básico de gerenciamento de livros. 

O projeto foi criado com o intuito de aplicar e praticar conceitos fundamentais da linguagem C, operando os dados diretamente na memória (RAM) durante a execução do programa.

## ✨ Funcionalidades

O sistema conta com um menu interativo que permite ao usuário:
- **Adicionar Livro:** Cadastra um novo livro informando Nome, Autor, Editora e Número da Edição.
- **Listar Livros:** Exibe no terminal todos os livros que foram cadastrados durante a sessão atual.
- **Sair:** Encerra a execução do programa.

## 🛠️ Tecnologias e Conceitos Utilizados

- **Linguagem:** C
- **Estruturas de Dados:** Uso de `structs` para modelar o objeto "Livro".
- **Arrays:** Armazenamento de múltiplos livros em um vetor (array de structs).
- **Controle de Fluxo:** Utilização de `do-while` para manter o menu ativo e `switch-case` para navegação das opções.
- **Manipulação de Strings:** Uso de `fgets` e remoção do caractere de nova linha (`\n`) com `strcspn`.
- **Tratamento de Buffer:** Implementação de uma função dedicada para limpar o buffer do teclado (`limparBuffer`), evitando bugs de leitura.

## 🚀 Como rodar o projeto no seu computador

### Pré-requisitos
Você precisará de um compilador C instalado no seu computador (como o GCC ou o Clang/Xcode Command Line Tools no macOS).

### Passo a Passo

1. Clone este repositório:
   ```bash
   git clone [https://github.com/paulooveloso/SistemaBiblioteca-C.git](https://github.com/paulooveloso/SistemaBiblioteca-C.git)
