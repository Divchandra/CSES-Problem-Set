#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int cnt=0,ans=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
            cnt++;
        }
        ans=max(cnt,ans);
        if(s[i]!=s[i+1])
        {
            cnt=0;
        }

    }
    cout<<ans+1;
}