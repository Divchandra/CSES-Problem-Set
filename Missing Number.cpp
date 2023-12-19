#include<iostream>
#include<unordered_map>
#include<set>
using namespace std;

set<int> m;
int main()
{   
    long long n,ans=0,sum=0,ret=0;
    cin>>n;
    sum=n*(n+1)/2;
    long long arr[n];
    for(int i=0;i<n-1;++i)
    {
      cin>>arr[i];
      ans+=arr[i];
    }
    ret=sum-ans;
    cout<<ret;
  }
 
     

