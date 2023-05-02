#include <stdio.h>

struct employee {
	
	char name[100];
	int sales;	
};

int main(){
	struct employee E[3];
	int total=0;
	float avgsale;
	for(int i=0;i<3;i++){
		printf("enter name:");
		gets(E[i].name);
		printf("enter sales:");
		scanf("%d",&E[i].sales);
		getchar();
	}
	for(int i=0;i<3;i++){
	 total+=E[i].sales;	
	}
	avgsale=total/(float)3;
	
	printf("total sales is :- %d",total);
	printf("average sales is :- %f",avgsale);
	
	return 0;
}
	
	
	

