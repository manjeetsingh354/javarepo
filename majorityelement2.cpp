#include <iostream>
#include <vector>
using namespace std;
vector<int> mj(vector<int> nums){
    int n = nums.size();
    for(int val:nums){
        int freq = 0;
        for(int el:nums){
            if(el==val){
                freq++;
            }
           
        }
         if(freq>=n/2){
                return val;
            }
    }
}
int main(){
    return 0;
}