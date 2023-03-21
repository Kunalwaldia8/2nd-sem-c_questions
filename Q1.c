#include <stdio.h>

int main(){
        int arr[20],n,*p,min;
        
        printf("enter number of elements in arr:");
        scanf("%d",&n);
        p=arr;
        for(int i =0 ; i<n; i++){
                scanf("%d",p+i);
               }
        
        min=arr[0];
        
        for (int i=0;i<n;i++){
                if (min>*(p+i)){
                        min=*(p+i);
                }
                
             }
             
        printf("smallest element is %d",min);
        
        return 0;
        
       }
        
        
