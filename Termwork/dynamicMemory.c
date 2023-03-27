#include<stdio.h>
#include<stdlib.h>

void EvenOdd(int *p,int n){
	int ceven=0,codd=0;
	for(int i=0;i<n;i++){
		if(*(p+i)%2==0){
			ceven++;
			}
		else 
			codd++;			
	}
	printf("even numbers: %d\n",ceven);
	printf("odd numbers: %d\n",codd);	
}


void positiveNegative(int *p,int n){
	int cp=0,cn=0;
	for(int i=0;i<n;i++){
		if(*(p+i)>0){
			cp++;
			}
		else if(*(p+i)<0)
			cn++;			
	}
	printf("\npostive numbers: %d\n",cp);
	printf("negative  numbers: %d\n",cn);	
}
void reverse(int *p,int n){
	int temp;
	for(int i=0;i<n/2;i++){
		temp=*(p+i);
		*(p+i)=*(p+n-1-i);
		*(p+n-1-i)=temp;
	}
	printf("reversed array is :\n");
	for (int i=0; i<n;i++){
		printf("%d ",*(p+i));
	}
}

void sort(int *p,int n){
	int temp;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if (*(p+i)>*(p+j)){
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	printf("sorted  array is :\n");
	for (int i=0; i<n;i++){
		printf("%d ",*(p+i));
	}
}

	
int main(){
	int *p,n;
	printf("enter no of elements:");
	scanf("%d",&n);
	p=(int * )malloc(n*sizeof(int ));
	
	for (int i=0; i<n;i++){
		scanf("%d",p+i);
	}
	EvenOdd(p,n);
	positiveNegative(p,n);
	reverse(p,n);
	sort(p,n);
	return 0;
}
	
	
