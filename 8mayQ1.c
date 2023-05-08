#include <stdio.h>

void print_name(struct student *p,int n){
	for(int i=0;i<n;i++){
		if((p+i)->age==14)
			printf("%s",(p+i)->name);

	}

}

struct student {
	char name[100];
	int age;
	int roll_no;
	char address[100];
	};
	
int main(){
	int n ;
	puts("enter no of students :");
	scanf("%d",&n);
	getchar();
	struct student *p= (struct student *) malloc(n*sizeof(struct student ));
	for (int i=0;i<n;i++){
	
	
		puts("enter name of student:");
		gets((p+i)->name);
		
		printf("enter rollno. :\n");
		scanf("%d",&(p+i)->roll_no);
		getchar();
		printf("enter age :");
		scanf("%d",&(p+i)->age);
		getchar();
		printf("enter address:");
		gets((p+i)->address);

	}
	
	print_name(p,n);
	
	return 0;
}
