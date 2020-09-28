#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,c,p;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
       // n=s.length();
//        int arr[n];
//        for(i=0;i<n;i++)
//            if(s[i]=='0')
//                arr[i]=0;
//            else
//                arr[i]=1;
//        for(i=0;i<n-1;i++){
//            if(arr[i]==0 && arr[i+1]==1 || arr[i]==1 && arr[i+1]==0){
//                for(j=i+2;j<n;j++)
//                    arr[i]=arr[i+2]
//                n=n-2;
//            }
        c=0;
        while(1){

            if(s.find("01") != -1)
                {p=s.find("01");c++;}
            else if(s.find("10") != -1)
                {p=s.find("10");c++;}
            else
                break;
            s.erase(p,2);
           // cout<<p<<" : "<<p+1<<endl;
            //cout<<s<<endl;

        }
        if(c%2==0)
            cout<<"NET"<<endl;
        else
            cout<<"DA"<<endl;
    }
}
