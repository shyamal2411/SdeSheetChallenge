#include<bits/stdc++.h> 
using namespace std;

class Solution {
    public:
        int maxSubArr(vector<int> &vec){
            int sum = 0;
            int maxx = INT_MIN;
            for(auto it: vec){
                sum += it;
                maxx = max(sum, maxx);
                if(sum < 0) sum = 0;    
            }
            return maxx;
        }
};

int main(){
    Solution ss;
    vector<int> vec = {1,3,2,4};
    cout<<ss.maxSubArr(vec);
    return 0;
}