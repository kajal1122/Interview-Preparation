#include<iostream>
using namespace std;
bool isSorted(int arr[] , int n)
{
    if(n == 0 || n == 1)
    {
        return true;
    }
    else
    {
        if(arr[n-1] >= arr[n-2])
        {
            isSorted(arr,n-1);
        }
        else
        {
           return false;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    bool res = isSorted(arr,n);
    if (res == true)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

    return 0;
}
