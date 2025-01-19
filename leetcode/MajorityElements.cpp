#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {2,
                        2,
                        1,
                        1,
                        1,
                        2,
                        2};

    int arraySize = nums.size();
    int count = 0;
    int retch = 0;
    for (int i = 0; i < arraySize; i++)
    {
        if (count == 0)
        {
            retch = nums[i];
            count = 1;
        }
        if (retch == nums[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        /* code */
    }

  cout<<retch<<endl;
}