#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age: "<<"\n";
    cin>>age;
    if (age>=18) {
        cout<<"you can vote"<<"\n";
    } else {
        cout<<"grow up kid"<<"\n";
    }
    return 0;
}
