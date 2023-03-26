/* Name               : Kunal Waldia
   University Roll no : 2022035
   Section            : K
Q2. Write a C program that takes your full name (First, middle and last) as input and displays the abbreviations of the first and middle names except the last name which is displayed as it is.
For example: if your name is Aman Singh Rawat, then the output should be A.S.Rawat.

*/
#include <stdio.h>
#include<string.h>

int main(){
	char res[20],str[20];
	int i,word=0,l,j=0;

    printf("enter your full name: ");
    gets(str);
    l=strlen(str);
	
	if (str[0]!=' '){

		word=1;
		// printf("%c",str[0]);
        res[j]=str[0];
        j++;
        res[j]='.';
        j++;
    }
		 
	
	for( i=0;str[i]!='\0';i++){
		if(str[i]==' '&&str[i+1]!=' '){
			word++;
			if (word>2)
				break;
	
		    res[j]=str[i+1];
            j++;
            res[j]='.';
            j++	;		
		}
	}
		
	for(int k=i+1;k<l;k++){
        res[j]=str[k];
        j++;
	}
	
    puts(res);
return 0;
}