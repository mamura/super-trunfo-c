#include <stdio.h>

int main() {
    char codCidade[3];
    char nome[20];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;

    printf("######################################################\n");
    printf("##### Cadastro de cartas - SUPER TRUNFO CIDADES ######\n");
    printf("######################################################\n\n");
    printf("## INSIRA OS DADO DA NOVA CARTA (CIDADE):\n");
    
    printf("# Código: ");
    scanf("%s", codCidade);
    printf("\n");

    printf("# Nome: ");
    scanf("%s", nome);
    printf("\n");

    printf("# População: ");
    scanf("%d", &populacao);
    printf("\n");

    printf("# Área: ");
    scanf("%f", &area);
    printf("\n");

    printf("# PIB: ");
    scanf("%f", &pib);
    printf("\n");

    printf("# Quantidade de pontos turísticos: ");
    scanf("%d", &numPontosTuristicos);
    printf("\n");

    //CABEÇALHO DA CARTA
    printf("########################################\n");
    printf("######### SUPER TRUNFO CIDADES' ########\n");
    printf("########################################\n");
    printf("%s%s%s", "# CODIGO - ", codCidade, "\n");
    printf("%s%s%s", "# NOME - ", nome, "\n");
    printf("%s%d%s", "# POPULAÇÃO - ", populacao, "\n");
    printf("%s%.2f%s", "# ÁREA - ", area, "\n");
    printf("%s%.2f%s", "# PIB - ", pib, "\n");
    printf("%s%d%s", "# PONTOS TURÍSTICO - ", numPontosTuristicos, "\n");
    printf("########################################\n");
    printf("########################################\n");
}