#include <stdio.h>
void sumOfElements(int *p,int *q,int *r){
	for (int i=0;i<5;i++){
		*(r+i)=*(p+i)+*(q+i);
		
	}	
}
	
int main(){
	int *p,*q,res[5],arr1[5]={1,2,3,4,5},arr2[5]={6,7,8,9,10};
	sumOfElements(arr1,arr2,res);
	
	for (int i=0;i<5;i++){
		printf("%d\n",res[i]);
	}
	
	return 0;
}
	
		
	
	
