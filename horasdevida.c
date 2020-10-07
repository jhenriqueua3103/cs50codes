#include <stdio.h>
#include <cs50.h>

int main (void)
{
    string nome = get_string("Qual o seu nome?\n");

    int age;
        printf("Quantos anos você tem %s?\n", nome);
            scanf("%d", &age);
            
    int horas = age * 8766;
        printf("Você está vivo por aproximadamente %d horas, nossa '-'\n", horas);

}
