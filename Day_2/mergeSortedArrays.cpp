#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;
class Solution {
public:
  void merge(vi ar, vi br){
      int n = ar.size(), m = br.size();
      int i, k;
      for(int i = 0; i < n; i++){
          if(ar[i] > br[0]){swap(ar[i], br[0]);}
          int first = br[0];

          for(k = 1; k < m && br[k] < first; k++){
              br[k-1] = br[k];
          }
          br[k-1] = first;
      }
  }
};

int main(){
Solution ss;
vector<int> ar = {1,4,2,5,7,10};
vector<int> br = {2,4,6};

for(int i = 0; i < 5; i++){
    cout<<ar[i]<<" ";
}
cout<<"\n\n";
for(int i = 0; i < 3; i++){
    cout<<br[i]<<" ";
}

ss.merge(ar, br);

for(int i = 0; i < 5; i++){
    cout<<ar[i]<<" ";
}
cout<<"\n\n";
for(int i = 0; i < 3; i++){
    cout<<br[i]<<" ";
}
return 0;
}