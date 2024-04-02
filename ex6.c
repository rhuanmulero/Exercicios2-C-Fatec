#include <stdio.h>

main () {

float degrau, altura, resultado, retornar, avancar;
int resposta;

do{

printf("Digite A Altura do Degrau (EM CM): ");
scanf("%f", &degrau);

printf("Digite A Altura Que Voce Deseja Subir (EM CM): ");
scanf("%f", &altura);

resultado = altura/degrau;
retornar =  -(altura - degrau);
avancar = altura - degrau;

if (resultado < 1) {

printf("Voce Passou da Altura que Voce Deseja Subir! Retorne: %.2f Centimetros\n", retornar);

} else if (resultado == 1) {

printf("Avance Apenas uma Unidade!\n");

} else if (resultado > 1 && resultado < 2) {

printf("Avance: %.2f Centimetros\n", avancar);

} else {

printf("Avance Essa Quantidade de Degraus: %.2f\n", resultado);

}


printf("Digite 1 para Sair\nDigite 2 para Continuar\nDigite: ");
scanf("%d", &resposta);

} while (resposta != 1);

return 0;

}
