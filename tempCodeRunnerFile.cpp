#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int count =0;
        vector<int>v(5,0);
        
        int x,y,z,m,n;
        cin>>x>>y>>z>>m>>n;
        
        v.push_back(x);
        v.push_back(y);
        v.push_back(z);
        v.push_back(m);v.push_back(n);
        
        
        for(auto p: v)
        {
            if(p==1)
            {
                count++;
            }
        }
        
        if (count>=4)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
        
    }
	// your code goes here

}
