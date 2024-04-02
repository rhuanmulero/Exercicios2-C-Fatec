#include <stdio.h>
#include <math.h>

main () {

int resposta;
float a, b, c, delta, x1, x2, semA, semB, discriminante, semC, x;


do {

printf("Bem-Vindo ao Calculo do Delta e das Raizes!\nDigite o Primeiro Numero (A): ");
scanf("%f", &a);

printf("Digite o Segundo Numero (B): ");
scanf("%f", &b);

printf("Digite o Terceiro Numero (C): ");
scanf("%f", &c);

delta = (b * b) - (4 * a * c);

x1 = (-b + sqrt(delta))/(2 * a);
x2 = (-b - sqrt(delta))/(2 * a);

if (a == 0 & b == 0 && c == 0) {

printf("Todos os coeficientes sao zero. A equacao tem infinitas solucoes.\n");

}

else if (a == 0){

    semA = -c/b;
    printf("Se A = 0, torna-se uma equacao linear, onde x = %.2f\n", semA);

}

else if (b == 0) {

    discriminante = -4 * a * c;

if (discriminante < 0) {
float parteReal = 0;
float parteImaginaria = sqrt(-discriminante) / (2 * a);

printf("As raizes sao complexas:\n");
printf("x1 = %.2f + %.2fi\n", parteReal, parteImaginaria);
printf("x2 = %.2f - %.2fi\n", parteReal, parteImaginaria);
}

else {

x1 = sqrt(c / a);
x2 = -sqrt(c / a);

printf("As raizes sao reais:\n");
printf("x1 = %.2f\n", x1);
printf("x2 = %.2f\n", x2);
    }

}

else if (c == 0){

semC = -b/a;

printf("x1 = 0\n");
printf("x2 = %.2f\n", semC);

}

else if (delta < 0){
    printf("Seu Delta: %.2f\n", delta);
    printf("Nao Ha Raizes Reais\n");

} else {
printf("Seu Delta: %.2f\n", delta);
printf("Suas Raizes:\nx1: %.2f\n", x1);
printf("x2: %.2f\n", x2);
}

printf("Digite 1 para Sair\nDigite 2 Para Continuar\nDigite: ");
scanf("%d", & resposta);
} while (resposta != 1);

return 0;
}
