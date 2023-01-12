#include <stdio.h>
int main() {
int count;
double array[10],sum=0;
for(int i=0;i<10;i++)
{
scanf("%lf",&array[i]);
sum=sum+array[i];
if (array[i]>5 && array[i]<10)
{
   count++;
    
}
}
printf("\Chislata ot masiv sa:\n");
for(int i=0;i<10;i++)
{

    printf("%.2lf",array[i]);
}
    printf("\n Total sum e:%.2lf",sum);
    printf("\n\n Numbers 5 and 10 sa:%d",count);
    return 0;
}