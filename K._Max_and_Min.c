#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d %d %d",&A, &B, &C);
    //checking maximum
    if(A<=B && A<=C){
        printf("%d ",A);
    }
    else if(B<=A && B<=C){
        printf("%d ",B);
    }
    else{
        printf("%d ",C);
    }
    //checking minimum
    if(A>=B && A>=C){
        printf("%d",A);
    }
    else if(B>=A && B>=C){
        printf("%d",B);
    }
    else{
        printf("%d",C);
    }
    return 0;
}
   