#include <stdio.h>

main () {

float num1, num2, num3;
int resposta;

do{
do {

    printf("Digite o Primeiro Numero: ");
    scanf("%f", &num1);

    printf("Digite o Segundo Numero: ");
    scanf("%f", &num2);

    printf("Digite o Terceiro Numero: ");
    scanf("%f", &num3);

    if (num1 == num2 && num1 == num3) {

        printf("Todos os Numeros Sao Iguais\nDigite novos numeros diferentes\n");
}


}while (num1 == num2 && num1 == num3 && num2 == num3);{

 if (num1 > num2 && num1 > num3){

        printf("O maior numero e' o primeiro: %.2f\n", num1);
}

 if (num2 > num1 && num2 > num3) {

        printf("O maior numero e' o segundo: %.2f\n", num2);
}

 if (num3 > num1 && num3 > num2) {

        printf("O maior numero e' o terceiro: %.2f\n", num3);
}

printf("Digite 1 para Sair\nDigite 2 para Continuar\nDigite: ");
scanf("%d", &resposta);

}

} while (resposta != 1);

return 0;

}

