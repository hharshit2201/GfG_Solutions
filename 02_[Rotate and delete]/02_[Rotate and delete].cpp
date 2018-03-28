#include<bits/stdc++.h>
using namespace std;

class array
{
private:
    long long int n;         //size of Array
    long long int i;
    long long int j;
    long long int k;
    long long int a[100];
public:
    array()
    {
            //CONSTRUCTOR
    }
    ~array()
    {
            //DESTRUCTOR
    }
    void rotation(long long int[], int );
    void delete_nth(long long int [], int, int );
    void delete_first(long long int [], int );
};


void array::rotation(long long int a[],int k)
{
    int temp=a[k-1];
    for(i=k-2;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0]=temp;
}

void array::delete_nth(long long int a[],int n,int k)
{
    for(i=k-n;i<k-1;i++)
    {
        a[i]=a[i+1];
    }

}
void array::delete_first(long long int a[],int k)
{
    for(i=1;i<k;i++)
    {
        a[i-1]=a[i];
    }
}

int main()
{
    int t;
    cin>>t;//no of test cases
    while(t--)
    {
        long long int i,k,n,a[100];
        cin>>n;//no of elements
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        array b; //object
        int x=n;
        long long int j=1;
        for(k=1;k<x;k++)
        {
            b.rotation(a,n);
            /*for(i=0;i<n;i++)
                {
                    cout<<a[i]<<" ";
                }
                cout<<endl;
                */
            if(j==1)
            {
                n=n-1;
                j++;
                /*for(i=0;i<n;i++)
                {
                    cout<<a[i]<<" ";
                }
                cout<<endl;
                */
            }

            else if(j<=n)
            {
                b.delete_nth(a,j,n);
                n=n-1;
                j++;
                /*for(i=0;i<n;i++)
                {
                    cout<<a[i]<<" ";
                }
                cout<<endl;
                */
            }
            else if(j>n)
            {
                b.delete_first(a,n);
                n=n-1;
                /*for(i=0;i<n;i++)
                {
                    cout<<a[i]<<" ";
                }
                cout<<endl;
                */
            }
            //cout<<endl<<endl;
        }
        cout<<a[0]<<endl;
    }
    return 0;
}
