#include<iostream>

using namespace std;
int  weirdnumbers(long long  n)
{
    while(n!=1 )
    {
     cout<<n<<" ";
    if(n%2==0)
    {
        n=n/2;
    }
    else 
    {
        n=n*3+1;

    }
    }
    cout<<n;
    return 0;
}
int main()
{  long long int n;
    cin>>n;
    weirdnumbers(n);

}

