#include<stdio.h>
#include<conio.h>
void main()
{
    int wt,j,c[10],p[10],i,tt,n,t1,t2,t3,a[10],ch;
    float awt=0.0,avg=0.0,s,t;
    printf("\t\tSHORTEST JOB FIRST\n\n");
    printf("\nEnter the number of processes:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n ENTER THE BURST TIME OF PROCESS%d:",i);
        scanf("%d",&c[i]);
        a[i]=c[i];
    }
    for(i=1;i<=n;i++)
    for(j=i+1;j<=n;j++)
    if(c[i]>c[j])
    {
        t1=c[i];
        c[i]=c[j];
        c[j]=t1;
    }
    i=1;j=1;c[0];
    while(i<=n)
    {
        if(c[i]==a[j]&&ch!=j)
        {
            p[i]=j;
            ch=j;
            i++;
            j=0;
        }
        j++;
    }
    wt=0;c[0]=0;tt=0;
    printf("\n\nPROCESS\tBURST TIME\tWAITING TIME\tTURN AROUND                TIME\n");
    for(i=0;i<=n-1;i++)
    {
        wt=wt+c[i];
        tt=tt+c[i+1];
        printf("\n\nP%d\t\t%d\t\t%d\t\t%d\n",p[i+1],c[i+1],wt,tt);
        awt=awt+wt;
        avg=avg+tt;
    }
    s=awt/n;
    t=avg/n;
    printf("\n\nTHE AVERAGE WAITING TIME:%f ms",s);
    printf("\n\nTHE AVERAGE TURN AROUND TIME:%f ms\n\n",t);
    printf("\n\n\t\tGANTT CHART \n\n");
    printf("\n------------------------------------\n");
    wt=0;
    for(i=1;i<=n;i++)
    printf("\tP%d\t",p[i]);
    printf("\n------------------------------------\n");
    printf("0\t");
    for(i=1;i<=n;i++)
    {
        wt=wt+c[i];
        printf("%d\t\t",wt); }}
