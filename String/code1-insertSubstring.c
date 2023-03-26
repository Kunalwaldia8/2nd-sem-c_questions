/*Q6. Write a code to input a string and insert a substring at a given position.
String: abcdefghijkl
Substr: mno at position 3
Output:abmnocdefghijkl
*/
#include <stdio.h>
#include<string.h>
int main(){
    char str[100],sstr[100];
    int l1,l2,pos;
    printf("enter a string:");
    gets(str);
    printf("enter sub string:");
    gets(sstr);
    printf("enter position:");
    scanf("%d",&pos);
    l1=strlen(str);
    l2=strlen(sstr);
    for (int i=l1-1;i>=(pos-1);i--){
        str[i+l2]=str[i];
    }

    for(int i=0;sstr[i];i++){
        str[i+pos-1]=sstr[i];
    }
    puts(str);



}
