/* Name               : Kunal Waldia
   University Roll no : 2022035
   Section            : K
Q1. Write a C program to enter a string and print the particular character which occurred the most with its frequency.
Example
Input String: HELLLOO 
Output: L 3

*/

#include<stdio.h>

int main(){
    char str[200];
    int freq[256]={0},max=0,maxind[256],j=0;
    
    printf("enter a string :");
    gets(str);

    for ( int i=0 ; str[i]!=0;i++){
        freq[str[i]]++;
    }

    
    for( int i=0, j=0;i<256;i++){
                if (freq[i]>=max){

                    max=freq[i];
                }

    }
    for(int i=0;i<256;i++){
        if(freq[i]==max){
            maxind[j]=i;
            j++;
        }
    }


    for(int i=0;i<j;i++){

         printf(" %c %d\n",maxind[i],freq[maxind[i]]);
    }


return 0;    
}