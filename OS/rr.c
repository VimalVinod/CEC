#include <stdio.h>
int q[100];
int f = -1;
int r = -1;
void insert(int n) {
    if (f == -1)
        f = 0;
    r = r + 1;
    q[r] = n;
}
int delete() {
    int n;
    n = q[f];
    f = f + 1;
    return n;
}
int main() {
    int s, tq, n, i, t = 0;
    float twt = 0, ttat = 0;
    printf("Enter No. of processes: ");
    scanf("%d", &n);
    int p[n],at[n], tbt[n], bt[n], ct[n], tat[n], wt[n], exist[n];
    for (i = 0; i < n; i++) {
        exist[i] = 0;
    }
    printf("Enter arrival time & burst time of each process:\n");
    for (i = 0; i < n; i++) {
        p[i]=i+1;
        printf("A.T of process %d: ",p[i]);
        scanf("%d", &at[i]);
        printf("B.T of process %d: ",p[i]);
        scanf("%d", &bt[i]);
    }
    printf("Enter time quantum: ");
    scanf("%d", &tq);
    for(i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(at[j] > at[j + 1]) {
                int temp = at[j];
                at[j] = at[j + 1];
                at[j + 1] = temp;
                temp = bt[j];
                bt[j] = bt[j + 1];
                bt[j + 1] = temp;
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
    for(i=0;i<n;i++)
    tbt[i]=bt[i];
    insert(0);
    exist[0] = 1;
    while (f <= r) {
        s = delete();
  if (tbt[s] >= tq) {
            tbt[s] -= tq;
            t += tq;
        } else {
            t += tbt[s];
            tbt[s] = 0;
        }
  for (i = 0; i < n; i++) {
            if (exist[i] == 0 && at[i] <= t) {
                insert(i);
                exist[i] = 1;
            }
        }
 if (tbt[s] == 0) {
            ct[s] = t;
            tat[s] = ct[s] - at[s];
            wt[s] = tat[s] - bt[s];
            ttat += tat[s];
            twt += wt[s];
     } else {
            insert(s);
        }
    }
    printf("\nP.No.\tAT\tBT\tCT\tTAT\tWT");
    for (i = 0; i < n; i++) {
        printf("\n%d\t%d\t%d\t%d\t%d\t%d", p[i], at[i], bt[i], ct[i], tat[i], wt[i]);
    }
    printf("\nAverage Turnaround time = %f", ttat / n);
    printf("\nAverage Waiting time = %f", twt / n);
    return 0;
}
