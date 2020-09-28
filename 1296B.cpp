#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,x;
    cin>>n;
    while(n--)
    {
        cin>>x;if(x%9==0)
        cout<<x+x/9-1<<endl;
        else cout<<x+x/9<<endl;
    }
}
