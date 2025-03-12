#include<stdio.h>
#include<unistd.h>
int main()
{
printf("Executing ls command using exec system call\n");
execlp("ls","ls","-l",NULL);
perror("Error executing command");
return 1;
}
