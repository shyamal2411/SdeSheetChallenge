#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
  int maxProfit(vector<int> &nums){
      int i, minPrice = INT_MAX;
      int maxProfit = 0;

      for(int i = 0; i < nums.size(); i++){
          if(nums[i] < minPrice)
          minPrice = nums[i];

          if(nums[i] - minPrice > maxProfit)
          maxProfit = nums[i] - minPrice;
      }
      return maxProfit;
  }
};

int main(){
Solution ss;
vector<int> vec = {7,6,4,3,1};
return 0;
}