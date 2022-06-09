
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>

int main()
{
	pid_t pid;
	printf("Hello world ... before fork.... pid is %d\n", getpid());

	pid = fork();
       printf("Hello world ... before fork.... pid is %d\n", getpid());

	if(pid == -1)
	{
		printf("failed... \n");
		return 0 ;
	}
	else
	{
		if (pid == 0)  //child process
		{
			printf("Hello world ... before fork.... pid is %d and ppid is %d\n ", getpid(), getppid());
			printf("chield is terminate........\n);
			exit(5);
		}
		else  // parent process
		{
		int cpid;
		int *status;
			printf("Hello world ... before fork....in the parent.. pid is %d and cpid is %d\n ", getpid(), pid());
//			while(1)
				sleep(1);
			cpid = wait(&status);
			printf("exited child process id is %d and the exitcode is %d\n",cpid , *status);
		}
	}
	         printf(" Hello world ... after fork .... pid is %d\n", gitpid());
	
		 return 0;
		 	
	}


