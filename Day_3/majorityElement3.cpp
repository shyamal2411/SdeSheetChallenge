#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;
class Solution {
public:
    vi majorityEle3(vi &nums){
        int n = nums.size();
        map<int, int> mp;
        vi ans;

        for(auto i: nums)
        mp[i]++;

        for(auto i: mp){
            if(i.second > (n/3)){ans.push_back(i.first);}
        }
        return ans;
    }
};

int main(){
Solution ss;
vector<int> vec = {1,2,3,2,2};
vi majority = ss.majorityEle3(vec);
for(auto i:majority){
    cout<<i<<" ";
}
return 0;
}