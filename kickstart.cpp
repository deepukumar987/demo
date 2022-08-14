#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int  r,a,b;
        cin>>r>>a>>b;
        double ans=r*r;
        
        //cout<<ans<<"dsf "<<endl;
        
        
        while(r)
        {
        
               r=r*a;
            
               ans=ans+(r*r);
               
               r=r/b;
               ans=ans+(r*r);
               
        }
        cout<<fixed<<setprecision(6)<<ans*3.1415927<<endl;
    }
    return 0;
}
