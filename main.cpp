#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    bool div_3=false;
    cout<<"enter the number to which you want the sum for: "<<"\n";
    cin>>n;
    for (int i=1;i<=n;i++) {
        if (i%3==0) {
            sum+=i;

        }


    }
    cout<<"sum: "<<sum;
    return 0;
}
//2147483647 - largest know prime number
