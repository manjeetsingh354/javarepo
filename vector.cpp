#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vc={3,4,5,6};
    vc.push_back(22);
    cout<<vc.size()<<endl;
    vc.back(21);
    cout<<vc.front()<<endl;
    // vc.pop_back();
   cout<<vc.at(0)<<endl;
   for(int i:vc){
    cout<<i<<" ";

   }
}

















