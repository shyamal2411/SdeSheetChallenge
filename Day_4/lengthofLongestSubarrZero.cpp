#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;
class Solution {
public:
    int solve(vi &nums){
        int maxx = 0;
        for(int i = 0; i < nums.size(); i++){
            int sum = 0;
            for(int j = i; j < nums.size(); j++){
                sum += nums[j];
                if(sum == 0){
                    maxx = max(maxx, j-i+1);
                }
            }
        }
        return maxx;
    }
    int maxlen(vi &nums){
        int n = nums.size();
        unordered_map<int, int> mp;
        int maxx = 0, sum = 0;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            if(sum == 0){
                maxx = i+1;
            }
            else{
                if(mp.find(sum) != mp.end()){
                    maxx = max(maxx, i - mp[sum]);
                }
                else{
                    mp[sum] = i;
                }
            }
        }
        return maxx;
    }
};


int main(){
Solution ss;
vector<int> vec = {9, -3, 3, -1, 6, -5};
cout<<ss.maxlen(vec)<<endl;
// cout<<ss.solve(vec)<<endl;
return 0;
}