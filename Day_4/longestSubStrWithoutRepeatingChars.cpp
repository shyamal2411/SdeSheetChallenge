#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;
class Solution {
public:
  int longestSubstrWithoutRepeatingChars(string s){
      int min = INT_MIN, n = s.size();
      for(int i = 0; i < n; i++){
          unordered_set<int> st;
          for(int j = i; j < n; j++){
              if(st.find(s[j]) != st.end()){
                  min = max(min, j-i);
                  break;
              }
              st.insert(s[j]);
          }
      }
      return min;
  }
};

int main(){
Solution ss;
// vector<int> vec = {};
    string s = "ShyamalPrajapati"; 
    cout<<ss.longestSubstrWithoutRepeatingChars(s); //Shyam
return 0;
}