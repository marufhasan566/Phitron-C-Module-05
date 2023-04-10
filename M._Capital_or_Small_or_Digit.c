#include<stdio.h>
int main()
{
    int X;
    scanf("%c",&X);
    int N = X;
    if(N>=48 && N<=57){    
        printf("IS DIGIT");
    }
    else if(N>=65 && N<=90){
        printf("ALPHA\nIS CAPITAL");
    }
    else if(N>=97 && N<=122){
        printf("ALPHA\nIS SMALL");
    }
    return 0;
}