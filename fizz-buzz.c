#include<stdio.h>
int main(){
    int i=1;
while(i<=50)
{
    if(i%3==0)
    {
    printf("fizz\n");
    }
    else if(i%5==0)
    {
    printf("buzz\n");
    }
    else{
        printf("%d\n",i);
    }
    
i++;
};




}