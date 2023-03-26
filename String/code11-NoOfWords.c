#include <stdio.h>
#include <string.h>

int NoOfWords(char [],int);

int main(){
    char str[100];
    int size,wct;
    printf("enter a string :");
    gets(str);
    size=strlen(str);
    wct=NoOfWords(str,size);
    printf("words :%d\n",wct);
    return 0;
}

int NoOfWords(char str[],int size){
        int word=1,i;
        if (str[0]==' ')
            word=0;
        
        i=0;
        while(str[i]!='\0'){
            if (str[i]==' '&& str[i+1]!=' '){
                word++;
            }
            i++;
        }

        if (str[size-1]==' ')
            word--;

    return word;
}




