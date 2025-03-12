#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<dirent.h>
int main(){
DIR *dir;
struct dirent *entry;
dir=opendir(".");
if (dir == NULL)
{
perror("Error while opening the Directory" );
exit(EXIT_FAILURE);
}
while ((entry=readdir(dir))!=NULL){
printf("%s\n",entry->d_name);
}
closedir(dir);
return 0;
}
