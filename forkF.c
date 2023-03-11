#include<stdio.h>
#include<unistd.h>

main(void){
    int pid;
    pid = fork();
    if (pid == 0){
        printf("[H] MiPadre = %5d Yo = %5d\n",getppid(), getpid());
    }else{
        printf("[P] MiPadre = %5d Yo = %5d MiHijo = %5d\n",getppid(),getpid(),pid);
    }
}