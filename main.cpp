#include <iostream>
using namespace std;
int main()
{
    int n;
    bool isprime=true;
    cout<<"enter the number = "<<"\n";
    cin>>n;
    for (int i=2;i<=n-1;i++) {
    if (n%i==0) {
        isprime=false;
        break;
    }
}
    if(isprime==false){
        cout<<"This is a non prime number"<<"\n";
    } else {
    cout<<"This is a prime number"<<"\n";
    }
    return 0;
}
//2147483647 - largest know prime number
