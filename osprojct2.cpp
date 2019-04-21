#include<stdio.h>
#include<conio.h>
int main()
{
	int n,at[100],bt[100],wt[100],tat[100];
	int i,j,temp[100];
	float awt=0,atat=0;
	printf("Enter the total number of processes :");
	scanf("%d",&n);
	printf("Enter Arrival time of processes:");
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&at[i]);
		
    }
    
    printf("Enter Burst time twice the Arrival time:");
    for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
    }
    temp[0]=0;
    printf("P_Id\t Arrival time\t Burst Time\t Turn Around Time\t Waiting Time\n");
    
    for(i=0;i<n;i++)
    {
    	wt[i]=0;
    	tat[i]=0;
    	temp[i+1]=temp[i]+bt[i];
    	wt[i]=temp[i]-at[i];
        tat[i]=wt[i]+bt[i];
        awt+=wt[i];
        atat+=tat[i];
    	printf("%d\t\t%d\t\t%d\t\t  %d\t\t\t%d\n",i+1,at[i],bt[i],tat[i],wt[i]);
    }
    awt=awt/n;
    atat=atat/n;
    printf("Average Waiting time= %f\n",awt);
    printf("Average Turn Around time= %f",atat);
    getch();
	}

