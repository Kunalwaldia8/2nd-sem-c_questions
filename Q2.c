#include <stdio.h>

int main(){

          int arr[20],n,*p,min;
        
        printf("enter number of elements in arr:");
        scanf("%d",&n);
        p=arr;
        for(int i =0 ; i<n; i++){
                scanf("%d",p++);
               }
        
        for (int i=0; i<n; i++){
                printf("%d",*(--p));
                }
         
         return 0;
         
         }                                                                    
