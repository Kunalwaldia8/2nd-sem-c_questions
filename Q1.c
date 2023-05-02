#include <stdio.h>

struct book {
	char book_name[100];
	char author_name[100];
	int price;
};

struct student {
	char name[100];
	int rollno;
	char sec;
};

int main(){
	struct book b[2];
	printf("enter book details:\n");
	for(int i =0;i<2;i++){
		puts("enter book name");
		gets(b[i].book_name);
		puts("enter author ");
		gets(b[i].author_name);
		puts("enter price");
		scanf("%d",&b[i].price);
		getchar();
	}
	struct student s[2];
	printf("enter student  details:\n");
	for(int i =0;i<2;i++){
		puts("enter  name");
		gets(s[i].name);
		puts("enter section");
		scanf("%c",&s[i].sec);
		puts("enter roll no");
		scanf("%d",&s[i].rollno);
		getchar();
	}
	
	printf("displaying the data:-\n");
	puts("\nbook details are:-\n");
	for(int i =0;i<2;i++){
		puts(b[i].book_name);
		puts(b[i].author_name);
		printf(" %d \n",b[i].price);
		
		}
	puts("\nstudent details are:-\n");
	for(int i =0;i<2;i++){
		puts(s[i].name);
		printf(" %c ",s[i].sec);
		printf(" %d \n",s[i].rollno);
	}
	return 0;	
}
	
	
	
	
	
	
	
	
	
	
