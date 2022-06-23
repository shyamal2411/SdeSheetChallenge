#include<bits/stdc++.h> 
using namespace std;

#define int long long
typedef vector<int> vi;
typedef vector<string> vst;

class Solution {
public: 
    int solve(vi &nums, int b){
        int c = 0;
        for(int i = 0; i < nums.size(); i++){
            int cxor = 0;
            for(int j = i; j < nums.size(); j++){
                cxor ^= nums[j];
                if(cxor == b) c++;
            }
        }
        return c;
    }
};

int32_t main(){
Solution ss;
vector<int> vec = {4,2,2,6,4};
cout<<ss.solve(vec, 6)<<endl;
return 0;
}