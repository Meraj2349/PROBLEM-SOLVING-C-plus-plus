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

// nums = [1,1,1,2,2,3]

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
       
        
//     }

 
// };
int32_t main()
{
        int x=0;
        int y=2;

        int size=nums.size();
        while( y < size)
        {
            if(nums[x]==nums[y])
            {
                size--;
                nums[y]= nums[y+1];
                
                x+2;

            }
            else 
            {
                x++;
                y++;
            }
           
        }
        return size;
    
    

}