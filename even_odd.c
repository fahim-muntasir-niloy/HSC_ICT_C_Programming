#include<stdio.h>
int main(){
int i, sum=0, n;
scanf("%d",&n);
while(i<=n)
{
    if(i%2==0){
        sum = sum+i;
    }
    
    i++;
}
printf("%d \n",sum);

}
