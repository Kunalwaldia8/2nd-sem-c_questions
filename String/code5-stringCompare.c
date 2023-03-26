#include <stdio.h>
#include <string.h>

int strcmpr(char str1[],char str2[]){
    for(int i=0;i,str1[i];i++){
            if (str1[i]-str2[i]!=0){
                return 0;
            }
    }
    return 1;
    }
int main(){

        char str1[20],str2[20];
        int res;
        printf("enter string 1: ");
        gets(str1);
        printf("enter string 2: ");
        gets(str2);
        res=strcmpr(str1,str2);
        if (res)
            printf("SAME STRINGS");
        else
            printf("DIFFERENT STRINGS");

        return 0;
}

