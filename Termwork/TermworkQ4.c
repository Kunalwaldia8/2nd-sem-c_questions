#include<stdio.h>
#include<stdlib.h>
int search(int *p,int n){
	int k;
	printf("enter element to search: ");
	scanf("%d",&k);
	for(int i=0;i<n;i++){
		if(*(p+i)==k)
			return i;
	}
}

void cube(int *p,int n,int i){
	*(p+i)=(*(p+i))*(*(p+i))*(*(p+i));
	
}
			
int main(){
	int *p,n,index;
	printf("enter no of elements:");
	scanf("%d",&n);
	p=(int * )malloc(n*sizeof(int ));
	
	for (int i=0; i<n;i++){
		scanf("%d",p+i);
	}
	
	index=search(p,n);
	cube(p,n,index);
	for (int i=0; i<n;i++){
		printf("%d ",*(p+i));
	}
return 0;
}
