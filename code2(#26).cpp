#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<2){
            return nums.size();
        }
        int j=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[j]){
                j+=1;
                nums[j]=nums[i];
            }
        }
        return j+1;
    }
};

int main()
{
    Solution s;
    vector<int> mat{1,1,2};
    int res = s.removeDuplicates(mat);
   for(int i=0 ; i<res;i++){
        cout<<" "<<mat[i];
    }

    return 0;
}
