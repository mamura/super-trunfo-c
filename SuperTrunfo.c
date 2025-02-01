#include <stdio.h>
#include <string.h>

//Função para calcular o padding de cada linha:
void printWithPadding(const char* label, const char* value) {
    int labelLen = strlen(label);
    int valueLen = strlen(value);
    int totalLen = labelLen + valueLen;
    int padding = 39 - totalLen;  // Calcula quantos espaços são necessários
    
    printf("%s%s", label, value);
    
    for (int i = 0; i < padding; i++) {
        printf(" ");
    }

    printf("#\n");
}

int main() {
    char codCidade[3];
    char nome[20];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
    char buffer[100];

    printf("######################################################\n");
    printf("##### Cadastro de cartas - SUPER TRUNFO CIDADES ######\n");
    printf("######################################################\n\n");
    
    printf("## INSIRA OS DADO DA NOVA CARTA (CIDADE):\n");
    printf("# Código: ");
    scanf("%s", codCidade);
    printf("\n");

    printf("# Nome: ");
    scanf("%s", &nome);
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

    printWithPadding("# CODIGO - ", codCidade);
    printWithPadding("# NOME - ", nome);

    snprintf(buffer, sizeof(buffer), "%d", populacao);
    printWithPadding("# POPULACAO - ", buffer);

    float densidade = populacao / area;
    snprintf(buffer, sizeof(buffer), "%.2f", densidade);
    printWithPadding("# DENSIDADE POPULACIONAL - ", buffer);

    snprintf(buffer, sizeof(buffer), "%.2f", area);
    printWithPadding("# AREA - ", buffer);

    snprintf(buffer, sizeof(buffer), "%.2f", pib);
    printWithPadding("# PIB - ", buffer);

    float perCapita = pib / populacao;
    snprintf(buffer, sizeof(buffer), "%.2f", perCapita);
    printWithPadding("# PIB PER CAPITA- ", buffer);

    snprintf(buffer, sizeof(buffer), "%d", numPontosTuristicos);
    printWithPadding("# PONTOS TURISTICOS - ", buffer);
    printf("########################################\n");
    printf("########################################\n");


    return 0;
}