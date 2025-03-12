#include <stdio.h>
int main(){
   int n,i,j,temp,twt=0,ttat=0,time=0;
   float awt,atat;
   printf("Enter the number of processes:");
   scanf("%d",&n);
   int p[n],bt[n],at[n],ct[n],wt[n],tat[n],pr[n];
    printf("Enter Burst Time(BT), Arrival Time(AT), and Priority:\n");
    for (i = 0; i < n; i++) {
    p[i]=i+1;
    printf("Burst time for process %d: ", i + 1);
    scanf("%d", &bt[i]);
    printf("Arrival time for process %d: ", i + 1);
    scanf("%d", &at[i]);
    printf("Priority for process %d: ", i + 1);
    scanf("%d", &pr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(at[j]>at[j+1]){
                temp=at[j];at[j]=at[j+1];at[j+1]=temp;
                temp=bt[j];bt[j]=bt[j+1];bt[j+1]=temp;
                temp=pr[j];pr[j]=pr[j+1];pr[j+1]=temp;
                temp=p[j];p[j]=p[j+1];p[j+1]=temp;
            }
        }
    }
    time=at[0];
    for(i=0;i<n;i++){
        int min=i;
        for(j=i+1;j<n;j++){
            if(at[j]<=time&&pr[j]<pr[min]){
                min=j;
            }
        }
        if(min!=i){
            temp=at[i];at[i]=at[min];at[min]=temp;
            temp=bt[i];bt[i]=bt[min];bt[min]=temp;
            temp=pr[i];pr[i]=pr[min];pr[min]=temp;
            temp=p[i];p[i]=p[min];p[min]=temp;
        }
        time+=bt[i];
        ct[i]=time;
        tat[i]=ct[i]-at[i];
        wt[i]=tat[i]-bt[i];
        ttat+=tat[i];
        twt+=wt[i];
    }
    awt=(float)twt/n;
    atat=(float)ttat/n;
    printf("\nProcess\tBT\tAT\tP\tCT\tTAT\tWT\n");
    for(i=0;i<n;i++){
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n",p[i],bt[i],at[i],pr[i],ct[i],tat[i],wt[i]);
    }
    printf("\nAWT: %.2f\nATAT: %.2f\n",awt,atat);
    return 0;
}
