#include <stdio.h>

void swap(int *p,int *q){
        
        *p=*p+*q;
        *q=*p-*q;
        *p=*p-*q;
}

int main(){

        int x,y;
        scanf("%d%d",&x,&y);
        swap(&x,&y);
        printf("%d%d",x,y);
        
        return 0;
        }
