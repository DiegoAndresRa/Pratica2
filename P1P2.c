#include<stdio.h>
#include<unistd.h>
void imprimirLetras (char laLetra){
    int i, j, basura;
    for (i=1; i<10000; i++){
        printf("%c",laLetra);
        if ((i%60) == 0) printf("%d\n",i);
        basura = 0;
        for (j=0; j<10000; j++)basura++;
    }
    printf("\n");
}

int main(void){
    int pid;
    pid = fork();
    if (pid == 0){
        imprimirLetras('H');
    }else{
        imprimirLetras('P');
    }
}