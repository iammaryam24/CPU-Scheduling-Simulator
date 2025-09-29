#include <stdio.h>


// Simple FCFS and Round Robin demonstration
int main(){
int n; printf("Number of processes: "); if(scanf("%d", &n)!=1) return 1;
int bt[100]; for(int i=0;i<n;i++){ printf("Burst time for P%d: ", i+1); scanf("%d", &bt[i]); }
// FCFS
int wt=0, t=0;
printf("\nFCFS:\n");
for(int i=0;i<n;i++){ printf("P%d wait=%d\n", i+1, t); t += bt[i]; }
// RR
int q; printf("\nRound Robin quantum: "); scanf("%d", &q);
int rem[100]; for(int i=0;i<n;i++) rem[i]=bt[i];
int time=0; printf("\nRR order:\n");
int done=0;
while(!done){ done=1; for(int i=0;i<n;i++) if(rem[i]>0){ done=0; int run = rem[i]>q?q:rem[i]; rem[i]-=run; time+=run; printf("P%d ran %d, rem=%d\n", i+1, run, rem[i]); }}
return 0;
}