#include <stdio.h>
int main() {
    int n, i, j, temp, twt = 0, ttat = 0;
    float awt, atat;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    int p[n], bt[n], at[n], ct[n], wt[n], tat[n];
    printf("Enter the burst time and arrival time for each process:\n");
    for (i = 0; i < n; i++) {
        p[i] = i + 1;
        printf("Burst time for process %d: ", i + 1);
        scanf("%d", &bt[i]);
        printf("Arrival time for process %d: ", i + 1);
        scanf("%d", &at[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (at[j] > at[j + 1]) {
                temp = at[j]; at[j] = at[j + 1]; at[j + 1] = temp;
                temp = bt[j]; bt[j] = bt[j + 1]; bt[j + 1] = temp;
                temp = p[j];  p[j] = p[j + 1];  p[j + 1] = temp;
            }
        }
    }
    int time = at[0];
    for (i = 0; i < n; i++) {
        int min = i;
        for (j = i + 1; j < n; j++) {
            if (at[j] <= time && bt[j] < bt[min]) {
                min = j;
            }
        }
        if (min != i) {
            temp = at[i]; at[i] = at[min]; at[min] = temp;
            temp = bt[i]; bt[i] = bt[min]; bt[min] = temp;
            temp = p[i];  p[i] = p[min];  p[min] = temp;
        }
        time += bt[i];
        ct[i] = time;
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
        ttat += tat[i];
        twt += wt[i];
    }
    awt = (float)twt / n;
    atat = (float)ttat / n;
    printf("\nProcess\tBurst Time\tArrival Time\tCompletion Time\tTurnaround Time\tWaiting Time\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", p[i], bt[i], at[i], ct[i], tat[i], wt[i]);
    }
    printf("\nAverage Waiting Time: %.2f\n", awt);
    printf("Average Turnaround Time: %.2f\n", atat);
    return 0;
}