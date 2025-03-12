#include <stdio.h>
#define ex3

#ifdef ex1
int lerdados(int numero)
{
    do
    {
        printf("Digite um numero\n");
        scanf(" %d", &numero);
        if (numero <= 0)
        {
            printf("\7O numero digitado nao pode ser \"0\" nem um numero negativo\n");
        };
    } while (numero <= 0);
    return numero // eu não havia colocado o "return" e não ocorreu nenhum erro, acho que isso tem a ver com "PONTEIROS"
}

int main(int argc, char const *argv[])
{
    int numero;
    numero = lerdados(numero); // isso não faz muito sentido mas não sei como eu poderia fazer da forma certa no fluxograma
    printf("O sucessor do numero digitado e\' %d e o antecessor e\' %d", numero + 1, numero - 1);
    return 0;
}
#endif

#ifdef ex2
float lerdados(float numero)
{
    do
    {
        printf("Digite o valor do produto\n");
        scanf("%f", &numero);
        if (numero <= 0)
        {
            printf("\7O valor digitado nao pode ser \"0\" nem um numero negativo\n");
        };
    } while (numero <= 0);
    return numero; // antes o código estava com problema pois eu havia esquecido de escrever o "return" ;-; //por causa disso o resultado da multiplicação entre um void e o 1.1 é 1.#QNaN0
}

int main(int argc, char const *argv[])
{
    float preco;
    preco = lerdados(preco); // isso não faz muito sentido mas não sei como eu poderia fazer da forma certa no fluxograma
    printf("O valor do produto com o reajuste de 10%% e\' %f reais", preco * 1.1);
    return 0;
}
#endif

#ifdef ex3
float lerdados(float numero)
{
    do
    {
        printf("Digite o valor do produto\n");
        scanf("%f", &numero);
        if (numero <= 0)
        {
            printf("\7O valor digitado nao pode ser \"0\" nem um numero negativo\n");
        };
    } while (numero <= 0);
    return numero; // antes o código estava com problema pois eu havia esquecido de escrever o "return" ;-;
}

int main(int argc, char const *argv[])
{
    float preco;
    preco = lerdados(preco); // isso não faz muito sentido mas não sei como eu poderia fazer da forma certa no fluxograma
    printf("O valor do produto com promocao de 10%% e\' %f reais", preco * 0.9);
    return 0;
}
#endif

#ifdef ex4
int lerdados(int numero)
{
    do
    {
        printf("Digite um numero\n");
        scanf(" %d", &numero);
        if (numero <= 0)
        {
            printf("\7O numero digitado nao pode ser \"0\" nem um numero negativo\n");
        };
    } while (numero <= 0);
}

int main(int argc, char const *argv[])
{
    int numero;
    numero = lerdados(numero); // isso não faz muito sentido mas não sei como eu poderia fazer da forma certa no fluxograma
    printf("O sucessor do numero digitado e\' %d e o antecessor e\' %d", numero + 1, numero - 1);
    return 0;
}
#endif