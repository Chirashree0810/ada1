#include<stdio.h>
#include<time.h>
void main()
{
int i,j,k,t,n;
printf("enter the no of elements:");
scanf("%d",&n);
int a[n];
srand(time(NULL));
for(i=1;i<=n;i++)
{
a[i]=rand()%25000;
}
clock_t start=clock();
for(i=1;i<=n;i++)
{
j=i;
for(k=i+1;k<=n;k++)
if(a[k]<a[j])
j=k;
t=a[i];
a[i]=a[j];
a[j]=t;
}
clock_t end=clock();
double time_taken=((double)(end-start))/CLOCKS_PER_SEC;
printf("the time taken for sorting %d elements is %lf sec",n,time_taken);
