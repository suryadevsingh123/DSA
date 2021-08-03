//find the feak element which is greater than its right and left array
#include<bits/stdc++.h>
using namespace std;
void maj(int arr[],int n)
{
    vector<int>v;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
        {
            v.push_back(arr[i]);
        }
        
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    maj(arr,n);
}