#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sq;
    cin>>n;
    sq=sqrt(n);
    if(sq*sq==n)
        {cout<<sq*4;return 0;}
    else
    {
        sq+=1;
        if(sq*sq-n<sq)
            cout<<sq*4;
        else
            cout<<sq*4-2;
    }
}
