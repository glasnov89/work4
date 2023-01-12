#include <stdio.h>



int main() {
    double average=0 ,n=0,total;
    int numbers[] = {10,20,5,6,78,101};
    for (int i=0;i<6;i++)
    {
     printf("\n%d",numbers[i]);
      average=numbers[i]+average;
       n++;  
    
       
      }
      double sum =average/n;
    printf("\nSrednta stojnost e: %.2lf",sum);
    total=sum*6;
         printf("\nTotal sum e:%.2lf",total);
            
         
    return 0;
}