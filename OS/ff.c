#include <stdio.h>
#define max 25
void firstfit(int b[], int f[], int nb, int nf)
{
int i, j, k = 0, temp, flag;
for (i = 1; i <= nf; i++)
{
flag = 0;
for (j = 1; j <= nb; j++)
{
temp = b[j] - f[i];
if (temp >= 0) {
k = j;
printf("\nFile Size %d is put in %d partition", f[i], b[k]);
b[k] = temp;
flag = 1;
break;
}
}
if (flag == 0)
printf("\nFile Size %d must Wait", f[i]);
}
}
int main()
{
int i, nb, nf;
int b[max], f[max];
printf("Memory Management Scheme - First Fit\n");
printf("Enter the number of blocks: ");
scanf("%d", &nb);
printf("Enter the number of files: ");
scanf("%d", &nf);
printf("Enter the size of the blocks:\n");
for (i = 1; i <= nb; i++)
{
printf("Block %d : ", i);
scanf("%d", &b[i]);
}
printf("Enter the size of the files:\n");
for (i = 1; i <= nf; i++)
{
printf("File %d: ", i);
scanf("%d", &f[i]);
}
firstfit(b, f, nb, nf);
return 0;
}
