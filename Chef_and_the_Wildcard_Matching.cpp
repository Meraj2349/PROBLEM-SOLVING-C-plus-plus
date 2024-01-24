#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string x,y;
        int count=0;
        cin>>x>>y;

        if(x.length()== y.length())
        {
            for (int i = 0; i < x.length(); i++)
            {
                if (x[i]==y[i] || x[i]=='?' && y[i] ||y[i]=='?' && x[i])
                {
                   count++;
                }
            }

            if (x.length() == count)
            {
                cout<<"Yes"<<endl;
                /* code */
            }
            else
            {
                cout<<"No"<<endl;
            }
            
            
        }

        
        
    }

}