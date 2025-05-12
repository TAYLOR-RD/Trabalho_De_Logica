
# Trabalho de Criptografia - Segunda Guerra Mundial

Este projeto tem como objetivo simular a decodificação de mensagens utilizando técnicas de criptografia desenvolvidas durante a Segunda Guerra Mundial, especificamente com o uso de uma função polinomial de grau 7. O trabalho foi desenvolvido por Taylor Rodrigues, Vitor Almeida e Vitor Sousa.

## Índice

1. [Introdução](#introdução)
2. [Objetivo do Trabalho](#objetivo-do-trabalho)
3. [Metodologia e Técnicas de Criptografia](#metodologia-e-técnicas-de-criptografia)
4. [Código de Decodificação](#código-de-decodificação)
5. [Conclusão](#conclusão)
6. [Referências](#referências)

## Introdução

A criptografia foi uma das ferramentas essenciais para a comunicação segura durante a Segunda Guerra Mundial. Técnicas como a cifra de César e a máquina Enigma foram amplamente utilizadas para proteger informações sensíveis. Este trabalho tem como objetivo explorar essas técnicas através da implementação computacional, usando a linguagem C.

## Objetivo do Trabalho

O objetivo principal deste trabalho é desenvolver um sistema de decodificação de mensagens criptografadas utilizando uma função polinomial de grau 7. Este sistema visa simular como as mensagens poderiam ser decodificadas usando computadores modernos, proporcionando uma compreensão mais profunda dos métodos de criptografia usados na época.

## Metodologia e Técnicas de Criptografia

### Técnicas Utilizadas

1. **Função Polinomial de Grau 7**: A função polinomial de grau 7 é utilizada para decodificar as mensagens criptografadas. Essa técnica foi adaptada para o contexto das criptografias utilizadas na Segunda Guerra Mundial, onde funções matemáticas complexas eram aplicadas para transformar os dados de forma que fosse difícil decifrá-los sem a chave correta.

2. **Sistema de Decodificação**: O sistema implementado utiliza entradas em hexadecimal para representar as mensagens criptografadas. A decodificação é realizada através de uma função específica em C que utiliza uma fórmula matemática para recuperar a mensagem original.

### Parâmetro `b`

O parâmetro `b` na função de decodificação está restrito a valores entre -5 e 5. Isso garante que a função opere dentro de um intervalo controlado, imitando o funcionamento de técnicas de criptografia usadas na época.

## Código de Decodificação

Abaixo está o código implementado em C para realizar a decodificação das mensagens criptografadas.

```c
#include <stdio.h>

// Função para decodificar a mensagem com a função polinomial de grau 7
void decodificarMensagem(int hex, int b) {
    if (b < -5 || b > 5) {
        printf("O valor de 'b' deve estar entre -5 e 5!
");
        return;
    }

    // Fórmula da função polinomial (exemplo simplificado)
    int resultado = hex * hex * hex * hex * hex * hex * hex + b;

    printf("Mensagem decodificada: %d
", resultado);
}

int main() {
    int hexValue;
    int bValue;

    printf("Digite o valor em hexadecimal da mensagem criptografada: ");
    scanf("%x", &hexValue);

    printf("Digite o valor de b (entre -5 e 5): ");
    scanf("%d", &bValue);

    // Chama a função para decodificar a mensagem
    decodificarMensagem(hexValue, bValue);

    return 0;
}
```

### Explicação do Código:

- O código acima realiza a decodificação de uma mensagem utilizando uma função polinomial de grau 7, com o parâmetro `b` variando entre -5 e 5. O valor hexadecimal da mensagem criptografada é fornecido pelo usuário e, em seguida, é processado pela função para gerar a mensagem decodificada.

## Conclusão

Este trabalho apresenta a implementação de uma técnica de decodificação baseada em uma função polinomial, proporcionando uma simulação moderna de criptografia da Segunda Guerra Mundial. A utilização da linguagem C permitiu implementar um sistema eficaz e compreensível para a aplicação de conceitos matemáticos na área de criptografia.

## Referências

1. *Criptografia na Segunda Guerra Mundial*. Livro de Referência.
2. *Técnicas de Criptografia e Decodificação*. Artigo Científico.
