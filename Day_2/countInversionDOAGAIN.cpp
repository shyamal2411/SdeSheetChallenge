#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;
class Solution {
public:

    int merge(vi arr, vi temp, int left, int mid, int right){
        int invCount = 0, i = left, j = mid, k = left;

        while((i <= mid - 1) && (j <= right)){
            if(arr[i] <= arr[j]){
                temp[k++] = arr[i++];
            } else{
                temp[k++] = arr[j++];
                invCount += (mid-i);
            }
        }
        while(i <= mid - 1)
            temp[k++] = arr[i++];

        while(j <= right)
            temp[k++] = arr[j++];

        for(i = left ; i <= right ; i++)
            arr[i] = temp[i];
    
        return invCount;

    }

  int merge_Sort(vi arr, vi temp, int left, int right){
      int mid, invCount = 0;
      if(right > left){
          mid = (right + left) / 2;
          invCount += merge_Sort(arr, temp, left, right);
          invCount += merge_Sort(arr, temp, mid + 1, right);
          invCount += merge(arr, temp, left, mid+1, right);
      }
      return invCount;
  }
};

int main(){
Solution ss;
vector<int> vec = {};
return 0;
}