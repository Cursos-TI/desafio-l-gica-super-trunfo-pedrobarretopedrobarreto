#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char A1_Sao_Paulo_SP[70]; 
    char A2_Campinas_SP[70];
    char A3_Ribeirao_Preto_SP[70];
    char A4_SaoJose_dos_Campos_SP[70];
    char B1_Florianopolis_SC[70];
    char B2_Joinville_SC[70];
    char B3_Blumenau_SC[70];
    char B4_Sao_Jose_SC[70];
    char C1_Porto_Alegre_RS[70];
    char C2_Caxias_do_Sul_RS[70];
    char C3_Canoas_RS[70];
    char C4_Pelotas_RS[70];
    char D1_Rio_de_Janeiro_RJ[70];
    char D2_Sao_Goncalo_RJ[70];
    char D3_Duque_de_Caxias_RJ[70];
    char D4_Nova_Iguacu_RJ[70];
    char E1_Curitiba_PR[70];
    char E2_Londrina_PR[70];
    char E3_Maringa_PR[70];
    char E4_Ponta_Grossa_PR[70];
    char F1_Belo_Horizonte_MG[70];
    char F2_Uberlandia_MG[70];
    char F3_Contagem_MG[70];
    char F4_Juiz_de_fora_MG[70];
    char G1_Manaus_AM[70];
    char G2_Itacoatiara_AM[70];
    char G3_Manacapuru_AM[70];
    char G4_Parintins_AM[70];
    char H1_Salvador_BA[70];
    char H2_Feira_de_Santana_BA[70];
    char H3_Vitoria_da_Conquista_BA[70];
    char H4_Camacari_BA[70];
    int numero_de_pontos_turisticos_A1;
    int numero_de_pontos_turisticos_A2;
    int numero_de_pontos_turisticos_A3;
    int numero_de_pontos_turisticos_A4;
    int numero_de_pontos_turisticos_B1;
    int numero_de_pontos_turisticos_B2;
    int numero_de_pontos_turisticos_B3;
    int numero_de_pontos_turisticos_B4;
    int numero_de_pontos_turisticos_C1;
    int numero_de_pontos_turisticos_C2;
    int numero_de_pontos_turisticos_C3;
    int numero_de_pontos_turisticos_C4;
    int numero_de_pontos_turisticos_D1;
    int numero_de_pontos_turisticos_D2;
    int numero_de_pontos_turisticos_D3;
    int numero_de_pontos_turisticos_D4;
    int numero_de_pontos_turisticos_E1;
    int numero_de_pontos_turisticos_E2;
    int numero_de_pontos_turisticos_E3;
    int numero_de_pontos_turisticos_E4;
    int numero_de_pontos_turisticos_F1;
    int numero_de_pontos_turisticos_F2;
    int numero_de_pontos_turisticos_F3;
    int numero_de_pontos_turisticos_F4;
    int numero_de_pontos_turisticos_G1;
    int numero_de_pontos_turisticos_G2;
    int numero_de_pontos_turisticos_G3;
    int numero_de_pontos_turisticos_G4;
    int numero_de_pontos_turisticos_H1;
    int numero_de_pontos_turisticos_H2;
    int numero_de_pontos_turisticos_H3;
    int numero_de_pontos_turisticos_H4;
    int populacao_A1;
    int populacao_A2;
    int populacao_A3;
    int populacao_A4;
    int populacao_B1;
    int populacao_B2;
    int populacao_B3;
    int populacao_B4;
    int populacao_C1;
    int populacao_C2;
    int populacao_C3;
    int populacao_C4;
    int populacao_D1;
    int populacao_D2;
    int populacao_D3;
    int populacao_D4;
    int populacao_E1;
    int populacao_E2;
    int populacao_E3;
    int populacao_E4;
    int populacao_F1;
    int populacao_F2;
    int populacao_F3;
    int populacao_F4;
    int populacao_G1;
    int populacao_G2;
    int populacao_G3;
    int populacao_G4;
    int populacao_H1;
    int populacao_H2;
    int populacao_H3;
    int populacao_H4;
    int area_A1;
    int area_A2;
    int area_A3;
    int area_A4;
    int area_B1;
    int area_B2;
    int area_B3;
    int area_B4;
    int area_C1;
    int area_C2;
    int area_C3;
    int area_C4;
    int area_D1;
    int area_D2;
    int area_D3;
    int area_D4;
    int area_E1;
    int area_E2;
    int area_E3;
    int area_E4;
    int area_F1;
    int area_F2;
    int area_F3;
    int area_F4;
    int area_G1;
    int area_G2;
    int area_G3;
    int area_G4;
    int area_H1;
    int area_H2;
    int area_H3;
    int area_H4;
    int PIB_A1;
    int PIB_A2;
    int PIB_A3;
    int PIB_A4;
    int PIB_B1;
    int PIB_B2;
    int PIB_B3;
    int PIB_B4;
    int PIB_C1;
    int PIB_C2;
    int PIB_C3;
    int PIB_C4;
    int PIB_D1;
    int PIB_D2;
    int PIB_D3;
    int PIB_D4;
    int PIB_E1;
    int PIB_E2;
    int PIB_E3;
    int PIB_E4;
    int PIB_F1;
    int PIB_F2;
    int PIB_F3;
    int PIB_F4;
    int PIB_G1;
    int PIB_G2;
    int PIB_G3;
    int PIB_G4;
    int PIB_H1;
    int PIB_H2;
    int PIB_H3;
    int PIB_H4;
    double densidade_populacional_A1;
    double densidade_populacional_A2;
    double densidade_populacional_A3;
    double densidade_populacional_A4;
    double densidade_populacional_B1;
    double densidade_populacional_B2;
    double densidade_populacional_B3;
    double densidade_populacional_B4;
    double densidade_populacional_C1;
    double densidade_populacional_C2;
    double densidade_populacional_C3;
    double densidade_populacional_C4;
    double densidade_populacional_D1;
    double densidade_populacional_D2;
    double densidade_populacional_D3;
    double densidade_populacional_D4;
    double densidade_populacional_E1;
    double densidade_populacional_E2;
    double densidade_populacional_E3;
    double densidade_populacional_E4;
    double densidade_populacional_F1;
    double densidade_populacional_F2;
    double densidade_populacional_F3;
    double densidade_populacional_F4;
    double densidade_populacional_G1;
    double densidade_populacional_G2;
    double densidade_populacional_G3;
    double densidade_populacional_G4;
    double densidade_populacional_H1;
    double densidade_populacional_H2;
    double densidade_populacional_H3;
    double densidade_populacional_H4;
    double pib_percapita_A1;
    double pib_percapita_A2;
    double pib_percapita_A3;
    double pib_percapita_A4;
    double pib_percapita_B1;
    double pib_percapita_B2;
    double pib_percapita_B3;
    double pib_percapita_B4;
    double pib_percapita_C1;
    double pib_percapita_C2;
    double pib_percapita_C3;
    double pib_percapita_C4;
    double pib_percapita_D1;
    double pib_percapita_D2;
    double pib_percapita_D3;
    double pib_percapita_D4;
    double pib_percapita_E1;
    double pib_percapita_E2;
    double pib_percapita_E3;
    double pib_percapita_E4;
    double pib_percapita_F1;
    double pib_percapita_F2;
    double pib_percapita_F3;
    double pib_percapita_F4;
    double pib_percapita_G1;
    double pib_percapita_G2;
    double pib_percapita_G3;
    double pib_percapita_G4;
    double pib_percapita_H1;
    double pib_percapita_H2;
    double pib_percapita_H3;
    double pib_percapita_H4;
    int opcaoA1eA2;
    int opcaoA3eA4;
    int opcaoB1eB2;
    int opcaoB3eB4;
    int opcaoC1eC2;
    int opcaoC3eC4;
    int opcaoD1eD2;
    int opcaoD3eD4;
    int opcaoE1eE2;
    int opcaoE3eE4;
    int opcaoF1eF2;
    int opcaoF3eF4;
    int opcaoG1eG2;
    int opcaoG3eG4;
    int opcaoH1eH2;
    int opcaoH3eH4;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf("A1 São Paulo - SP\n", A1_Sao_Paulo_SP);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_A1);
    scanf("%d", &numero_de_pontos_turisticos_A1);
    printf("Digite a quantidade de população:\n", populacao_A1);
    scanf("%d", &populacao_A1);
    printf("Digite a área:\n", area_A1);
    scanf("%d", &area_A1);
    printf("Digite o PIB:\n", PIB_A1);
    scanf("%d", &PIB_A1);

    printf("A2 Campinas - SP\n", A2_Campinas_SP);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_A2);
    scanf("%d", &numero_de_pontos_turisticos_A2);
    printf("Digite a quantidade de população:\n", populacao_A2);
    scanf("%d", &populacao_A2);
    printf("Digite a área:\n", area_A2);
    scanf("%d", &area_A2);
    printf("Digite o PIB:\n", PIB_A2);
    scanf("%d", &PIB_A2);

    printf("A3 Ribeirão Preto - SP\n", A3_Ribeirao_Preto_SP);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_A3);
    scanf("%d", &numero_de_pontos_turisticos_A3);
    printf("Digite a quantidade de população:\n", populacao_A3);
    scanf("%d", &populacao_A3);
    printf("Digite a área:\n", area_A3);
    scanf("%d", &area_A3);
    printf("Digite o PIB:\n", PIB_A3);
    scanf("%d", &PIB_A3);

    printf("A4 São José dos Campos - SP\n", A4_SaoJose_dos_Campos_SP);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_A4);
    scanf("%d", &numero_de_pontos_turisticos_A4);
    printf("Digite a quantidade de população:\n", populacao_A4);
    scanf("%d", &populacao_A4);
    printf("Digite a área:\n", area_A4);
    scanf("%d", &area_A4);
    printf("Digite o PIB:\n", PIB_A4);
    scanf("%d", &PIB_A4);

    printf("B1 Florianópolis - SC\n", B1_Florianopolis_SC);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_B1);
    scanf("%d", &numero_de_pontos_turisticos_B1);
    printf("Digite a quantidade de população:\n", populacao_B1);
    scanf("%d", &populacao_B1);
    printf("Digite a área:\n", area_B1);
    scanf("%d", &area_B1);
    printf("Digite o PIB:\n", PIB_B1);
    scanf("%d", &PIB_B1);

    printf("B2 Joinville - SC\n", B2_Joinville_SC);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_B2);
    scanf("%d", &numero_de_pontos_turisticos_B2);
    printf("Digite a quantidade de população:\n", populacao_B2);
    scanf("%d", &populacao_B2);
    printf("Digite a área:\n", area_B2);
    scanf("%d", &area_B2);
    printf("Digite o PIB:\n", PIB_B2);
    scanf("%d", &PIB_B2);

    printf("B3 Blumenau - SC\n", B3_Blumenau_SC);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_B3);
    scanf("%d", &numero_de_pontos_turisticos_B3);
    printf("Digite a quantidade de população:\n", populacao_B3);
    scanf("%d", &populacao_B3);
    printf("Digite a área:\n", area_B3);
    scanf("%d", &area_B3);
    printf("Digite o PIB:\n", PIB_B3);
    scanf("%d", &PIB_B3);

    printf("B4 São José - SC\n", B4_Sao_Jose_SC);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_B4);
    scanf("%d", &numero_de_pontos_turisticos_B4);
    printf("Digite a quantidade de população:\n", populacao_B4);
    scanf("%d", &populacao_B4);
    printf("Digite a área:\n", area_B4);
    scanf("%d", &area_B4);
    printf("Digite o PIB:\n", PIB_B4);
    scanf("%d", &PIB_B4);

    printf("C1 Porto Alegre - RS\n", C1_Porto_Alegre_RS);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_C1);
    scanf("%d", &numero_de_pontos_turisticos_C1);
    printf("Digite a quantidade de população:\n", populacao_C1);
    scanf("%d", &populacao_C1);
    printf("Digite a área:\n", area_C1);
    scanf("%d", &area_C1);
    printf("Digite o PIB:\n", PIB_C1);
    scanf("%d", &PIB_C1);

    printf("C2 Caxias do Sul - RS\n", C2_Caxias_do_Sul_RS);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_C2);
    scanf("%d", &numero_de_pontos_turisticos_C2);
    printf("Digite a quantidade de população:\n", populacao_C2);
    scanf("%d", &populacao_C2);
    printf("Digite a área:\n", area_C2);
    scanf("%d", &area_C2);
    printf("Digite o PIB:\n", PIB_C2);
    scanf("%d", &PIB_C2);

    printf("C3 Canoas - RS\n", C3_Canoas_RS);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_C3);
    scanf("%d", &numero_de_pontos_turisticos_C3);
    printf("Digite a quantidade de população:\n", populacao_C3);
    scanf("%d", &populacao_C3);
    printf("Digite a área:\n", area_C3);
    scanf("%d", &area_C3);
    printf("Digite o PIB:\n", PIB_C3);
    scanf("%d", &PIB_C3);

    printf("C3 Pelotas - RS\n", C4_Pelotas_RS);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_C4);
    scanf("%d", &numero_de_pontos_turisticos_C4);
    printf("Digite a quantidade de população:\n", populacao_C4);
    scanf("%d", &populacao_C4);
    printf("Digite a área:\n", area_C4);
    scanf("%d", &area_C4);
    printf("Digite o PIB:\n", PIB_C4);
    scanf("%d", &PIB_C4);

    printf("D1 Rio de Janeiro - RJ\n", D1_Rio_de_Janeiro_RJ);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_D1);
    scanf("%d", &numero_de_pontos_turisticos_D1);
    printf("Digite a quantidade de população:\n", populacao_D1);
    scanf("%d", &populacao_D1);
    printf("Digite a área:\n", area_D1);
    scanf("%d", &area_D1);
    printf("Digite o PIB:\n", PIB_D1);
    scanf("%d", &PIB_D1);

    printf("D2 São Gonçalo - RJ\n", D2_Sao_Goncalo_RJ);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_D2);
    scanf("%d", &numero_de_pontos_turisticos_D2);
    printf("Digite a quantidade de população:\n", populacao_D2);
    scanf("%d", &populacao_D2);
    printf("Digite a área:\n", area_D2);
    scanf("%d", &area_D2);
    printf("Digite o PIB:\n", PIB_D2);
    scanf("%d", &PIB_D2);

    printf("D3 Duque de Caixias - RJ\n", D3_Duque_de_Caxias_RJ);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_D3);
    scanf("%d", &numero_de_pontos_turisticos_D3);
    printf("Digite a quantidade de população:\n", populacao_D3);
    scanf("%d", &populacao_D3);
    printf("Digite a área:\n", area_D3);
    scanf("%d", &area_D3);
    printf("Digite o PIB:\n", PIB_D3);
    scanf("%d", &PIB_D3);

    printf("D4 Nova Iguaçu - RJ\n", D4_Nova_Iguacu_RJ);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_D4);
    scanf("%d", &numero_de_pontos_turisticos_D4);
    printf("Digite a quantidade de população:\n", populacao_D4);
    scanf("%d", &populacao_D4);
    printf("Digite a área:\n", area_D4);
    scanf("%d", &area_D4);
    printf("Digite o PIB:\n", PIB_D4);
    scanf("%d", &PIB_D4);

    printf("E1 Curitiba - PR\n", E1_Curitiba_PR);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_E1);
    scanf("%d", &numero_de_pontos_turisticos_E1);
    printf("Digite a quantidade de população:\n", populacao_E1);
    scanf("%d", &populacao_E1);
    printf("Digite a área:\n", area_E1);
    scanf("%d", &area_E1);
    printf("Digite o PIB:\n", PIB_E1);
    scanf("%d", &PIB_E1);

    printf("E2 Londria - PR\n", E2_Londrina_PR);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_E2);
    scanf("%d", &numero_de_pontos_turisticos_E2);
    printf("Digite a quantidade de população:\n", populacao_E2);
    scanf("%d", &populacao_E2);
    printf("Digite a área:\n", area_E2);
    scanf("%d", &area_E2);
    printf("Digite o PIB:\n", PIB_E2);
    scanf("%d", &PIB_E2);

    printf("E3 Maringá - PR\n", E3_Maringa_PR);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_E3);
    scanf("%d", &numero_de_pontos_turisticos_E3);
    printf("Digite a quantidade de população:\n", populacao_E3);
    scanf("%d", &populacao_E3);
    printf("Digite a área:\n", area_E3);
    scanf("%d", &area_E3);
    printf("Digite o PIB:\n", PIB_E3);
    scanf("%d", &PIB_E3);

    printf("E4 Ponta Grossa - PR\n", E4_Ponta_Grossa_PR);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_E4);
    scanf("%d", &numero_de_pontos_turisticos_E4);
    printf("Digite a quantidade de população:\n", populacao_E4);
    scanf("%d", &populacao_E4);
    printf("Digite a área:\n", area_E4);
    scanf("%d", &area_E4);
    printf("Digite o PIB:\n", PIB_E4);
    scanf("%d", &PIB_E4);

    printf("F1 Belo Horizonte - MG\n", F1_Belo_Horizonte_MG);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_F1);
    scanf("%d", &numero_de_pontos_turisticos_F1);
    printf("Digite a quantidade de população:\n", populacao_F1);
    scanf("%d", &populacao_F1);
    printf("Digite a área:\n", area_F1);
    scanf("%d", &area_F1);
    printf("Digite o PIB:\n", PIB_F1);
    scanf("%d", &PIB_F1);

    printf("F2 Uberlândia- MG\n", F2_Uberlandia_MG);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_F2);
    scanf("%d", &numero_de_pontos_turisticos_F2);
    printf("Digite a quantidade de população:\n", populacao_F2);
    scanf("%d", &populacao_F2);
    printf("Digite a área:\n", area_F2);
    scanf("%d", &area_F2);
    printf("Digite o PIB:\n", PIB_F2);
    scanf("%d", &PIB_F2);

    printf("F3 Contagem - MG\n", F3_Contagem_MG);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_F3);
    scanf("%d", &numero_de_pontos_turisticos_F3);
    printf("Digite a quantidade de população:\n", populacao_F3);
    scanf("%d", &populacao_F3);
    printf("Digite a área:\n", area_F3);
    scanf("%d", &area_F3);
    printf("Digite o PIB:\n", PIB_F3);
    scanf("%d", &PIB_F3);

    printf("F4 Juíz de Fora - MG\n", F4_Juiz_de_fora_MG);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_F4);
    scanf("%d", &numero_de_pontos_turisticos_F4);
    printf("Digite a quantidade de população:\n", populacao_F4);
    scanf("%d", &populacao_F4);
    printf("Digite a área:\n", area_F4);
    scanf("%d", &area_F4);
    printf("Digite o PIB:\n", PIB_F4);
    scanf("%d", &PIB_F4);
    
    printf("G1 Manaus - AM\n", G1_Manaus_AM);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_G1);
    scanf("%d", &numero_de_pontos_turisticos_G1);
    printf("Digite a quantidade de população:\n", populacao_G1);
    scanf("%d", &populacao_G1);
    printf("Digite a área:\n", area_G1);
    scanf("%d", &area_G1);
    printf("Digite o PIB:\n", PIB_G1);
    scanf("%d", &PIB_G1);

    printf("G2 Itacoatiara - AM\n", G2_Itacoatiara_AM);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_G2);
    scanf("%d", &numero_de_pontos_turisticos_G2);
    printf("Digite a quantidade de população:\n", populacao_G2);
    scanf("%d", &populacao_G2);
    printf("Digite a área: \n", area_G2);
    scanf("%d", &area_G2);
    printf("Digite o PIB:\n", PIB_G2);
    scanf("%d", &PIB_G2);

    printf("G3 Manacapuru - AM\n", G3_Manacapuru_AM);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_G3);
    scanf("%d", &numero_de_pontos_turisticos_G3);
    printf("Digite a quantidade de população:\n", populacao_G3);
    scanf("%d", &populacao_G3);
    printf("Digite a área:\n", area_G3);
    scanf("%d", &area_G3);
    printf("Digite o PIB:\n", PIB_G3);
    scanf("%d", &PIB_G3);

    printf("G4 Parintins - AM\n", G4_Parintins_AM);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_G4);
    scanf("%d", &numero_de_pontos_turisticos_G4);
    printf("Digite a quantidade de população:\n", populacao_G4);
    scanf("%d", &populacao_G4);
    printf("Digite a área:\n", area_G4);
    scanf("%d", &area_G4);
    printf("Digite o PIB:\n", PIB_G4);
    scanf("%d", &PIB_G4);

    printf("H1 Salvador - BA\n", H1_Salvador_BA);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_H1);
    scanf("%d", &numero_de_pontos_turisticos_H1);
    printf("Digite a quantidade de população:\n", populacao_H1);
    scanf("%d", &populacao_H1);
    printf("Digite a área:\n", area_H1);
    scanf("%d", &area_H1);
    printf("Digite o PIB:\n", PIB_H1);
    scanf("%d", &PIB_H1);

    printf("H2 Feira de Santana - BA\n", H2_Feira_de_Santana_BA);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_H2);
    scanf("%d", &numero_de_pontos_turisticos_H2);
    printf("Digite a quantidade de população:\n", populacao_H2);
    scanf("%d", &populacao_H2);
    printf("Digite a área:\n", area_H2);
    scanf("%d", &area_H2);
    printf("Digite o PIB:\n", PIB_H2);
    scanf("%d", &PIB_H2);

    printf("H3 Vitória da Conquista - BA\n", H3_Vitoria_da_Conquista_BA);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_H3);
    scanf("%d", &numero_de_pontos_turisticos_H3);
    printf("Digite a quantidade de população:\n", populacao_H3);
    scanf("%d", &populacao_H3);
    printf("Digite a área:\n", area_H3);
    scanf("%d", &area_H3);
    printf("Digite o PIB:\n", PIB_H3);
    scanf("%d", &PIB_H3);

    printf("H4 Camacari - BA\n", H4_Camacari_BA);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_H4);
    scanf("%d", &numero_de_pontos_turisticos_H4);
    printf("Digite a quantidade de população:\n", populacao_H4);
    scanf("%d", &populacao_H4);
    printf("Digite a área:\n", area_H4);
    scanf("%d", &area_H4);
    printf("Digite o PIB:\n", PIB_H4);
    scanf("%d", &PIB_H4);

    densidade_populacional_A1 = (double) populacao_A1 / area_A1;
    pib_percapita_A1 = (double) PIB_A1 / populacao_A1;
    densidade_populacional_A2 = (double) populacao_A2 / area_A2;
    pib_percapita_A2 = (double) PIB_A2 / populacao_A2;
    densidade_populacional_A3 = (double) populacao_A3 / area_A3;
    pib_percapita_A3 = (double) PIB_A3 / populacao_A3;
    densidade_populacional_A4 = (double) populacao_A4 / area_A4;
    pib_percapita_A4 = (double) PIB_A4 / populacao_A4;
    densidade_populacional_B1 = (double) populacao_B1 / area_B1;
    pib_percapita_B1 = (double) PIB_B1 / populacao_B1;
    densidade_populacional_B2 = (double) populacao_B2 / area_B2;
    pib_percapita_B2 = (double) PIB_B2 / populacao_B2;
    densidade_populacional_B3 = (double) populacao_B3 / area_B3;
    pib_percapita_B3 = (double) PIB_B3 / populacao_B3;
    densidade_populacional_B4 = (double) populacao_B4 / area_B4;
    pib_percapita_B4 = (double) PIB_B4 / populacao_B4;
    densidade_populacional_C1 = (double) populacao_C1 / area_C1;
    pib_percapita_C1 = (double) PIB_C1 / populacao_C1;
    densidade_populacional_C2 = (double) populacao_C2 / area_C2;
    pib_percapita_C2 = (double) PIB_C2 / populacao_C2;
    densidade_populacional_C3 = (double) populacao_C3 / area_C3;
    pib_percapita_C3 = (double) PIB_C3 / populacao_C3;
    densidade_populacional_C4 = (double) populacao_C4 / area_C4;
    pib_percapita_C4 = (double) PIB_C4 / populacao_C4;
    densidade_populacional_D1 = (double) populacao_D1 / area_D1;
    pib_percapita_D1 = (double) PIB_D1 / populacao_D1;
    densidade_populacional_D2 = (double) populacao_D2 / area_D2;
    pib_percapita_D2 = (double) PIB_D2 / populacao_D2;
    densidade_populacional_D3 = (double) populacao_D3 / area_D3;
    pib_percapita_D3 = (double) PIB_D3 / populacao_D3;
    densidade_populacional_D4 = (double) populacao_D4 / area_D4;
    pib_percapita_D4 = (double) PIB_D4 / populacao_D4;
    densidade_populacional_E1 = (double) populacao_E1 / area_E1;
    pib_percapita_E1 = (double) PIB_E1 / populacao_E1;
    densidade_populacional_E2 = (double) populacao_E2 / area_E2;
    pib_percapita_E2 = (double) PIB_E2 / populacao_E2;
    densidade_populacional_E3 = (double) populacao_E3 / area_E3;
    pib_percapita_E3 = (double) PIB_E3 / populacao_E3;
    densidade_populacional_E4 = (double) populacao_E4 / area_E4;
    pib_percapita_E4 = (double) PIB_E4 / populacao_E4;
    densidade_populacional_F1 = (double) populacao_F1 / area_F1;
    pib_percapita_F1 = (double) PIB_F1 / populacao_F1;
    densidade_populacional_F2 = (double) populacao_F2 / area_F2;
    pib_percapita_F2 = (double) PIB_F2 / populacao_F2;
    densidade_populacional_F3 = (double) populacao_F3 / area_F3;
    pib_percapita_F3 = (double) PIB_F3 / populacao_F3;
    densidade_populacional_F4 = (double) populacao_F4 / area_F4;
    pib_percapita_F4 = (double) PIB_F4 / populacao_F4;
    densidade_populacional_G1 = (double) populacao_G1 / area_G1;
    pib_percapita_G1 = (double) PIB_G1 / populacao_G1;
    densidade_populacional_G2 = (double) populacao_G2 / area_G2;
    pib_percapita_G2 = (double) PIB_G2 / populacao_G2;
    densidade_populacional_G3 = (double) populacao_G3 / area_G3;
    pib_percapita_G3 = (double) PIB_G3 / populacao_G3;
    densidade_populacional_G4 = (double) populacao_G4 / area_G4;
    pib_percapita_G4 = (double) PIB_G4 / populacao_G4;
    densidade_populacional_H1 = (double) populacao_H1 / area_H1;
    pib_percapita_H1 = (double) PIB_H1 / populacao_H1;
    densidade_populacional_H2 = (double) populacao_H2 / area_H2;
    pib_percapita_H2 = (double) PIB_H2 / populacao_H2;
    densidade_populacional_H3 = (double) populacao_H3 / area_H3;
    pib_percapita_H3 = (double) PIB_H3 / populacao_H3;
    densidade_populacional_H4 = (double) populacao_H4 / area_H4;
    pib_percapita_H4 = (double) PIB_H4 / populacao_H4;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc;
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // };
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo;
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("Comparação entre São Paulo e Campinas\n");
    printf("Qual das opções de atributos abaixo quer comparar entre as cidades?\n");
    printf("1. Nº de pontos turísticos\n");
    printf("2. Quantida de população\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    printf("Digite o número da opção que quer comparar:\n");
    scanf("%d", &opcaoA1eA2);
    
    switch(opcaoA1eA2)
    {
    case 1:
    printf("São Paulo tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_A1);
    printf("Campinas tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_A2);
    if (numero_de_pontos_turisticos_A1 == numero_de_pontos_turisticos_A2 ){
        printf("EMPATE! As cidades tem nº de pontos turísticos igual.\n");
    } else if (numero_de_pontos_turisticos_A1 > numero_de_pontos_turisticos_A2 ){
        printf("São Paulo vence em nº de pontos turísticos\n");
    } else{

        printf("Campinas vence em nº de pontos turísticos\n");
    }
    break;

    case 2:
    printf("São Paulo tem de população: %d\n", populacao_A1);
    printf("Campinas tem de população: %d\n", populacao_A2);
    if (populacao_A1 == populacao_A2 ){
        printf("EMPATE! As cidades tem quantidade de população igual.\n");
    } else if (populacao_A1 > populacao_A2 ){
        printf("São Paulo vence em quantidade de população\n");
    } else{
        printf("Campinas vence em quantidade de população\n");
    }
    break;

    case 3:
    printf("São Paulo tem área de: %d\n", area_A1);
    printf("Campinas tem área de: %d\n", area_A2);
    if (area_A1 == area_A2 ){
        printf("EMPATE! As cidades tem área igual.\n");
    } else if (area_A1 > area_A2 ){
        printf("São Paulo vence em área\n");
    } else{
        printf("Campinas vence em área\n");
    }
    break;

    case 4:
    printf("São Paulo tem PIB de: %d\n", PIB_A1);
    printf("Campinas tem PIB de: %d\n", PIB_A2);
    if (PIB_A1 == PIB_A2 ){
        printf("EMPATE! As cidades tem PIB igual.\n");
    } else if (PIB_A1 > PIB_A2 ){
        printf("São Paulo vence em PIB\n");
    } else{
        printf("Campinas vence em PIB\n");
    }
    break;

    case 5:
    printf("São Paulo tem densidade populacional de: %f\n", densidade_populacional_A1);
    printf("Campinas tem densidade populacional de: %f\n", densidade_populacional_A2);
    if (densidade_populacional_A1 == densidade_populacional_A2 ){
        printf("EMPATE! As cidade têm densidade populacional igual.\n");
    } else if (densidade_populacional_A1 < densidade_populacional_A2 ){
        printf("São Paulo vence em densidade populacional\n");
    } else{
        printf("Campinas vence densidade populacional\n");
    }
    break;

    case 6:
    printf("São Paulo tem PIB per capita de: %f\n", pib_percapita_A1);
    printf("Campinas tem PIB per capita de: %f\n", pib_percapita_A2);
    if (pib_percapita_A1 == pib_percapita_A2 ){
        printf("EMPATE! As cidades tem PIB per capita igual.\n");
    } else if (pib_percapita_A1 > pib_percapita_A2 ){
        printf("São Paulo vence em PIB per capita\n");
    } else{
        printf("Campinas vence em PIB per capita\n");
    }
    break;

    default:
            printf("Opção inválida\n");
    break;
    }


    printf("Comparação entre Ribeirão Preto e São José dos Campos\n");
    printf("Qual das opções de atributos abaixo quer comparar entre as cidades?\n");
    printf("1. Nº de pontos turísticos\n");
    printf("2. Quantida de população\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    printf("Digite o número da opção que quer comparar:\n");
    scanf("%d", &opcaoA3eA4);
    
    switch(opcaoA3eA4)
    {
    case 1:
    printf("Ribeirão Preto tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_A3);
    printf("São José dos Campos tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_A4);
    if (numero_de_pontos_turisticos_A3 > numero_de_pontos_turisticos_A4 ){
        printf("Ribeirão Preto vence em nº de pontos turísticos\n");
    } else{
        printf("São José dos Campos vence em nº de pontos turísticos\n");
    }
    break;

    case 2:
    printf("Ribeirão Preto tem de população: %d\n", populacao_A3);
    printf("São José dos Campos tem de população: %d\n", populacao_A4);
    if (populacao_A3 > populacao_A4 ){
        printf("Ribeirão Preto vence em quantidade de população\n");
    } else{
        printf("São José dos Campos vence em quantidade de população\n");
    }
    break;

    case 3:
    printf("Ribeirão Preto tem área de: %d\n", area_A3);
    printf("São José dos Campos tem área de: %d\n", area_A4);
    if (area_A3 > area_A4 ){
        printf("Ribeirão Preto vence em área\n");
    } else{
        printf("São José dos Campos vence em área\n");
    }
    break;
    
    case4:
    printf("Ribeirão Preto tem PIB de: %d\n", PIB_A3);
    printf("São José dos Campos tem PIB de: %d\n", PIB_A4);
    if (PIB_A3 > PIB_A4 ){
        printf("Ribeirão Preto vence em PIB\n");
    } else{
        printf("São José dos Campos vence em PIB\n");
    }

    break;

    case5:
    printf("Ribeirão Preto tem densidade populacional de: %f\n", densidade_populacional_A3);
    printf("São José dos Campos tem densidade populacional de: %f\n", densidade_populacional_A4);
    if (densidade_populacional_A3 < densidade_populacional_A4 ){
        printf("Ribeirão Preto vence em densidade populacional\n");
    } else{
        printf("São José dos Campos vence densidade populacional\n");
    }
    break;

    case6:
    printf("Ribeirão Preto tem PIB per capita de: %f\n", pib_percapita_A3);
    printf("São José dos Campos tem PIB per capita de: %f\n", pib_percapita_A4);
    if (pib_percapita_A3 > pib_percapita_A4 ){
        printf("Ribeirão Preto vence em PIB per capita\n");
    } else{
        printf("São José dos Campos vence em PIB per capita\n");
    }
    break;
    default:
            printf("Opção inválida\n");
    break;
    }

    printf("Comparação entre Florianópolis e Joinville\n");
    printf("Qual das opções de atributos abaixo quer comparar entre as cidades?\n");
    printf("1. Nº de pontos turísticos\n");
    printf("2. Quantida de população\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    printf("Digite o número da opção que quer comparar:\n");
    scanf("%d", &opcaoA3eA4);
    
    switch(opcaoB1eB2)
    {
    case 1:

    printf("Florianópolis tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_B1);
    printf("Joinville dos Campos tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_B2);
    if (numero_de_pontos_turisticos_B1 > numero_de_pontos_turisticos_B2 ){
        printf("Florianópolis vence em nº de pontos turísticos\n");
    } else{
        printf("Joinville vence em nº de pontos turísticos\n");
    }
    break;

    case 2:

    printf("Florianópolis tem de população: %d\n", populacao_B1);
    printf("Joinville tem de população: %d\n", populacao_B2);
    if (populacao_B1 > populacao_B2 ){
        printf("Florianópolis vence em quantidade de população\n");
    } else{
        printf("Joinville vence em quantidade de população\n");
    }
    break;

    case 3:

    printf("Florianópolis tem área de: %d\n", area_B1);
    printf("Joinville tem área de: %d\n", area_B2);
    if (area_B1 > area_B2 ){
        printf("Florianópolis vence em área\n");
    } else{
        printf("Joinville vence em área\n");
    }
    break;

    case 4:

    printf("Florianópolis tem PIB de: %d\n", PIB_B1);
    printf("Joinville tem PIB de: %d\n", PIB_B2);
    if (PIB_B1 > PIB_B2 ){
        printf("Florianópolis vence em PIB\n");
    } else{
        printf("Joinville vence em PIB\n");
    }
    break;

    case 5:

    printf("Florianópolis tem densidade populacional de: %f\n", densidade_populacional_B1);
    printf("Joinville  tem densidade populacional de: %f\n", densidade_populacional_B2);
    if (densidade_populacional_B1 < densidade_populacional_B2 ){
        printf("Florianópolis vence em densidade populacional\n");
    } else{
        printf("Joinville  vence densidade populacional\n");
    }
    break;

    case 6:

    printf("Florianópolis tem PIB per capita de: %f\n", pib_percapita_B1);
    printf("Joinville  tem PIB per capita de: %f\n", pib_percapita_B2);
    if (pib_percapita_B1 > pib_percapita_B2 ){
        printf("Florianópolis vence em PIB per capita\n");
    } else{
        printf("Joinville  vence em PIB per capita\n");
    }
    break;
    default:
            printf("Opção inválida\n");
    break;
    }

    printf("Comparação entre Blumenau e São José\n");
    printf("Qual das opções de atributos abaixo quer comparar entre as cidades?\n");
    printf("1. Nº de pontos turísticos\n");
    printf("2. Quantida de população\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    printf("Digite o número da opção que quer comparar:\n");
    scanf("%d", &opcaoB3eB4);
    
    switch(opcaoB3eB4)
    {
    case 1:

    printf("Blumenau tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_B3);
    printf("São José tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_B4);
    if (numero_de_pontos_turisticos_B3 > numero_de_pontos_turisticos_B4 ){
        printf("Blumenau vence em nº de pontos turísticos\n");
    } else{
        printf("São José vence em nº de pontos turísticos\n");
    }
    break;

    case 2:

    printf("Blumenau tem de população: %d\n", populacao_B3);
    printf("São José tem de população: %d\n", populacao_B4);
    if (populacao_B3 > populacao_B4 ){
        printf("Blumenau vence em quantidade de população\n");
    } else{
        printf("São José vence em quantidade de população\n");
    }
    break;

    case 3:

    printf("Blumenau tem área de: %d\n", area_B3);
    printf("São José tem área de: %d\n", area_B4);
    if (area_B3 > area_B4 ){
        printf("Blumenau vence em área\n");
    } else{
        printf("São José vence em área\n");
    }
    break;

    case 4:

    printf("Blumenau tem PIB de: %d\n", PIB_B3);
    printf("São José tem PIB de: %d\n", PIB_B4);
    if (PIB_B3 > PIB_B4 ){
        printf("Blumenau vence em PIB\n");
    } else{
        printf("São José vence em PIB\n");
    }
    break;

    case 5:

    printf("Blumenau tem densidade populacional de: %f\n", densidade_populacional_B3);
    printf("São José  tem densidade populacional de: %f\n", densidade_populacional_B4);
    if (densidade_populacional_B3 < densidade_populacional_B4 ){
        printf("Blumenau vence em densidade populacional\n");
    } else{
        printf("São José  vence densidade populacional\n");
    }
    break;

    case 6:

    printf("Blumenau tem PIB per capita de: %f\n", pib_percapita_B3);
    printf("São José  tem PIB per capita de: %f\n", pib_percapita_B4);
    if (pib_percapita_B3 > pib_percapita_B4){
        printf("Blumenau vence em PIB per capita\n");
    } else{
        printf("São José  vence em PIB per capita\n");
    }
    break;
    default:
            printf("Opção inválida\n");
    break;
    }

    printf("Comparação entre Porto Alegre e Caxias do Sul\n");
    printf("Qual das opções de atributos abaixo quer comparar entre as cidades?\n");
    printf("1. Nº de pontos turísticos\n");
    printf("2. Quantida de população\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    printf("Digite o número da opção que quer comparar:\n");
    scanf("%d", &opcaoC1eC2);
    
    switch(opcaoC1eC2)
    {
    case 1:

    printf("Porto Alegre tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_C1);
    printf("Caxias do Sul tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_C2);
    if (numero_de_pontos_turisticos_C1 > numero_de_pontos_turisticos_C2 ){
        printf("Porto Alegre vence em nº de pontos turísticos\n");
    } else{
        printf("Caxias do Sul vence em nº de pontos turísticos\n");
    }
    break;
    
    case 2:

    printf("Porto Alegre tem de população: %d\n", populacao_C1);
    printf("Caxias do Sul tem de população: %d\n", populacao_C2);
    if (populacao_C1 > populacao_C2 ){
        printf("Porto Alegre vence em quantidade de população\n");
    } else{
        printf("Caxias do Sul vence em quantidade de população\n");
    }
    break;

    case 3:

    printf("Porto Alegre tem área de: %d\n", area_C1);
    printf("Caxias do Sul tem área de: %d\n", area_C2);
    if (area_C1 > area_C2 ){
        printf("Porto Alegre vence em área\n");
    } else{
        printf("Caxias do Sul vence em área\n");
    }
    break;

    case 4:

    printf("Porto Alegre tem PIB de: %d\n", PIB_C1);
    printf("Caxias do Sul tem PIB de: %d\n", PIB_C2);
    if (PIB_C1 > PIB_C2 ){
        printf("Porto Alegre vence em PIB\n");
    } else{
        printf("Caxias do Sul vence em PIB\n");
    }

    break;

    case 5:

    printf("Porto Alegre tem densidade populacional de: %f\n", densidade_populacional_C1);
    printf("Caxias do Sul  tem densidade populacional de: %f\n", densidade_populacional_C2);
    if (densidade_populacional_C1 < densidade_populacional_C2 ){
        printf("Porto Alegre vence em densidade populacional\n");
    } else{
        printf("Caxias do Sul  vence densidade populacional\n");
    }

    break; 

    case 6:

    printf("Porto Alegre tem PIB per capita de: %f\n", pib_percapita_C1);
    printf("Caxias do Sul  tem PIB per capita de: %f\n", pib_percapita_C2);
    if (pib_percapita_C1 > pib_percapita_C2){
        printf("Porto Alegre vence em PIB per capita\n");
    } else{
        printf("Caxias do Sul  vence em PIB per capita\n");
    }
    break;
    default:
            printf("Opção inválida\n");
    break;
    }

    printf("Comparação entre Canoas e Pelotas\n");
    printf("Qual das opções de atributos abaixo quer comparar entre as cidades?\n");
    printf("1. Nº de pontos turísticos\n");
    printf("2. Quantida de população\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    printf("Digite o número da opção que quer comparar:\n");
    scanf("%d", &opcaoC3eC4);
    
    switch(opcaoC3eC4)
    {
    case 1:

    printf("Canoas tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_C3);
    printf("Pelotas tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_C4);
    if (numero_de_pontos_turisticos_C3 > numero_de_pontos_turisticos_C4 ){
        printf("Canoas  vence em nº de pontos turísticos\n");
    } else{
        printf("Pelotas vence em nº de pontos turísticos\n");
    }
    break;

    case 2:

    printf("Canoas tem de população: %d\n", populacao_C3);
    printf("Pelotas tem de população: %d\n", populacao_C4);
    if (populacao_C3 > populacao_C4 ){
        printf("Canoas vence em quantidade de população\n");
    } else{
        printf("Pelotas vence em quantidade de população\n");
    }
    break;

    case 3:

    printf("Canoas tem área de: %d\n", area_C3);
    printf("Pelotas tem área de: %d\n", area_C4);
    if (area_C3 > area_C4 ){
        printf("Canoas vence em área\n");
    } else{
        printf("Pelotas vence em área\n");
    }
    break;

    case 4:

    printf("Canoas tem PIB de: %d\n", PIB_C3);
    printf("Pelotas tem PIB de: %d\n", PIB_C4);
    if (PIB_C3 > PIB_C4 ){
        printf("Canoas vence em PIB\n");
    } else{
        printf("Pelotas vence em PIB\n");
    }
    break;

    case 5:

    printf("Canoas tem densidade populacional de: %f\n", densidade_populacional_C3);
    printf("Pelotas  tem densidade populacional de: %f\n", densidade_populacional_C4);
    if (densidade_populacional_C3 < densidade_populacional_C4 ){
        printf("Canoas vence em densidade populacional\n");
    } else{
        printf("Pelotas  vence densidade populacional\n");
    }
    break;

    case 6:

    printf("Canoas tem PIB per capita de: %f\n", pib_percapita_C3);
    printf("Pelotas  tem PIB per capita de: %f\n", pib_percapita_C4);
    if (pib_percapita_C3 > pib_percapita_C4){
        printf("Canoas vence em PIB per capita\n");
    } else{
        printf("Pelotas  vence em PIB per capita\n");
    }
    break;
    default:
            printf("Opção inválida\n");
    break;
    }

    printf("Comparação entre Rio de Janeiro e São Gonçalo\n");
    printf("Qual das opções de atributos abaixo quer comparar entre as cidades?\n");
    printf("1. Nº de pontos turísticos\n");
    printf("2. Quantida de população\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    printf("Digite o número da opção que quer comparar:\n");
    scanf("%d", &opcaoD1eD2);
    
    switch(opcaoD1eD2)
    {
    case 1:

    printf("Rio de Janeiro tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_D1);
    printf("São Gonçalo tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_D2);
    if (numero_de_pontos_turisticos_D1 > numero_de_pontos_turisticos_D2 ){
        printf("Rio de Janeiro vence em nº de pontos turísticos\n");
    } else{
        printf("São Gonçalo vence em nº de pontos turísticos\n");
    }
    break;

    case 2:

    printf("Rio de Janeiro tem de população: %d\n", populacao_D1);
    printf("São Gonçalo tem de população: %d\n", populacao_D2);
    if (populacao_D1 > populacao_D2 ){
        printf("Rio de Janeiro vence em quantidade de população\n");
    } else{
        printf("São Gonçalo vence em quantidade de população\n");
    }
    break;

    case 3:

    printf("Rio de Janeiro tem área de: %d\n", area_D1);
    printf("São Gonçalo tem área de: %d\n", area_D2);
    if (area_D1 > area_D2 ){
        printf("Rio de Janeiro vence em área\n");
    } else{
        printf("São Gonçalo vence em área\n");
    }
    break;

    case 4:

    printf("Rio de Janeiro tem PIB de: %d\n", PIB_D1);
    printf("São Gonçalo tem PIB de: %d\n", PIB_D2);
    if (PIB_D1 > PIB_D2 ){
        printf("Rio de Janeiro vence em PIB\n");
    } else{
        printf("São Gonçalo vence em PIB\n");
    }
    break;

    case 5:

    printf("Rio de Janeiro tem densidade populacional de: %f\n", densidade_populacional_D1);
    printf("São Gonçalo  tem densidade populacional de: %f\n", densidade_populacional_D2);
    if (densidade_populacional_D1 < densidade_populacional_D2 ){
        printf("Rio de Janeiro vence em densidade populacional\n");
    } else{
        printf("São Gonçalo  vence densidade populacional\n");
    }
    break;

    case 6:

    printf("Rio de Janeiro tem PIB per capita de: %f\n", pib_percapita_D1);
    printf("São Gonçalo  tem PIB per capita de: %f\n", pib_percapita_D2);
    if (pib_percapita_D1 > pib_percapita_D2){
        printf("Rio de Janeiro vence em PIB per capita\n");
    } else{
        printf("São Gonçalo  vence em PIB per capita\n");
    }
    break;
    default:
            printf("Opção inválida\n");
    break;
    }

    printf("Comparação entre Duque de Caxias e Nova Iguaçu\n");
    printf("Qual das opções de atributos abaixo quer comparar entre as cidades?\n");
    printf("1. Nº de pontos turísticos\n");
    printf("2. Quantida de população\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    printf("Digite o número da opção que quer comparar:\n");
    scanf("%d", &opcaoD3eD4);
    
    switch(opcaoD3eD4)
    {
    case 1:

    printf("Duque de Caxias tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_D3);
    printf("Nova Iguaçu tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_D4);
    if (numero_de_pontos_turisticos_D3 > numero_de_pontos_turisticos_D4 ){
        printf("Duque de Caxias vence em nº de pontos turísticos\n");
    } else{
        printf("Nova Iguaçu vence em nº de pontos turísticos\n");
    }
    break;

    case 2:

    printf("Duque de Caxias tem de população: %d\n", populacao_D3);
    printf("Nova Iguaçu tem de população: %d\n", populacao_D4);
    if (populacao_D3 > populacao_D4 ){
        printf("Duque de Caxias vence em quantidade de população\n");
    } else{
        printf("Nova Iguaçu vence em quantidade de população\n");
    }
    break;
    
    case 3:

    printf("Duque de Caxias tem área de: %d\n", area_D3);
    printf("Nova Iguaçu tem área de: %d\n", area_D4);
    if (area_D3 > area_D4 ){
        printf("Duque de Caxias vence em área\n");
    } else{
        printf("Nova Iguaçu vence em área\n");
    }
    break;

    case 4:

    printf("Duque de Caxias tem PIB de: %d\n", PIB_D3 );
    printf("Nova Iguaçu tem PIB de: %d\n", PIB_D4);
    if (PIB_D3  > PIB_D4 ){
        printf("Duque de Caxias vence em PIB\n");
    } else{
        printf("Nova Iguaçu vence em PIB\n");
    }
    break;

    case 5:

    printf("Duque de Caxias tem densidade populacional de: %f\n", densidade_populacional_D3);
    printf("Nova Iguaçu  tem densidade populacional de: %f\n", densidade_populacional_D4);
    if (densidade_populacional_D3  < densidade_populacional_D4 ){
        printf("Duque de Caxias vence em densidade populacional\n");
    } else{
        printf("Nova Iguaçu  vence densidade populacional\n");
    }
    break;

    case 6:

    printf("Duque de Caxias tem PIB per capita de: %f\n", pib_percapita_D3 );
    printf("Nova Iguaçu  tem PIB per capita de: %f\n", pib_percapita_D4);
    if (pib_percapita_D3 > pib_percapita_D4){
        printf("Duque de Caxias vence em PIB per capita\n");
    } else{
        printf("Nova Iguaçu  vence em PIB per capita\n");
    }
    break;
    default:
            printf("Opção inválida\n");
    break;
    }

    printf("Comparação entre Curitiba e Londrina\n");
    printf("Qual das opções de atributos abaixo quer comparar entre as cidades?\n");
    printf("1. Nº de pontos turísticos\n");
    printf("2. Quantida de população\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    printf("Digite o número da opção que quer comparar:\n");
    scanf("%d", &opcaoA1eA2);
    
    switch(opcaoE1eE2)
    {
    case 1:

    printf("Curitiba tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_E1);
    printf("Londrina tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_E2);
    if (numero_de_pontos_turisticos_E1 > numero_de_pontos_turisticos_E2 ){
        printf("Curitiba vence em nº de pontos turísticos\n");
    } else{
        printf("Londrina vence em nº de pontos turísticos\n");
    }
    break;

    case 2:

    printf("Curitiba tem de população: %d\n", populacao_E1);
    printf("Londrina tem de população: %d\n", populacao_E2);
    if (populacao_E1 > populacao_E2 ){
        printf("Curitiba vence em quantidade de população\n");
    } else{
        printf("Londrina vence em quantidade de população\n");
    }
    break;

    case 3:

    printf("Curitiba tem área de: %d\n", area_E1);
    printf("Londrina tem área de: %d\n", area_E2);
    if (area_E1 > area_E2 ){
        printf("Curitiba vence em área\n");
    } else{
        printf("Londrina vence em área\n");
    }
    break;

    case 4:

    printf("Curitiba tem PIB de: %d\n", PIB_E1 );
    printf("Londrina tem PIB de: %d\n", PIB_E2);
    if (PIB_E1  > PIB_E2 ){
        printf("Curitiba vence em PIB\n");
    } else{
        printf("Londrina vence em PIB\n");
    }
    break;

    case 5:

    printf("Curitiba tem densidade populacional de: %f\n", densidade_populacional_E1);
    printf("Londrina tem densidade populacional de: %f\n", densidade_populacional_E2);
    if (densidade_populacional_E1  < densidade_populacional_E2 ){
        printf("Curitiba vence em densidade populacional\n");
    } else{
        printf("Londrina vence densidade populacional\n");
    }
    break;

    case 6:

    printf("Curitiba tem PIB per capita de: %f\n", pib_percapita_E1 );
    printf("Londrina tem PIB per capita de: %f\n", pib_percapita_E2);
    if (pib_percapita_E1 > pib_percapita_E2){
        printf("Curitiba vence em PIB per capita\n");
    } else{
        printf("Londrina vence em PIB per capita\n");
    }
    break;
    default:
            printf("Opção inválida\n");
    break;
    }

    printf("Comparação entre Maringa e Ponta Grossa\n");
    printf("Qual das opções de atributos abaixo quer comparar entre as cidades?\n");
    printf("1. Nº de pontos turísticos\n");
    printf("2. Quantida de população\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    printf("Digite o número da opção que quer comparar:\n");
    scanf("%d", &opcaoE3eE4);
    
    switch(opcaoE3eE4)
    {
    case 1:

    printf("Maringa tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_E3);
    printf("Ponta Grossa tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_E4);
    if (numero_de_pontos_turisticos_E3 > numero_de_pontos_turisticos_E4 ){
        printf("Maringa vence em nº de pontos turísticos\n");
    } else{
        printf("Ponta Grossa vence em nº de pontos turísticos\n");
    }
    break;

    case 2:

    printf("Maringa tem de população: %d\n", populacao_E3);
    printf("Ponta Grossa tem de população: %d\n", populacao_E4);
    if (populacao_E3 > populacao_E4 ){
        printf("Maringa vence em quantidade de população\n");
    } else{
        printf("Ponta Grossa vence em quantidade de população\n");
    }
    break;

    case 3:

    printf("Maringa tem área de: %d\n", area_E3);
    printf("Ponta Grossa tem área de: %d\n", area_E4);
    if (area_E3 > area_E4 ){
        printf("Maringa vence em área\n");
    } else{
        printf("Ponta Grossa vence em área\n");
    }
    break;

    case 4:

    printf("Maringa tem PIB de: %d\n", PIB_E3 );
    printf("Ponta Grossa tem PIB de: %d\n", PIB_E4);
    if (PIB_E3  > PIB_E4 ){
        printf("Maringa vence em PIB\n");
    } else{
        printf("Ponta Grossa vence em PIB\n");
    }
    break;

    case 5:

    printf("Maringa tem densidade populacional de: %f\n", densidade_populacional_E3);
    printf("Ponta Grossa  tem densidade populacional de: %f\n", densidade_populacional_E4);
    if (densidade_populacional_E3  < densidade_populacional_E4 ){
        printf("Maringa vence em densidade populacional\n");
    } else{
        printf("Ponta Grossa vence densidade populacional\n");
    }
    break;

    case 6:

    printf("Maringa tem PIB per capita de: %f\n", pib_percapita_E3 );
    printf("Ponta Grossa  tem PIB per capita de: %f\n", pib_percapita_E4);
    if (pib_percapita_E3 > pib_percapita_E4){
        printf("Maringa vence em PIB per capita\n");
    } else{
        printf("Ponta Grossa vence em PIB per capita\n");
    }
    break;
    default:
            printf("Opção inválida\n");
    break;
    }


    printf("Comparação entre Belo Horizonte e Uberlandia\n");
    printf("Qual das opções de atributos abaixo quer comparar entre as cidades?\n");
    printf("1. Nº de pontos turísticos\n");
    printf("2. Quantida de população\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    printf("Digite o número da opção que quer comparar:\n");
    scanf("%d", &opcaoF1eF2);
    
    switch(opcaoF1eF2)
    {
    case 1:

    printf("Belo Horizonte tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_F1);
    printf("Uberlandia tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_F2);
    if (numero_de_pontos_turisticos_F1 > numero_de_pontos_turisticos_F2 ){
        printf("Belo Horizonte vence em nº de pontos turísticos\n");
    } else{
        printf("Uberlandia vence em nº de pontos turísticos\n");
    }
    break;

    case 2:

    printf("Belo Horizonte tem de população: %d\n", populacao_F1);
    printf("Uberlandia tem de população: %d\n", populacao_F2);
    if (populacao_F1 > populacao_F2 ){
        printf("Belo Horizonte vence em quantidade de população\n");
    } else{
        printf("Uberlandia vence em quantidade de população\n");
    }
    break;

    case 3:

    printf("Belo Horizonte tem área de: %d\n", area_F1);
    printf("Uberlandia tem área de: %d\n", area_F2);
    if (area_F1 > area_F2 ){
        printf("Belo Horizonte vence em área\n");
    } else{
        printf("Uberlandia vence em área\n");
    }
    break;

    case 4:

    printf("Belo Horizonte tem PIB de: %d\n", PIB_F1 );
    printf("Uberlandia tem PIB de: %d\n", PIB_F2);
    if (PIB_F1  > PIB_F2 ){
        printf("Belo Horizonte vence em PIB\n");
    } else{
        printf("Uberlandia vence em PIB\n");
    }
    break;

    case 5:

    printf("Belo Horizonte tem densidade populacional de: %f\n", densidade_populacional_F1);
    printf("Uberlandia tem densidade populacional de: %f\n", densidade_populacional_F2);
    if (densidade_populacional_F1  < densidade_populacional_F2 ){
        printf("Belo Horizonte vence em densidade populacional\n");
    } else{
        printf("Uberlandia vence densidade populacional\n");
    }
    break;

    case 6:

    printf("Belo Horizonte tem PIB per capita de: %f\n", pib_percapita_F1 );
    printf("Uberlandia tem PIB per capita de: %f\n", pib_percapita_F2);
    if (pib_percapita_F1 > pib_percapita_F2){
        printf("Belo Horizonte vence em PIB per capita\n");
    } else{
        printf("Uberlandia vence em PIB per capita\n");
    }
    break;
    default:
            printf("Opção inválida\n");
    break;
    }

    printf("Comparação entre Contagem e Juiz de Fora\n");
    printf("Qual das opções de atributos abaixo quer comparar entre as cidades?\n");
    printf("1. Nº de pontos turísticos\n");
    printf("2. Quantida de população\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    printf("Digite o número da opção que quer comparar:\n");
    scanf("%d", &opcaoF3eF4);
    
    switch(opcaoF3eF4)
    {
    case 1:

    printf("Contagem tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_F3);
    printf("Juiz de Fora tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_F4);
    if (numero_de_pontos_turisticos_F3 > numero_de_pontos_turisticos_F4 ){
        printf("Contagem vence em nº de pontos turísticos\n");
    } else{
        printf("Juiz de Fora vence em nº de pontos turísticos\n");
    }
    break;

    case 2:

    printf("Contagem tem de população: %d\n", populacao_F3);
    printf("Juiz de Fora tem de população: %d\n", populacao_F4);
    if (populacao_F3 > populacao_F4 ){
        printf("Contagem vence em quantidade de população\n");
    } else{
        printf("Juiz de Fora vence em quantidade de população\n");
    }
    break;

    case 3:

    printf("Contagem tem área de: %d\n", area_F3);
    printf("Juiz de Fora tem área de: %d\n", area_F4);
    if (area_F3 > area_F4 ){
        printf("Contagem vence em área\n");
    } else{
        printf("Juiz de Fora vence em área\n");
    }
    break;

    case 4:

    printf("Contagem tem PIB de: %d\n", PIB_F3 );
    printf("Juiz de Fora tem PIB de: %d\n", PIB_F4);
    if (PIB_F3  > PIB_F4 ){
        printf("Contagem vence em PIB\n");
    } else{
        printf("Juiz de Fora vence em PIB\n");
    }
    break;

    case 5:

    printf("Contagem tem densidade populacional de: %f\n", densidade_populacional_F3);
    printf("Juiz de Fora  tem densidade populacional de: %f\n", densidade_populacional_F4);
    if (densidade_populacional_F3  < densidade_populacional_F4 ){
        printf("Contagem vence em densidade populacional\n");
    } else{
        printf("Juiz de Fora vence densidade populacional\n");
    }
    break;

    case 6:

    printf("Contagem tem PIB per capita de: %f\n", pib_percapita_F3 );
    printf("Juiz de Fora  tem PIB per capita de: %f\n", pib_percapita_F4);
    if (pib_percapita_F3 > pib_percapita_F4){
        printf("Contagem vence em PIB per capita\n");
    } else{
        printf("Juiz de Fora vence em PIB per capita\n");
    } 
    break;
    default:
            printf("Opção inválida\n");
    break;
    }

    printf("Comparação entre Manaus e Itacoatiara\n");
    printf("Qual das opções de atributos abaixo quer comparar entre as cidades?\n");
    printf("1. Nº de pontos turísticos\n");
    printf("2. Quantida de população\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    printf("Digite o número da opção que quer comparar:\n");
    scanf("%d", &opcaoG1eG2);
    
    switch(opcaoG1eG2)
    {
    case 1:

    printf("Manaus tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_G1);
    printf("Itacoatiara tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_G2);
    if (numero_de_pontos_turisticos_G1 > numero_de_pontos_turisticos_G2 ){
        printf("Manaus vence em nº de pontos turísticos\n");
    } else{
        printf("Itacoatiara vence em nº de pontos turísticos\n");
    }
    break;

    case 2:

    printf("Manaus tem de população: %d\n", populacao_G1);
    printf("Itacoatiara tem de população: %d\n", populacao_G2);
    if (populacao_G1 > populacao_G2 ){
        printf("Manaus vence em quantidade de população\n");
    } else{
        printf("Itacoatiara vence em quantidade de população\n");
    }
    break;

    case 3:

    printf("Manaus tem área de: %d\n", area_G1);
    printf("Itacoatiara tem área de: %d\n", area_G2);
    if (area_G1 > area_G2 ){
        printf("Manaus vence em área\n");
    } else{
        printf("Itacoatiara vence em área\n");
    }
    break;

    case 4:

    printf("Manaus tem PIB de: %d\n", PIB_G1 );
    printf("Itacoatiara tem PIB de: %d\n", PIB_G2);
    if (PIB_G1  > PIB_G2 ){
        printf("Manaus vence em PIB\n");
    } else{
        printf("Itacoatiara vence em PIB\n");
    }
    break;

    case 5:

    printf("Manaus tem densidade populacional de: %f\n", densidade_populacional_G1);
    printf("Itacoatiara  tem densidade populacional de: %f\n", densidade_populacional_G2);
    if (densidade_populacional_G1  < densidade_populacional_G2 ){
        printf("Manaus vence em densidade populacional\n");
    } else{
        printf("Itacoatiara vence densidade populacional\n");
    }
    break;

    case 6:

    printf("Manaus tem PIB per capita de: %f\n", pib_percapita_G1 );
    printf("Itacoatiara tem PIB per capita de: %f\n", pib_percapita_G2);
    if (pib_percapita_G1 > pib_percapita_G2){
        printf("Manaus vence em PIB per capita\n");
    } else{
        printf("Itacoatiara vence em PIB per capita\n");
    } 
    break;
    default:
            printf("Opção inválida\n");
    break;
    }
    

    printf("Comparação entre Manacapuru e Parintins\n");
    printf("Qual das opções de atributos abaixo quer comparar entre as cidades?\n");
    printf("1. Nº de pontos turísticos\n");
    printf("2. Quantida de população\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    printf("Digite o número da opção que quer comparar:\n");
    scanf("%d", &opcaoG3eG4);
    
    switch(opcaoG3eG4)
    {
    case 1:

    printf("Manacapuru tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_G3);
    printf("Parintins tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_G4);
    if (numero_de_pontos_turisticos_G3 > numero_de_pontos_turisticos_G4 ){
        printf("Manacapuru vence em nº de pontos turísticos\n");
    } else{
        printf("Parintins vence em nº de pontos turísticos\n");
    }
    break;

    case 2:

    printf("Manacapuru tem de população: %d\n", populacao_G3);
    printf("Parintins tem de população: %d\n", populacao_G4);
    if (populacao_G3 > populacao_G4 ){
        printf("Manacapuru vence em quantidade de população\n");
    } else{
        printf("Parintins vence em quantidade de população\n");
    }
    break;

    case 3:

    printf("Manacapuru tem área de: %d\n", area_G3);
    printf("Parintins tem área de: %d\n", area_G4);
    if (area_G3 > area_G4 ){
        printf("Manacapuru vence em área\n");
    } else{
        printf("Parintins vence em área\n");
    }
    break;

    case 4:

    printf("Manacapuru tem PIB de: %d\n", PIB_G3 );
    printf("Parintins tem PIB de: %d\n", PIB_G4);
    if (PIB_G3  > PIB_G4 ){
        printf("Manacapuru vence em PIB\n");
    } else{
        printf("Parintins vence em PIB\n");
    }
    break;

    case 5:

    printf("Manacapuru tem densidade populacional de: %f\n", densidade_populacional_G3);
    printf("Parintins tem densidade populacional de: %f\n", densidade_populacional_G4);
    if (densidade_populacional_G3  < densidade_populacional_G4 ){
        printf("Manacapuru vence em densidade populacional\n");
    } else{
        printf("Parintins vence densidade populacional\n");
    }
    break;

    case 6:

    printf("Manacapuru tem PIB per capita de: %f\n", pib_percapita_G3 );
    printf("Parintins tem PIB per capita de: %f\n", pib_percapita_G4);
    if (pib_percapita_G3 > pib_percapita_G4){
        printf("Manacapuru vence em PIB per capita\n");
    } else{
        printf("Parintins vence em PIB per capita\n");
    } 
    break;
    default:
            printf("Opção inválida\n");
    break;
    }

    printf("Comparação entre Salvador e Feira de Santana\n");
    printf("Qual das opções de atributos abaixo quer comparar entre as cidades?\n");
    printf("1. Nº de pontos turísticos\n");
    printf("2. Quantida de população\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    printf("Digite o número da opção que quer comparar:\n");
    scanf("%d", &opcaoH1eH2);
    
    switch(opcaoH1eH2)
    {
    case 1:

    printf("Salvador tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_H1);
    printf("Feira de Santana tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_H2);
    if (numero_de_pontos_turisticos_H1 > numero_de_pontos_turisticos_H2 ){
        printf("Salvador vence em nº de pontos turísticos\n");
    } else{
        printf("Feira de Santana vence em nº de pontos turísticos\n");
    }
    break;

    case 2:

    printf("Salvador tem de população: %d\n", populacao_H1);
    printf("Feira de Santana tem de população: %d\n", populacao_H2);
    if (populacao_H1 > populacao_H2 ){
        printf("Salvador vence em quantidade de população\n");
    } else{
        printf("Feira de Santana vence em quantidade de população\n");
    }
    break;
    
    case 3:

    printf("Salvador tem área de: %d\n", area_H1);
    printf("Feira de Santana tem área de: %d\n", area_H2);
    if (area_H1 > area_H2 ){
        printf("Salvador vence em área\n");
    } else{
        printf("Feira de Santana vence em área\n");
    }
    break;

    case 4:

    printf("Salvador tem PIB de: %d\n", PIB_H1 );
    printf("Feira de Santana tem PIB de: %d\n", PIB_H2);
    if (PIB_H1  > PIB_H2 ){
        printf("Salvador vence em PIB\n");
    } else{
        printf("Feira de Santana vence em PIB\n");
    }
    break;

    case 5:

    printf("Salvador tem densidade populacional de: %f\n", densidade_populacional_H1);
    printf("Feira de Santana tem densidade populacional de: %f\n", densidade_populacional_H2);
    if (densidade_populacional_H1  < densidade_populacional_H2 ){
        printf("Salvador vence em densidade populacional\n");
    } else{
        printf("Feira de Santana vence densidade populacional\n");
    }
    break;
    
    case 6:

    printf("Salvador tem PIB per capita de: %f\n", pib_percapita_H1 );
    printf("Feira de Santana  tem PIB per capita de: %f\n", pib_percapita_H2);
    if (pib_percapita_H1 > pib_percapita_H2){
        printf("Salvador vence em PIB per capita\n");
    } else{
        printf("Feira de Santana vence em PIB per capita\n");
    } 
    break;


    printf("Comparação entre Vitória da Conquista e Camacari\n");
    printf("Qual das opções de atributos abaixo quer comparar entre as cidades?\n");
    printf("1. Nº de pontos turísticos\n");
    printf("2. Quantida de população\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    printf("Digite o número da opção que quer comparar:\n");
    scanf("%d", &opcaoH1eH2);
    
    switch(opcaoH1eH2)
    {
    case 1:

    printf("Vitória da Conquista tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_H1);
    printf("Camacari tem nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_H2);
    if (numero_de_pontos_turisticos_H1 > numero_de_pontos_turisticos_H2 ){
        printf("Vitória da Conquista vence em nº de pontos turísticos\n");
    } else{
        printf("Camacari vence em nº de pontos turísticos\n");
    }
    break;

    case 2:

    printf("Vitória da Conquista tem de população: %d\n", populacao_H1);
    printf("Camacari tem de população: %d\n", populacao_H2);
    if (populacao_H1 > populacao_H2 ){
        printf("Vitória da Conquista vence em quantidade de população\n");
    } else{
        printf("Camacari vence em quantidade de população\n");
    }
    break;

    case 3:

    printf("Vitória da Conquista tem área de: %d\n", area_H1);
    printf("Camacari tem área de: %d\n", area_H2);
    if (area_H1 > area_H2 ){
        printf("Vitória da Conquista vence em área\n");
    } else{
        printf("Camacari vence em área\n");
    }
    break;

    case 4:

    printf("Vitória da Conquista tem PIB de: %d\n", PIB_H1 );
    printf("Camacari tem PIB de: %d\n", PIB_H2);
    if (PIB_H1  > PIB_H2 ){
        printf("Vitória da Conquista vence em PIB\n");
    } else{
        printf("Camacari vence em PIB\n");
    }
    break;

    case 5:

    printf("Vitória da Conquista tem densidade populacional de: %f\n", densidade_populacional_H1);
    printf("Camacari tem densidade populacional de: %f\n", densidade_populacional_H2);
    if (densidade_populacional_H1  < densidade_populacional_H2 ){
        printf("Vitória da Conquista vence em densidade populacional\n");
    } else{
        printf("Camacari vence densidade populacional\n");
    }
    break;

    case 6:

    printf("Vitória da Conquista tem PIB per capita de: %f\n", pib_percapita_H1 );
    printf("Camacari tem PIB per capita de: %f\n", pib_percapita_H2);
    if (pib_percapita_H1 > pib_percapita_H2){
        printf("Salvador vence em PIB per capita\n");
    } else{
        printf("Camacari vence em PIB per capita\n");
    } 
    break;
    default:
            printf("Opção inválida\n");
    break;
    }


    return 0;
}
