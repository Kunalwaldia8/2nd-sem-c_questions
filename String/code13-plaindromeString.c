//Palindrome or not

#include<stdio.h>
int main(){
    char str[100];
    int i,flag=1;
    printf("enter a string:");
    scanf("%s",str);
    for( i=0;str[i];i++){

    }
    for (int j =0 ; j<i; j++){
        if (str[j]!=str[i-1-j]){
            flag=0;
            break;
        }

    }
    if (flag)
        printf(" PALINDROME");
    else    
        printf("NOT PALINDROME");
    
    
}
