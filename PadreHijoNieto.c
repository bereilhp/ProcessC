#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

int main (void){
	
	if (fork() == 0){
		
		printf("PID: %d PPID: %d Soy el hijo \n", getpid(),getppid());

		fflush(stdout);
		sleep(1);

		if (fork() == 0){

		printf("PID: %d PPID: %d Soy el nieto \n", getpid(),getppid());
		fflush(stdout);
		sleep(1);
	}
	}else {
		
		printf("PID: %d PPID: %d Soy el padre \n", getpid(),getppid());
		fflush(stdout);
		sleep(1);
	}
	while(wait(NULL)>0){}
}

