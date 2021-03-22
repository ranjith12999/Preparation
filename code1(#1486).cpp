#include <iostream>

using namespace std;
class Solution {
public:
    int xorOperation(int n, int start=0) {
        int num = 0;
        for(int i=0; i<n ; i++){
            num = num^start;
            start = start+2;
        }

        return num;
    }
};

int main()
{
    Solution s;
    int xors = s.xorOperation(5);
    cout<<"Total Xor value "<<xors;
    return 0;
}