#include<stdio.h>
int main()
{
int n,flag=0,max=0,var;
scanf("%d",&n);
int a[n];
int freq[n];
for(int i=0;i<n;i++)
{
scanf("%d ",&a[i]);
}
for(int i=0;i<n;i++)
{
freq[i]=0;
}
for(int i=0;i<n;i++)
{
freq[a[i]]++;
}
 for(int i=0;i<n;i++)
 {
   if(freq[i]>max)
   {
     max=freq[i];
     var=i;
   }
   
 }
  printf("%d",var);

}
