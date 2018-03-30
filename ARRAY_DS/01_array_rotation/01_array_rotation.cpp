#include<bits/stdc++.h>
using namespace std;

class array
{
private:
    int n;         //size of Array
    int d;         //Count of rotation
    int i;
    int j;
    int a[100];
public:
    void rotation(int[],int,int);
    array()
    {
        cout<<"CONSTRUCTOR INVOKED"<<endl;
    }
    ~array()
    {
        cout<<"DESTRUCTOR INVOKED"<<endl;
    }
};


void array::rotation(int a[],int n,int d)
{
    int temp[d];
    for(i=0;i<d;i++)
    {
        temp[i]=a[i];
    }
    j=0;
    for(i=d;i<n;i++)
    {
        a[j]=a[i];
        j++;
    }
    j=0;
    for(i=n-d;i<n;i++)
    {
        a[i]=temp[j];
        j++;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int i,n,d,a[100];
    cout<<"enter the number of elements of array"<<endl;
    cin>>n;
    cout<<"enter the no of rotations"<<endl;
    cin>>d;
    cout<<"enter the elements of array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    array b; //object

    b.rotation(a,n,d);
    return 0;
}
