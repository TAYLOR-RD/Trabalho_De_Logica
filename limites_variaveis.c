#include <stdio.h>
#include <limits.h>

int main() {
    printf("Tipo\t\tMínimo\t\t\tMáximo\n");
    printf("char\t\t%d\t\t\t%d\n", CHAR_MIN, CHAR_MAX);
    printf("int\t\t%d\t\t\t%d\n", INT_MIN, INT_MAX);
    printf("short int\t%d\t\t\t%d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned int\t0\t\t\t%u\n", UINT_MAX);
    printf("long int\t%ld\t\t%ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long int\t0\t\t\t%lu\n", ULONG_MAX);
    printf("long long int\t%lld\t%lld\n", LLONG_MIN, LLONG_MAX);
    printf("unsigned long long int\t0\t\t\t%llu\n", ULLONG_MAX);

    // Exemplo de estouro
    unsigned char c = 255; // limite
    printf("\nValor antes do estouro: %u\n", c);
    c = c + 1; // ultrapassando o limite
    printf("Valor após o estouro: %u\n", c);

    return 0;
}
