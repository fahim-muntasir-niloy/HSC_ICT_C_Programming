#include<stdio.h>
int main()
{
    int neon[5];
    int i=0;

    while(i<5){
        scanf("%d",&neon[i]);
        ++i;
    };

    while(i<5){
         printf("Our array elements are : %d", neon[i]);
         ++i;
    };
   
}