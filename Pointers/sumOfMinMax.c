
#include <stdio.h>
int sum(int *p,int n){
	int min,max;
        min=*p;
        max=*p;
	 for (int i=0;i<n;i++){
                if (min>*(p+i)){
                        min=*(p+i);
                }
                if (max<*(p+i)){
                        max=*(p+i);
                }
             }
          return min+max;
          }
         

int main(){
        int arr[20],n,*p,min;
        
        printf("enter number of elements in arr:");
        scanf("%d",&n);
        p=arr;
        for(int i =0 ; i<n; i++){
                scanf("%d",p+i);
               }
        
        printf("sum is%d",sum(arr,n));
        
        return 0;
        
       }
