#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int l = nums.size();
        int sum = 0;
        for(int i=0 ; i<l ; i++){
            int count = 0;
            for(int j=0 ; j<l ; j++){
                if((nums[i]==nums[j]))
                    count++;
            }
            if(count==1)
                sum+=nums[i];
        }
        return sum;
    }
};
int main()
{
    Solution s;
    vector<int> nums{1,1,2,3};
    int sum = s.sumOfUnique(nums);
    cout<<"sum  "<<sum;
    return 0;
}