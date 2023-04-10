#include<stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    int N=X/1000;
    // printf("%d\n",N);
    if(N%2==0){
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
    return 0;
}