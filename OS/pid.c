#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
pid_t pid;
pid=fork();
if (pid<0)
{
fprintf(stderr,"Fork Failed");
}
else if(pid==0)
{
printf("PID OF CHILD PROCESS=%d\n",getpid());
}
else
printf("PID OF PARENT PROCESS=%d\n",getpid());
return 0;
}

