#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        int l = nums.size();
        for(int i=0 ; i<l ; i++){
            if(nums[i]!=val){
                nums[count]=nums[i];
                count+=1;
            }
        }
        return count;
    }
};

int main()
{
    Solution s;
    vector<int> mat{3,2,2,3};
    int val =3;
    int res = s.removeElement(mat, val);
   for(int i=0 ; i<res; i++){
        cout<<" "<<mat[i];    
    }
    
    return 0;
}