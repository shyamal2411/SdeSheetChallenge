#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;
class Solution {
public:
  double mypow(double x, int n){
      double ans = 1.0;
      long long nn = n;
      if(nn < 0)
      nn = -1*nn;

      while(nn){
          if(nn % 2){
              ans*=x;
              nn--;
          }
          else{
              x=x*x;
              nn/=2;
          }
      }
      if(n < 0)
      ans = (double)(1.0) / (double)(ans);
      return ans;
  }
};

int main(){
Solution ss;
cout<<ss.mypow(2,7)<<endl;
// vector<int> vec = {};
return 0;
}