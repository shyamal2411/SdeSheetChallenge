#include<bits/stdc++.h> 
using namespace std;

class Solution {
    public:
    void nextPermutation(vector<int> &nums){
        int n = nums.size(), k, l;

        //Traversing from back and finding the next greater element. Once found, break from there
        for(k = n - 2; k >= 0; k--){
            if(nums[k] < nums[k+1]){
                break;
            }
        }
        if(k < 0){
            reverse(nums.begin(), nums.end()); // reverse whole vector
            // this is used for test cases like 54321, here there's no next greater element from back
            //i.e. nums[k] < nums[k+1] doesn't hold true for 54321
        }
        else{
            //now again traverse from end and find the greater element, once found, swap both the elements
            //e.g. 13542, here when we get 3 and 4, swap them
            for(l = n-1; l > k; l--){
                if(nums[l] > nums[k]){
                    break;
                }
            }
            swap(nums[k], nums[l]);
            reverse(nums.begin() + k + 1, nums.end());
        }
    }
};

int main(){
    Solution ss;
    vector<int> vec = {1,3,5,4,2};
    ss.nextPermutation(vec);
    return 0;
}