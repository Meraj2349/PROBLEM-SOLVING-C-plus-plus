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
    vector<int> nums = {1,2,3,4,5,6,7};
    int  k = 3;int size = nums.size();
  for(int i = 0 ; i < k ;i++)
        {

            int temp = nums[size-1];

            cout<<temp<<"=temp" <<endl ;
           for (int  j = size-1; j > 0; j--)
            {
                nums[j]=nums[j-1];

            }

            nums[0]=temp;

            cout<<"nums 0="<<nums[0]<<endl;

        }
    for (int  s: nums)
    {
        cout<<"s="<<s<<endl;
        /* code */
    }
    
}