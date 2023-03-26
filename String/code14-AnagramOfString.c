/* 2. WAP TO CHECK IF 2 STRINGS ARE ANAGRAM. */

#include<stdio.h>
#include<string.h>

int  ChkAnagram(char str1[],char str2[]){
    char temp;
    if (strlen(str1)!=strlen(str2))
        return 0;
    for (int i=0;i<strlen(str1);i++)
		{
			for (int j=i+1;j<strlen(str1);j++){
				if(str1[i]>str1[j])
				{
					temp=str1[i];
					str1[i]=str1[j];
					str1[j]=temp;			
				}
				if(str2[i]>str2[j])
				{
					temp=str2[i];
					str2[i]=str2[j];
					str2[j]=temp;			
				}
			}
		}

        for(int i=0;i<strlen(str1);i++){
			if(str1[i]!=str2[i])
				return 0;
		}
        return 1;
    
    
}
void main()
{
	char str1[50],str2[50];
	printf("Enter 1st string : ");
	gets(str1);
	printf("Enter 2nd string : ");
	gets(str2);
    // printf("%d",ChkAnagram(str1,str2));
	if (ChkAnagram(str1,str2))
        printf("Anagram");
	else
		printf("Not Anagram");
}