//Gabriel Rocha Silveira 2019/2 AED 1
//Caso ganhe na loteria não esqueça de mim :D
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sorteia(int *p, int n);
void insercao(int *p, int n);
void selectSort (int *p, int n);
void bubbleSort (int *p, int n);

int main(){
    
int *num;
int n,op;

for(;;){
printf("Informe a quantidade de numeros que deseja sortear: \n");
scanf("%d", & n);
    if(n<60){
        break;
    }
}

num = malloc(sizeof(int)*n);

sorteia(num,n); //Chama a função de sorteio

for(int i=0;i<n;i++){ //Apresenta os numeros

    printf("%d  ", *(num + (i*sizeof(int))));
}

for(;;){
printf("\n##INFORME QUAL METODO DE ORDENACAO DESEJA:## \n\n");
printf("1 - Insertion\n");
printf("2 - Select\n");
printf("3 - Bubble\n");
printf("4 - Selecionar novos numeros\n");
printf("0 - Não preciso de ordenacao!\n");
scanf("%d",& op);
printf("\n");
    switch (op){
        case 1:
            insercao(num, n);
            for(int i=0; i<n; i++){
                printf("%d  ", *(num + (i*sizeof(int))));
            }
            break;
        case 2:
            selectSort(num,n);
            for(int i=0; i<n; i++){
                printf("%d  ", *(num + (i*(sizeof(int)))));
            }
            break;
        case 3:
            bubbleSort(num, n);
            for (int i=0; i<n; i++){
                printf("%d  ", *(num +(i*(sizeof(int)))));
            }
            break;
        case 4:
            free(num);
            for(;;){
                printf("Informe a quantidade de numeros que deseja sortear: \n");
                scanf("%d", & n);
                if(n<60){
                    break;
            }
                }
            num = malloc(sizeof(int)*n);
            sorteia(num,n); //Chama a função de sorteio
            for(int i=0;i<n;i++){
                printf("%d  ", *(num + (i*sizeof(int))));
            }
            break;

        case 0:
            exit(0);
            break;
    }

}
    free(num);
    return 0;
}

void sorteia(int *p, int n){
    int i;
    srand(time(NULL)); //Semente para nosso rand
    for(i=0;i<n;i++){
    *(p + (i*sizeof(int)))= (rand() % 60);
    
        if(i>0){   //Impede repetições pois afinal precisamos de numeros diferentes e retira o numero 0
            for(int j=0;j<i;j++){
                if (*(p + (i*sizeof(int)))==*(p + (j*sizeof(int))) || *(p + (i*sizeof(int)))==0){
                    i--;
                    break;
                }
           }
        }
    }
}

void insercao (int *p, int n){
    int i, j, tmp;
    for (j=1; j<n; j++){
    i=j-1;
    tmp = *(p + (j*sizeof(int)));
        while ((i>=0) && (tmp < *(p + (i*sizeof(int))))){
            *(p + (sizeof(int)+(i*sizeof(int)))) = *(p + (i*sizeof(int)));
            i--;
        }
        *(p + (sizeof(int)+(i*sizeof(int)))) = tmp;
    }
}

void selectSort (int *p, int n){
    int min, tmp, i, j, min_id;
    for(i=0; i<n-1; i++){
        min = *(p + (i*(sizeof(int))));
        for(j=i+1; j<n; j++)
            if (*(p + (j*(sizeof(int))))<min){
                min = *(p + (j*(sizeof(int))));
                min_id = j;
            }
        tmp = *(p + (i*(sizeof(int))));
        *(p + (i*(sizeof(int)))) = *(p + (min_id*(sizeof(int))));
        *(p + (min_id*(sizeof(int)))) = tmp;
        
        min_id = i+1;
    }
}

void bubbleSort (int *p, int n){
    int tmp, i, j;
    for (i=0; i<n-1; i++){
        for (j=0; j<n-i-1; j++){
            if (*(p + (j*(sizeof(int)))) > *(p + (sizeof(int)+(j*(sizeof(int)))))){
                tmp = *(p + (j*(sizeof(int))));
                *(p + (j*(sizeof(int)))) = *(p + (sizeof(int)+(j*(sizeof(int)))));
                *(p + (sizeof(int)+(j*(sizeof(int))))) = tmp;
            }
        }
    }
}
