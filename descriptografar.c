#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


double Funcao_decodificadora(int x, float b) {
    double a0 = 348.11;
    double a1 = -278.007;
    double a2 = 64.9146;
    double a3 = -6.62433;
    double a4 = 0.346464;
    double a5 = -0.0097146;
    double a6 = 0.000138889;
    double a7 = -7.94637e-7;

    return a0 + (a1 + b) * x + a2 * pow(x, 2) + a3 * pow(x, 3) + a4 * pow(x, 4) + a5 * pow(x, 5) + a6 * pow(x, 6) + a7 * pow(x, 7);
}

int main() {
    int escolha, quantidade_mensagens;
    int i;
    float b;
    char codigo[100];
    int posicao = 1;
    char par[3];
    int valor;
    double resultado;
    int continuar;
    
    printf("Bem-vindo ao decodificador!\n");

    printf("Quantas mensagens deseja decodificar: ");
    scanf("%d", &quantidade_mensagens);
    
    for(i = 0; i < quantidade_mensagens; i++) {
        
        printf("Digite o valor de 'b' (-5 a 5): ");
        scanf("%f", &b);
        
        printf("\nColoque a mensagem aqui sem espacos (ate 100 caracteres): ");
        scanf("%s", &codigo);
        
        printf("\nMensagem decodificada: \n");
        
        for(i = 0; i < strlen(codigo); i+= 2){
            if (i + 1 >=strlen(codigo)) break; 
    
            par[0] = codigo[i];
            par[1] = codigo[i + 1];
            par[2] = '\0';
            
            valor = (int)strtol(par, NULL, 16);
            if (valor == 0) break;

            resultado = Funcao_decodificadora(posicao, b);
            if (resultado >= 0) {
                printf("%c", valor);
            }
            posicao++;
        }
        printf("\n");
    }
    
    do {
        printf("\nDeseja continuar? \n[1] Sim \n[2] Nao \nResposta: ");
        scanf("%d", &continuar);
        
    } while (continuar > 2 || continuar < 1);
        
    if (continuar == 1) {
        printf("\n");
        main();
    
    } else if (continuar == 2) {
        printf("Fim decodificador!");
    }
    
    return 0;
}
