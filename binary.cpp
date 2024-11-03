#include <iostream>
using namespace std;
int main(){
    int d = 5;
    int ans = 0;
    int pow = 1;
    for(int i = 1;i>0;i++){
        int remender = d%2;
        d = d/2;
        ans += (remender*pow);
        pow = pow * 10;
    }
    cout<<ans<<endl;
}