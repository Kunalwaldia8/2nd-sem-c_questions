/*Q5. Write a code to input a string and replace the character that occur minimum
number of times with the character that occurs maximum number of times. (no
two characters have same occurrence)
Sample input: aabcabcbaccaac
Output: bbacbacabccbbc
*/

#include<stdio.h>

#include<limits.h>

int main(){
    char str[200],maxchar,minchar;
    int freq[256]={0},max=0,min=INT_MAX;
    
    printf("enter a string :");
    gets(str);

    for (int i=0 ; str[i]!=0;i++){
        freq[str[i]]++;
    }

    
    for(int i=0;i<256;i++){
        
            if (freq[i]!=0){
                if (freq[i]>=max){

                    max=freq[i];
                    maxchar=i;
                }
                if(freq[i]<min){

                    min=freq[i];
                    minchar=i;
                }
            }

    }

    printf("  %c  ",minchar);
    
    for(int i=0 ;str[i]!='\0';i++){
        if (str[i]==minchar)
            str[i]=maxchar;
        else if(str[i]==maxchar){
            str[i]=minchar;
        }
    }
    puts(str);


return 0;
    
    
}