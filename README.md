
# Projeto de Codificação e Decodificação com Função Polinomial em C

## Descrição
Este projeto implementa um sistema de criptografia simples baseado em uma função polinomial de grau 7. A mensagem é codificada com base em uma fórmula matemática que transforma cada caractere da mensagem em um valor hexadecimal.

O sistema é capaz de **codificar** e **decodificar** mensagens, garantindo segurança e simetria quando o mesmo parâmetro `b` é utilizado.

## Como funciona

### Função polinomial usada:
```c
f(x) = x⁷ + 4x⁶ + 2x⁵ + 8x⁴ + 9x³ + 7x² + 3x + b
```
- `x` representa a posição do caractere na mensagem.
- `b` é um parâmetro inserido pelo usuário, entre -5 e 5.
- O resultado é modularizado por 256 para garantir que o caractere resultante esteja no intervalo válido da tabela ASCII.

### Exemplo de uso

```bash
Escolha a operacao:
[1] Codificar mensagem
[2] Decodificar mensagem
Resposta: 1
Digite o valor de 'b' (entre -5 e 5): 3
Digite a mensagem a ser codificada: TAYLOE É LINDO
Mensagem codificada (hexadecimal): 5E142D2B55A317DC...

Deseja realizar outra operacao?
[1] Sim
[2] Nao
```

```bash
Escolha a operacao:
[1] Codificar mensagem
[2] Decodificar mensagem
Resposta: 2
Digite o valor de 'b' (entre -5 e 5): 3
Digite a mensagem codificada em hexadecimal: 5E142D2B55A317DC...
Mensagem decodificada: TAYLOE É LINDO
```

## Compilação

Para compilar o código em um terminal Linux ou Windows com GCC:
```bash
gcc codificador.c -o codificador -lm
./codificador
```

> **Nota:** O `-lm` é necessário para incluir a biblioteca de funções matemáticas.

## Autores
- Taylor Rodrigues
- Vitor Almeida
- Vitor Sousa

## Licença
Este projeto é de uso acadêmico para fins de estudo de criptografia e lógica computacional.
