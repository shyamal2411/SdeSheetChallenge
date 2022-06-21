#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;
class Solution {
public:
  int majorityEle(vi &nums){
      int count = 0, cand = 0;

      for(int i : nums){
          if(count == 0)
            cand = i;
          if(i == cand)
            count++;
          else
            count--;
      }
      return cand;
  }
};

int main(){
Solution ss;
vector<int> vec = {1,1,2,2,2};
cout<<ss.majorityEle(vec);
return 0;
}