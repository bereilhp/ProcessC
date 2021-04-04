#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main (void){
if (fork() == 0){
	printf("Soy el hijo0 con PID %d y con PPID %d\n", getpid(),getppid());
}else if (fork() == 0){
	printf("Soy el hijo1 con PID %d y con PPID %d \n", getpid(),getppid());
}else if(fork() == 0){	
	printf("Soy el hijo2 con PID %d y con PPID %d \n", getpid(),getppid());
}else if(fork() == 0){	
	printf("Soy el hijo3 con PID %d y con PPID %d \n", getpid(),getppid());
}else if (fork() == 0){
	printf("Soy el hijo4 con PID %d y con PPID %d \n", getpid(),getppid());
}else if(fork() == 0){	
	printf("Soy el hijo5 con PID %d y con PPID %d \n", getpid(),getppid());
}else if(fork() == 0){	
	printf("Soy el hijo6 con PID %d y con PPID %d \n", getpid(),getppid());
}else{
printf("Soy el Padre con PID %d y con PPID %d \n", getpid(),getppid());
}
		while(wait(NULL)>0){}
}
