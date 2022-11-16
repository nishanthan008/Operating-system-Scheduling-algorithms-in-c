#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,a[20],b[20],c[20],r=0,tt=0,wt=0;
    float awt,att;
    printf("\nFIRST COME FIRST SERVE SCHEDULING\n ");
    printf("\nEnter the number of processes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n ENTER THE BURST TIME OF PROCESS%d:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=tt;
        tt=tt+a[i];
        b[i]=tt;
    }
  printf("\n\nPROCESS\tBURST TIME\tWAITING TIME\tTURN AROUND TIME\n");
    for(i=0;i<n;i++)
    printf("\n\nP%d\t\t%d\t\t%d\t\t%d",i+1,a[i],c[i],b[i]);
    for(i=0;i<n;i++)
    tt=tt+b[i];
    for(i=0;i<n;i++)
    wt=wt+c[i];
    awt=wt/n;
    printf("\n\nTHE AVERAGE WAITING TIME:%f ms",awt);
    att=tt/n;
    printf("\n\nTHE AVERAGE TURN AROUND TIME:%f ms\n\n",att);
    printf("\n\t\tGANTT CHART \n\n");
    for(i=0;i<n;i++)
    printf("\tP%d",i+1);
    printf("\n------------------------------------\n");
    printf("0");
    for(i=0;i<n;i++)
    printf("\t %d",b[i]);  printf("\n------------------------------------\n");}
