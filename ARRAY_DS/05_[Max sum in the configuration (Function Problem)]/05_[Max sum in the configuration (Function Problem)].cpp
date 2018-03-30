/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*You are required to complete this method*/
int max_sum(int a[],int n)
{
//Your code here
int i=0;
int max=0;
while(i<n)
{
    int sum=0;
    int temp=a[0];
    for(int j=1;j<n;j++)
    {
        a[j-1]=a[j];
    }
    a[n-1]=temp;
    for(int j=0;j<n;j++)
    {
        sum+=j*a[j];
    }
    if(sum>max)
    {
        max=sum;
    }

    i++;
}
return max;
}
