#include <iostream>

using namespace std;

int main()
{
    int t=0;
    cin>>t;
    int arr[t];
    int x=0,y=0;
    for(int i=0;i<t;i++)
       {
           cin>>x>>y;
           arr[i]=x+y;
       }
    for(int i=0;i<t;i++)
        cout<<arr[i]<<endl;
    return 0;
}
