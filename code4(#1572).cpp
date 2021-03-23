class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0 ;
        int length = mat.size();
        for(int i=0; i<length; i++){
            for(int j=0; j<length; j++){
                if(i==j)
                    sum = sum + mat[i][j];
                else if((i!=j)&&(i+j==length-1))
                    sum = sum + mat[i][j];
            }
        }
    return sum;
    }
};