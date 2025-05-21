#include <stdio.h>
#define ex1

#ifdef ex1
int a[15], negativo[15], positivo[15]; //vetores

void armazena(int tamanho){
    int count;
    printf("\nDigite valores para o array");
    for(count=0;count<tamanho;count++){
        printf("\nA[%d]: ",count);
        scanf("%d",&a[count]);
    }
}

int positivos(int tamanho){
    int count, tamanho_positivo = 0;

    for(count=0;count<tamanho;count++){
        if(a[count] < 0){
            positivo[tamanho_positivo] = a[count];//aqui existe um problema
            tamanho_positivo++;
        }
    }

    return tamanho_positivo;
}

int maior_valor(int tamanho){
    int count;
    int maior=a[0];

    for (count=0; count<tamanho;count++){
        if(a[count]> maior){
            maior=a[count];
        }
    }
    return maior;
}

int negativos(int tamanho){
    int count, tamanho_negativo = 0;

    for(count=0;count<tamanho;count++){
        if(a[count] < 0){
            negativo[tamanho_negativo] = a[count];//aqui existe um problema
            tamanho_negativo++;
        }
    }

    return tamanho_negativo;
}

int media_pares(int tamanho){
    int count, media, total=0, tamanho_pares=0;

    for(count=0;count<tamanho;count++){
        if (a[count] % 2 == 0){
            total += a[count];
            tamanho_pares++;   //quantiedade de pares
        }
    }

    media = total/tamanho_pares;

    return media;
}

int fatorial(int numero){
    int count, result=1;

    for(count=numero;count>=1;count--){
        result = result * count;
    }

    return result;
}

int main(){
    int tamanho, tamanho_negativo, count, maior_v, fatorial_v, resultado_media_pares;

    //Determinando o tamanho do array
    do{
        printf("\nDigite o tamanho do array entre 4 e 15: ");
        scanf("%d", &tamanho);
        if(tamanho<4 || tamanho>15){
            printf("\nO tamanho do array e\' invalido, digite novamente");
        }
    }while(tamanho<4 || tamanho>15);
    

    //Armazenando os valores
    armazena(tamanho);

    //Analisando os valores negativos
    tamanho_negativo = negativos(tamanho);

    if(tamanho_negativo == 0){
        printf("\nNao ha valores negativos");
    }else{
        printf("\nOs valores do vetor negatico sao: ");
        for(count=0;count<tamanho_negativo;count++){
            printf("\nN[%d]: %d",count,negativo[count]);
        }
    }

    //Procurando o maior valor par
    maior_v = maior_valor(tamanho);
    if(maior_v<0){
        printf("\nNao ha valores positivos");
    }else{
        printf("\nO maior valor positivo e\': %d", maior_v);
    }

    //Calculando a media dos valores pares
    resultado_media_pares = media_pares(tamanho);

    if(resultado_media_pares == 0){
        printf("\nNao ha numeros pares");
    }else{
        printf("\nO calculo da media em relacao aos valores pares e\': %d", resultado_media_pares);
    }

    //Calculando fatorial
    if (maior_v<=0){
        printf("\nComo o numero e\' negativo ou 0 nao calcularemos o fatorial");
    }else{
        fatorial_v = fatorial(maior_v);
        printf("\nO fatorial do numero %d e\' %d",maior_v, fatorial_v);
    }

    //FIM
    printf("\nFIM\n");
    return 0;
}
#endif
