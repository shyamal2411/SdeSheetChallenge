#include <bits/stdc++.h> 
using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
	int row = matrix.size(), col = matrix[0].size();
        vector<int> dum1(row, -1), dum2(col, -1);
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(matrix[i][j] == 0){
                    dum1[i] = 0;
                    dum2[j] = 0;
                }
            }
        }
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
            if(dum1[i] == 0 || dum2[j] == 0){
                matrix[i][j] = 0;
                }
            }
        }
}

int main(){
    vector<vector<int>> mat = {{1,1,1},{1,0,1},{1,1,1}};
    
}