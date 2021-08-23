#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
	pid_t child_pid;
	child_pid = fork();

	if(child_pid == 0){
		printf("I am the child process");

		for(int i = 0 ; i < 1; i++){


	}

	return 2;
	}

	else{
		printf("Print I a, the parent process\n");
	}
	return 0;
}