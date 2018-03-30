#include<bits/stdc++.h>
using namespace std;

int findpivot(int a[],int low,int high)
{
    int mid;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if((a[mid]>a[mid+1]) && (a[mid]>a[mid-1]))
            return mid;
        else if(a[mid]>a[mid-1] && a[mid]<a[mid+1])
            low=mid+1;
        else if(a[mid]<a[mid-1] && a[mid]>a[mid+1])
            high=mid-1;
    }
}

int b_search_inc(int a[],int low, int high,int tbs)
{
    int mid;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        //cout<<"a[mid]->"<<a[mid]<<" "<<"a[pivot]->"<<a[pivot]<<endl<<endl;
        if(a[mid]==tbs)
            return mid;
        else if(a[mid]<tbs)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int b_search_dec(int a[],int low, int high,int tbs)
{
    int mid;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        //cout<<"a[mid]->"<<a[mid]<<" "<<"a[pivot]->"<<a[pivot]<<endl<<endl;
        if(a[mid]==tbs)
            return mid;
        else if(a[mid]>tbs)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,inc,dec;
        cin>>n>>x;
        int a[2000];
        int i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int pivot=findpivot(a,0,n-1);
        //cout<<"pivot->"<<a[pivot]<<endl;
        if(a[pivot]<x)
        {
            cout<<"OOPS! NOT FOUND"<<endl;
        }
        else if(a[pivot]==x)
        {
            cout<<pivot<<endl;
        }
        else
        {
            inc=b_search_inc(a,0,pivot-1,x);
            if(inc==-1)
            {
                dec=b_search_dec(a,pivot+1,n-1,x);
                if(dec==-1)
                {
                    cout<<"OOPS! NOT FOUND"<<endl;
                }
                else
                {
                    cout<<dec<<endl;
                }
            }
            else
            {
                cout<<inc<<endl;
            }
        }
    }
    return 0;
}
