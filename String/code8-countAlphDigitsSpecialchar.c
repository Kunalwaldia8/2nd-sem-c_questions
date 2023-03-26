//count alphabets ,digits, and special characters.

#include <stdio.h>
#include<string.h>

int main(){
    char str[100];
    int size,i=0,count[3]={0};
    printf("enter a string:");
    gets(str);
    size=strlen(str);

    while(str[i]!='\0'){
        if (str[i]>64&&str[i]<92||(str[i]>96&&str[i]<123)){
            count[0]++;
        }
        else if (str[i]>'0'&&str[i]<='9'){

            count[1]++;
        }
        else if(str[i]>=32&&str[i]<=47||(str[i]>57&&str[i]<65||str[i]>=91&&str[i]<=96||(str[i]>=123&&str[i]<=126))){
            count[2]++;
        }
        
        i++;
    }
    printf("no of alphabets are : %d\n",count[0]);
    printf("no of digits are : %d\n",count[1]);
    printf("no of special characters are : %d\n",count[2]);
return 0;
    
}