#include <iostream>
using namespace std;

int main()
{
    unsigned int a ;
    cout<<"Square size: ";
    cin>>a;
    for(int i=0;i<a;i++) 
    {
        for(int i=0;i<a;i++) cout<<"* ";
        cout<<endl;
    }
    return 0;
}

