#include <stdio.h>

int main() {
    int numeroCarrosVendidos;
    float valorVendas, salarioFixo, valorPorCarro, salarioFinal;

    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &numeroCarrosVendidos);

    printf("Digite o valor total das vendas: ");
    scanf("%f", &valorVendas);

    printf("Digite o salario fixo do vendedor: ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor que ele recebe por carro vendido: ");
    scanf("%f", &valorPorCarro);

    salarioFinal = salarioFixo + (numeroCarrosVendidos * valorPorCarro) + (0.05 * valorVendas);

    printf("O salario final do vendedor e: R$ %.2f\n", salarioFinal);

    return 0;
}
