#include <stdio.h>
void sort (int *p,int n){
	int temp;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (*(p+i)<*(p+j)){
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
}
	
	
int main(){
	int arr[5]={3,4,2,1,5},n=5,*p;
	
	sort(arr,n);
	p=arr;
	for(int i=0;i<n;i++){
		printf("%d",*(p+i));
	}
	
	return 0;
}
	
	
