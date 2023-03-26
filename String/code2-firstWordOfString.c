/*Q3. Draw flowchart to print first alphabet of each word in a sentence.
Input: This is a wonderful evening.
Output: Tiawe
*/
#include <stdio.h>


int main(){
    char str[100],fstr[100];
    int i=0,j=0;
    printf("enter a string :");
    gets(str);
    
    
     
        if (str[0]!=' ')
            fstr[0]=str[0];
            j++;

    while(str[i]!='\0'){
            if (str[i]==' '&& str[i+1]!=' '){
                fstr[j]=str[i+1];
                j++;
            }
            i++;
    }
    puts(fstr);
    return 0;
}




