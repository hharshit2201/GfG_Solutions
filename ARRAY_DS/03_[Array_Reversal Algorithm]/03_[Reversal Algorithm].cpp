    #include<bits/stdc++.h>
    using namespace std;

    class array1
    {
    private:
        int n;         //size of Array

        int i;
        int j;
        int a[100];
    public:

        array1()
        {
            //cout<<"CONSTRUCTOR INVOKED"<<endl;
        }
        ~array1()
        {
            //cout<<"DESTRUCTOR INVOKED"<<endl;
        }
        int findpivot(int [],int);
        int b_search(int [],int, int);
    };


    int array1::findpivot(int a[], int n)
    {
        int mid,low,high;
        if(a[0]<=a[n-1])
            return 0;
        //
        //cout<<"working"<<endl;
        low=0;
        high=n-1;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(a[mid]>a[mid+1])
                return mid+1;
            else if(a[mid]>a[low])
                low=mid+1;
            else
                high=mid-1;
        }
    }
    int array1::b_search(int a[], int n,int tbs)
    {
        int mid,low,high;
        low=0;
        high=n-1;
        int pivot=findpivot(a,n);
        // cout<<"pivot->"<<a[pivot]<<endl;
        if(a[pivot]==tbs)
            return pivot;
        else if(a[0]>tbs)
            low=pivot+1;
        else
            high=pivot-1;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            //cout<<"a[mid]->"<<a[mid]<<" "<<"a[pivot]->"<<a[pivot]<<endl<<endl;
            if(a[mid]==tbs)
                return mid;
            else if(a[mid]>tbs)
                high=mid-1;
            else
                low=mid+1;
        }
        return -1;
    }

    int main()
    {
        int t;
        cin>>t;  //no of test cases
        while(t--)
        {
            int i,a[200];
            int n;  //number of elements of array
            int tbs;  //element to be searched for
            cin>>n>>tbs;
            for(i=0;i<n;i++)
            {
                cin>>a[i];
            }
            array1 b; //object
            int r=b.b_search(a,n,tbs);
            if(r==-1)
            {
                cout<<"OOPS! NOT FOUND"<<endl;
            }
            else
                cout<<r<<endl;
        }
        return 0;
    }
