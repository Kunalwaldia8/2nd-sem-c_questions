#include <iostream>
using namespace std;

int main()
{
    int flag=1,num,i;
    cout<<"enter a number:";
    cin>>num;

    for(i=2;i<num;i++){
        if (num%i==0){

            flag=0;
            break;
        }
    }
    if (flag)
        cout<<"number is prime";
    else 
        cout<<"number is not prime";

return 0;   
}