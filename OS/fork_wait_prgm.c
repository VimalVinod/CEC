#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
int main()
{
pid_t pid;
pid = fork();
if (pid < 0) {
perror("Fork failed");
exit(EXIT_FAILURE);
}
else if (pid==0)
{
printf("Child process:pid=%d\n",getpid());
printf("Child process:parent pid=%d\n",getppid());
sleep(2);
printf("Child process :Exiting\n");
exit(EXIT_SUCCESS);
}
else
{
printf("Parent process:pid=%d\n",getpid());
printf("Parent process : waiting for child to exit...\n" );
int status;
wait(&status);
printf("Parent Process: Child exit with status%d\n",status);

}
return 0;
}
