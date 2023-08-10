#include <iostream>
using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8};
    int mid,key,size=8,start=0,end=size-1;
    cout<<"enter key to search:";
    cin>>key;
    while(start<=end)
    {
        mid=start+(end-start)/2;

        if(arr[mid]==key)
        {
            cout<<"element is at index "<<mid;
            break;
        }
        else if(arr[mid]<key)
            start=mid+1;
        else if (arr[mid]>key)
            end = mid-1;


    }
    if (start>end)
        cout<<"element not found";
    return 0;
}