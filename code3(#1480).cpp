#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sumArray(nums.size());
        if(sumArray.size()==0)
            return sumArray;
        sumArray[0]=nums[0];
        for(int i=1; i<nums.size();i++){
            sumArray[i]=sumArray[i-1]+nums[i];
        }
        return sumArray;
    }
};

int main()
{
    Solution s;
    vector<int> mat{1,2,3,4};
    vector<int> res = s.runningSum(mat);
    for(int i=0 ; i<mat.size();i++){
        cout<<'\n'<< res[i];
    }

    return 0;
}
