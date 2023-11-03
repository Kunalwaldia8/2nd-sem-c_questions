#include <stdio.h>

void quickSort(int arr[],int  lb, int ub){
    int  i=lb,j=ub,key=arr[i],temp;
    if(lb>=ub) return ;             //base condition :- when there is only element

    //searching right position for key element
    while(i<j){
        while(key>=arr[i] && i<j) {
            i++;
        }

        while(key<arr[j] ){
            j--;
        }

        if(i<j){           //possible position for key but not exact position so we will swap it 
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }

    arr[lb]=arr[j];
    arr[j]=key;

    quickSort(arr,lb,j-1);
    quickSort(arr,j+1,ub);
}


int main(){
    int arr[6]={2,4,1,6,5,7};
    quickSort(arr,0,5);
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}