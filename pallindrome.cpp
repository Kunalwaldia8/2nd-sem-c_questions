#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num,a,Ldigit;
    cout<<"enter a number:";
    cin>>num;
    a=num;
    int rev=0,i=2;
    while (i>=0){
        Ldigit=num%10;
        rev=rev+Ldigit*(pow(10,i));
        num/=10;
        i--;
        }
    if (rev==a){
        cout<<"number is a pallindrome\n";
    }
    else{
        cout<<"number is not a pallindrome\n";
    }
    return 0;
}