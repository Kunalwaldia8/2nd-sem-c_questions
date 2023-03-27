/* Name               : Kunal Waldia
   University Roll no : 2022035
   Section            : K
Q4. Write a C program using dynamic memory allocation to insert elements in an array and perform the following operation.
    • Searching of an element.
    • Replace the searched elements with its cube and print the array
NOTE: make 2 different user defined function to perform the operation.

*/
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
	printf("element not found");
	return -1;
}

void cube(int *p,int n,int i){
	if(i!=-1)
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
