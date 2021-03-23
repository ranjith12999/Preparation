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