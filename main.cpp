#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter the students marks: "<<"\n";
    cin>>marks;
    if (marks>=90) {
        cout<<"A"<<"\n";
    } else if (marks>=70){
        cout<<"B"<<"\n";
    } else if (marks>=50){
        cout<<"c"<<"\n";
    } else {
        cout<<"well whatever your grade is it's insignificant\n";
    }
    return 0;
}
