#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        int l = arr.size();
        for(int i=0; i<l; i++){
            for(int j=i ; j<l; j+=2){
                for(int k=i; k<=j; k++){
                    sum+=arr[k];
                }
            }
        }
        return sum;
    }
};

int main()
{
    Solution s;
    vector<int> mat{1,4,2,5,3};
    int res = s.sumOddLengthSubarrays(mat);
    cout<<"sum"<<res;     
    return 0;
}