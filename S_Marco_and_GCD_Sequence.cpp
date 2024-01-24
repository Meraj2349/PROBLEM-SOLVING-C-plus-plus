#include <bits/stdc++.h>

using namespace std;

int s[1005];

int main(){
	int n;
    cin>>n;
	for(int i=1;i<=n;i++)
    {
       cin>>s[i];
    }
   
	sort(s+1,s+n+1);

	int Gcd=s[1];
	for(int i=1;i<=n;i++)
    {
     if(s[i]%Gcd)
     {
        cout<<-1<<endl;return 0;
     }

    }
	   cout<<2*n<<endl;
	for(int i=1;i<=n;i++)
    {
          cout<<Gcd<<" "<<s[i]<<" ";
    }
    
}