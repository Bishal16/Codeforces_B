#include <iostream>

using namespace std;

int main()
{
    int n,m,p=1,x;
    long long int r=0;
    cin>>n>>m;
    while(m--)
    {
        cin>>x;
        r=r+(n+x-p)%n;
        p=x;
    }
    cout<<r;
}






