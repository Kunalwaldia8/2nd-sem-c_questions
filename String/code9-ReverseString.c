//reverse string.

#include <stdio.h>
#include<string.h>

int main(){
    char  str[10],temp;
    int size;
    printf("enter a string :");
    gets(str);
    size=strlen(str);

    
    for (int i=0,j=size-1;i<size/2;i++,j--){
                temp=str[j];
                str[j]=str[i];
                str[i]=temp;
    }

    puts(str);
    return 0;
}