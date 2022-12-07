#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number :";
    cin>>num;
    int fac=num;
    while (num!=1){
        
        fac=fac*(num-1);
        num--;
    }
    cout<<"factorial is "<<fac;
    return 0;
}