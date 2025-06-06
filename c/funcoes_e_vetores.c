//Paulo Victor
#include <stdio.h>
#define ex4

#ifdef ex1
int Positivo(float valor){
    if(valor > 0){
        return 1; //positivo
    } else {
        return 0; //negativo
    }
}

void Exiba(float valor){
    float valor_ajuste = valor * 1.1556;
    printf("\nO preco do produto sem ajuste era de R$ %.2f, com o ajuste ele fica por R$ %.2f", valor, valor_ajuste);
}

int main(int argc, char const *argv[])
{
    float valor;
    int resultado;

    do{
        printf("\nDigite o valor do produto: ");
        scanf("%f",&valor);
        resultado = Positivo(valor);
        if (resultado == 0){
            printf("\nO valor digitado e invalido, digite novamente");
        }
    }while(resultado == 0);
    
    Exiba(valor);

    return 0;
}
#endif

#ifdef ex2
void Soma(float n1, float n2){
    float v_soma = n1 + n2;
    printf("\nA soma entre %f e %f e\' %f",n1,n2,v_soma);
}

void Media(float n1, float n2){
    float v_media = (n1 + n2)/2;
    printf("\nA media de %f e %f e\' %f",n1,n2,v_media);
}

void Produto(float n1, float n2){
    float v_produto = n1 * n2;
    printf("\nO produto entre %f e %f e\' %f",n1,n2,v_produto);
}


int main(int argc, char const *argv[])
{
    float n1, n2;

    printf("\nDigite o valor do n1: ");
    scanf("%f",&n1);
    printf("\nDigite o valor do n2: ");
    scanf("%f",&n2);

    Soma(n1,n2);
    Media(n1,n2);
    Produto(n1,n2);

    return 0;
}
#endif

#ifdef ex3
void Soma(float n1, float n2, float v_soma){
    printf("\nA soma entre %f e %f e\' %f",n1,n2,v_soma);
}

void Media(float n1, float n2, float v_media){
    printf("\nA media de %f e %f e\' %f",n1,n2,v_media);
}

void Produto(float n1, float n2, float v_produto){
    printf("\nO produto entre %f e %f e\' %f",n1,n2,v_produto);
}


int main(int argc, char const *argv[])
{
    float n1, n2, v_soma, v_media, v_produto;

    printf("\nDigite o valor do n1: ");
    scanf("%f",&n1);
    printf("\nDigite o valor do n2: ");
    scanf("%f",&n2);

    v_soma = n1 + n2;
    v_media = (n1 + n2)/2;
    v_produto = n1 * n2;

    Soma(n1,n2, v_soma);
    Media(n1,n2, v_media);
    Produto(n1,n2, v_produto);

    return 0;
}
#endif

#ifdef ex4
int Positivo(float valor){
    if(valor > 0){
        return 1; //positivo
    } else {
        return 0; //negativo
    }
}

void Exiba(float valor, float p_imposto, float p_lucro){
    float v_lucro = valor * (p_lucro/100);
    float v_imposto = valor * (p_imposto/100);
    float v_final = valor + v_imposto + v_lucro;
    printf("\nO valor do imposto e\' R$%.4f, do lucro e\' R$%.4f e o custo final do produto e\' R$%.4f", v_imposto, v_lucro, v_final);
}

int main(int argc, char const *argv[])
{
    float v_produto, p_imposto, p_lucro, resultado; //v = valor, p = porcentagem
    
    do{
        printf("\nDigite o valor do produto: ");
        scanf("%f",&v_produto);
        resultado = Positivo(v_produto);
        if (resultado == 0){
            printf("\nO valor digitado e invalido, digite novamente");
        }
    }while(resultado == 0);

    do{
        printf("\nDigite o valor do imposto em porcentagem: ");
        scanf("%f",&p_imposto);
        resultado = Positivo(p_imposto);
        if (resultado == 0){
            printf("\nO valor digitado e invalido, digite novamente");
        }
    }while(resultado == 0);

    do{
        printf("\nDigite o valor do lucro em porcentagem: ");
        scanf("%f",&p_lucro);
        resultado = Positivo(p_lucro);
        if (resultado == 0){
            printf("\nO valor digitado e invalido, digite novamente");
        }
    }while(resultado == 0);
    
    Exiba(v_produto, p_imposto, p_lucro);

    return 0;
}
#endif