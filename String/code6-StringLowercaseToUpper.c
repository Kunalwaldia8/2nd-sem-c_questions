//string lowercase to upercase

#include <stdio.h>
#include<string.h>

int main(){
    char str[100];
    int size,i=0;
    printf("enter a string:");
    gets(str);
    size=strlen(str);

    while(str[i]!='\0'){
        if (str[i]>96&&str[i]<123){
            str[i]=str[i]-32;

        }
        i++;
    }
    puts(str);
return 0;
    
}