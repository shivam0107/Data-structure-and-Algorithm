/*
    in this question we are going to find all permutation of the given array

    for ex ---
     {1,2,3} = all permutation of this array will be 3! = 6
     {
        [1,2,3],
        [1,3,2],
        [2,1,3],
        [2,3,1],
        [3,1,2],
        [3,2,1]
     }

*/


#include <bits/stdc++.h>
using namespace std;
    
 class Solution {

        private:
            void recurPermute(vector<int> &ds, vector<int> &nums, vector<vector<int>> & ans ,int freq[]){
                if(ds.size() == nums.size()){
                    ans.push_back(ds);
                    return;
                }

                for (int i = 0; i < nums.size(); i++)
                {
                    if(!freq){
                        ds.push_back(nums[i]);
                        freq[i] = 1;
                        recurPermute(ds, nums, ans, freq);
                        freq[i] = 0;
                        ans.pop_back();
                    }
                }
                
            }

            public:
            vector<vector<int>> permute(vector<int> &nums)
            {
                vector<vector<int>> ans;
                vector<int> ds;
                int freq[nums.size()] = {0};
                recurPermute(ds, nums, ans, freq);
                return ans;
            }

 };

int main()
{
        vector<int> nums;
    

        for (int i = 0; i < nums.size(); i++)
        {
            cin >> nums[i];
        }

        Solution t1;
        vector<vector<int>> vec = t1.permute(nums);

        for (int i = 0; i < vec.size(); i++) {
        for (
            auto it = vec[i].begin();
            it != vec[i].end(); it++)
            cout << *it << " ";
            cout << endl;
        }

        return 0;
}
