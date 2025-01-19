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

// int removeDuplicates(vector<int>& nums) {
//         int size= nums.size();
//         for(int i=0;i< nums.size()-1;i++)
//         {
//             if(nums[i]==nums[i+1])
//             {
//                size--;
//             }
//         }
//         return size;
// }


int32_t main()
{
    vector <int> nums = {1,1,2};

        int siz = nums.size();
        int x=0;
        int y=1;
        while(y < nums.size())
        {
            if(nums[x]==nums[y])
            {
               y++;
               siz--;
            }
            else 
            {
               nums[x+1]=nums[y];
               x++ ;
               y++;

            }
            
        }

   cout<<siz<<endl;

}