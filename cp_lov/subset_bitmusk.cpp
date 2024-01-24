#include <bits/stdc++.h>
using namespace std;

vector<vector<int >>subset(vector<int>& array)
{
    int n=array.size();

    int sub_set_size = (1<<n);
    vector<vector<int>> sub_set;

    for (int  musk= 0; musk < sub_set_size; musk++)
    {
       vector<int> temp;
        for (int i=0; i<n; i++)
        {
            if (musk&(1<<i)!=0) 
                temp.push_back(array[i]);
        }
        sub_set.push_back(temp);
    }
    

}
int main(){

    int n;
    cin>>n;

    vector<int >array(n);

    for (int  i = 0; i < n; i++)
    {
       cin>>array[i];
    }

    auto allsub_set= subset(array);
    
   for(auto sub:allsub_set)
   {
    for(auto ele:sub)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

   }

    
}