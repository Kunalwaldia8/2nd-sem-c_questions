#include <stdio.h>
#include<string.h>
int main(){
    int temp;
    char str[50];
    printf("enter a string:");
    gets(str);

       for (int i=0 ; i<strlen(str)-1;i++){
        for (int j=0;j+1<strlen(str)-i;j++){

        if (str[j]>str[j+1])
            temp=str[j];
            str[j]=str[j+1];
            str[j+1]=temp;
        }

    }

    puts(str);


    return 0;
}