#include<stdio.h>
int main()
{
 int s,t,a,b,m,n,i,c1=0,c2=0,c[100000];
 unsigned long int d[100000];
 scanf("%d %d",&s,&t);
 scanf("%d %d",&a,&b);
 scanf("%d %d",&m,&n);
 for(i=0;i<m;i++)
 {
   scanf("%d",&c[i]);
 }
 for(i=0;i<n;i++)
 {
   scanf("%lu",&d[i]);
 }
   
  for(i=0;i<m;i++)
  {
    c[i]=c[i]+a;
    if(c[i]>=s&&c[i]<=t)
    {
      c1=c1+1;
    }
  }
  for(i=0;i<n;i++)
  {
    d[i]=d[i]+b;
    if(d[i]>=s&&d[i]<=t)
    {
      c2=c2+1;
    }
  }
  printf("%d\n%d",c1,c2);
 return 0;
}