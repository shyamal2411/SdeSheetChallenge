#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;
class Solution {
public:
  int findDuplicate(vi &vec){
    unordered_map<int, int> mp;
    for(auto i: vec){
        mp[i]++;
    }
    for(auto i: mp){
        if(i.first >=1){
            return i.second;
        }
    }
    return -1;
  } 
};

int main(){
Solution ss;
vector<int> vec = {1,3,2,6,2};
cout<<ss.findDuplicate(vec);
return 0;
}