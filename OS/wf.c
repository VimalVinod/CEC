#include <stdio.h>
#define MAX 25

void worstfit(int b[], int f[], int nb, int nf)
{
    int i, j, k = 0, temp, highest, flag;
    for (i = 0; i < nf; i++)
    {
        highest = -1;
        flag = 0;
        for (j = 0; j < nb; j++)
        {
            temp = b[j] - f[i];
            if (temp >= 0) {
                if (highest < temp) {
                    k = j;
                    highest = temp;
                }
                flag = 1;
            }
        }
        if (flag)
        {
            printf("\nFile Size %d is put in Block %d", f[i], k + 1);
            b[k] = highest;
        }
        else
        {
            printf("\nFile Size %d must wait", f[i]);
        }
    }
}

int main()
{
    int i, nb, nf;
    int b[MAX], f[MAX];

    printf("Memory Management Scheme - Worst Fit\n");
    printf("Enter the number of blocks: ");
    scanf("%d", &nb);
    printf("Enter the number of files: ");
    scanf("%d", &nf);

    printf("Enter the size of the blocks:\n");
    for (i = 0; i < nb; i++) {
        printf("Block %d : ", i + 1);
        scanf("%d", &b[i]);
    }

    printf("Enter the size of the files:\n");
    for (i = 0; i < nf; i++) {
        printf("File %d: ", i + 1);
        scanf("%d", &f[i]);
    }

    worstfit(b, f, nb, nf);

    return 0;
}

