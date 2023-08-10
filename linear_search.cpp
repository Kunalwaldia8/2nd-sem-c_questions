#include <iostream>
using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5};
    int key,i;
    cout<<"enter key to search";
    cin>>key;
    for(i=0;i<5;i++)
    {
        if (arr[i]==key)
            cout<<"element index is "<<i;
    }

    return 0;
}