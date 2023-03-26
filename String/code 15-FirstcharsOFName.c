#include <stdio.h>
#include<string.h>

int main(){
	char res[20],str[20]="Aman Singh rawat";
	int i,l=strlen(str),word=0;
	
	if (str[0]!=' ')
		word=1;
		printf("%c",str[0]);
		 
	
	for( i=0;str[i]!='\0';i++){
		if(str[i]==' '&&str[i+1]!=' '){
			word++;
			if (word>2)
				break;
			printf("%c",str[i+1]);
							
		}
	}
		
	for(int j=i+1;j<l;j++){
		printf("%c",str[j]);
	}
	
return 0;
}
			
			
					
	
	
