#include<bits/stdc++.h>
using namespace std;

void findwaitingtime(int process[],int n, int bt[],int wt[]){
    wt[0]=0;
    for(int i=1;i<n;i++)
    wt[i]=bt[i-1]+wt[i-1];
}

void findturnaroundtime(int process[],int n,int bt[],int wt[],int tat[]){
    for(int i =0;i<n;i++)
    tat[i]=bt[i]+wt[i];
}
 
void findAvgtime(int process[],int n,int bt[]){
    int wt[n],tat[n],total_wt=0,total_tat=0;
    findwaitingtime(process,n,bt,wt);
    findturnaroundtime(process,n,bt,wt,tat);
    printf("Process \t Burst time \t Waiting time \t Turn around Time \n ");
    for(int i=0;i<n;i++){
        total_wt=total_wt+wt[i];
        total_tat=total_tat+tat[i];
        printf("%d \t \t %d \t \t %d \t \t %d",(i+1),bt[i],wt[i],tat[i]);

        printf("\n");

        float s =  (float)total_wt/(float)n;
        float t = (float)total_tat/(float)n;
        printf("\n Average waiting time = %7.4f",s);
        printf("\n Average turn around time = %7.2f",s);
        
        }
}

int main(){

    int process[] = {1,2,3};
    int n = sizeof(process)/sizeof(process[0]);
    int burst_time[]={10,5,8};
    findAvgtime(process,n,burst_time);
    
return 0;
 
}