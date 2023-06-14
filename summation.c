#include<stdio.h>
int main()
{
  int i,sum=0;
  while(i<=1000)
  {
    if(i%5==0)
    {
        sum+=i;
    };

    i++;
  }

    printf("%d",sum);


}