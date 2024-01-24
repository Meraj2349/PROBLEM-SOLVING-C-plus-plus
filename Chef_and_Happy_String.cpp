#include<bits/stdc++.h>
#define mii map<int, int> 
#define vi vector<int> 
#define int long long int 
#define f first
#define s second 
#define pb push_back 
#define mp make_pair 
#define mod 100000007
using namespace std;
int32_t main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;

        string a={'a','e','i','o','u'};
        int count=0;
       

        for (int i = 0; i < s.length(); i++)
        {

            for (int j = 0; j < 5 ; j++)
            {
                if(a[j]==s[i])

                {
                    count++;
                    break;
                    
                }
               
                
            }
            
        }

        if(count>=2)
      {
        cout<<"Happy"<<endl;

      }

      else{
        cout<<"Sad"<<endl;
      }
        
        /* code */
    }


    
}