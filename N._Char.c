#include <stdio.h>
int main()
{ 
    char ch;
    scanf("%c",&ch);
    int A = ch; //taking ASCII Value from the corresponding character
    // printf("%d\n",A); //Checking
    // if('A'<=A && A<='Z')//The condition should also work if we write this way.
    if(65<=A && A<=90){
        int B = A + 32;
        // printf("%d\n",B); //Checking
        printf("%c\n",B);
    }
    // else if(97<=A && A<=122){
    //     int B = A - 32;
    //     printf("%d\n",B); //Checking
    //     printf("%c\n",B);
    // }
    else{
        int B = A - 32;
        // printf("%d\n",B); //Checking
        printf("%c\n",B);
    }
    return 0;
}