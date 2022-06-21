#include<bits/stdc++.h>
using namespace std;
 
 class Solution {
     public:
 int reversePairs(vector < int > & num) {
      int pairs = 0;
      for (int i = 0; i < num.size(); i++) {
        for (int j = i + 1; j < num.size(); j++) {
          if (num[i] > 2 * num[j]) pairs++;
        }
      }
      return pairs;
    }
 };

int main()
{
    Solution ss;
    vector<int> vec{1,3,2,3,1};
    cout<<ss.reversePairs(vec);
}