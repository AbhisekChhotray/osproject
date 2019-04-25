#include<stdio.h>
#include<conio.h>
int main()
{
	int n,pid[100],at[100],bt[100],wt[100],tat[100],rt[100];
	int i,j,temp;
	float aw=0,ata=0;
	printf("Enter the total number of processes :");
	scanf("%d",&n);
	printf("Enter the process number : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&pid[i]);
	}
	printf("Enter Arrival time of processes :");
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&at[i]);
		bt[i]=2*at[i];
        
    }
    
     for(i=0;i<n;i++)
    {
     for(j=0;j<n-i-1;j++)
	 {
	 	if(bt[j]<bt[j+1])
	 	{                     
	 		temp=bt[j];
	 		bt[j]=bt[j+1];
	 		bt[j+1]=temp;
	 		
	 		temp=pid[j];
	 		pid[j]=pid[j+1];
	 		pid[j+1]=temp;
		 }
	 }	
	}
	
    
   printf("P_Id\t Arrival time\t Burst Time\t Turn Around Time\t Waiting Time\t    Response Time\n");
    
    for(i=0;i<n;i++)
    {
    	wt[i]=0;
    	tat[i]=0;
    	for(j=0;j<i;j++)
    	{
    		wt[i]+=bt[j];
    		
		}
    	
        tat[i]=wt[i]+bt[i];
        rt[i]=wt[i];
        aw+=wt[i];
        ata+=tat[i];
        printf("P%d\t\t%d\t\t%d\t\t  %d\t\t\t%d\t\t %d\n",pid[i],at[i],bt[i],tat[i],wt[i],rt[i]);
    }
    aw=aw/n;
    ata=ata/n;
    printf("Average Waiting time= %f\n",aw);
    printf("Average Turn Around time= %f",ata);
    getch();
    
	}

