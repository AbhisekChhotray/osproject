#include<stdio.h>
#include<conio.h>
int main()
{
	int n,at[100],bt[100],wt[100],tat[100],rt[100];
	int i,j,temp[100],temp1;
	float aw=0,ata=0;
	printf("Enter the total number of processes :");
	scanf("%d",&n);
	printf("Enter Arrival time of processes:");
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&at[i]);
		bt[i]=2*at[i];
        
    }
   
     for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
	 {
	 	if(bt[i]>bt[j])
	 	{                     
	 		temp1=bt[i];
	 		bt[i]=bt[j];
	 		bt[j]=temp1;
		 }
	 }	
	}
	
    temp[0]=0;
   printf("P_Id\t Arrival time\t Burst Time\t Turn Around Time\t Waiting Time\t    Response Time\n");
    
    for(i=0;i<n;i++)
    {
    	wt[i]=0;
    	tat[i]=0;
    	temp[i+1]=temp[i]+bt[i];
    	wt[i]=temp[i]-at[i];
        tat[i]=wt[i]+bt[i];
        rt[i]=wt[i];
        aw+=wt[i];
        ata+=tat[i];
        printf("P%d\t\t%d\t\t%d\t\t  %d\t\t\t%d\t\t %d\n",i+1,at[i],bt[i],tat[i],wt[i],rt[i]);
    }
    aw=aw/n;
    ata=ata/n;
    printf("Average Waiting time= %f\n",aw);
    printf("Average Turn Around time= %f",ata);
    getch();
	}

