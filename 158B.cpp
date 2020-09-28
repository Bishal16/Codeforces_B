#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,i,four=0,three=0,two=0,one=0;
    cin>>n;
    long int arr[n];
    for( i=0;i<n;i++)
    {
        cin>>arr[i];
        switch(arr[i])
        {
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
            case 3:
                three++;
                break;
            case 4:
                four++;
                break;
        }
    }
    if(one<=three)
        one=0;
    else
        one=one-three;
    two=two;
    if(two%2==0)
        two=two/2;
    else
    {
        two=(two/2)+1;
        if(one==1)
            one--;
        else if(one>=2)
            one=one-2;
    }
    int p=one/4;
    one=one%4;
    if(one>0)
        one=1;
    cout<<four+three+two+one+p;

}
