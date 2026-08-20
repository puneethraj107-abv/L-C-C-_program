#include <iostream>
using namespace std;
int main()
{
    int no_students,marks,sum=0,average;
    cout<<"enter the number of students"<<"\n";
    cin>>no_students;
    for(int i=1;i<=no_students;i++){
        cout<<"\n\nenter the marks: ";
        cin>>marks;
        cout<<"\nSum: "<<(sum+=marks);
        cout<<"\nAverage: "<<(average=sum/i);
    }
    return 0;
}
