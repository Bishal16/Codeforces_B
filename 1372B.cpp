#include<bits/stdc++.h>
#include<string.h>
#include <numeric>
//#include <boost/circular_buffer.hpp>
using namespace std;

int main()
{

    long long int t,n,ans,ans1,l,m,ll,mm,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        l=n/2;
        if(n%2!=0)
            m=n/2+1;
        else
            m=n/2;
        ans=1000000000;
        for(i=0;l>0;i++){
            ans1=std::lcm(l,m);

            max = (n1 > n2) ? n1 : n2;

            do
            {
                if (max % l == 0 && max % m == 0)
                {
                    cout << max;
                    break;
                }
                else
                    ++max;
                if(max<ans1)
                    ans=max;''
            } while (true);

            if(ans1<ans)
                {ans=ans1;
                ll=l;mm=m;}
            l--;m++;
        }
        cout<<
    }
