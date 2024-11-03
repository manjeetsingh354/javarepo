#include <iostream>
using namespace std;
int binTodec(int b){
    int ans = 0;
    int pow =1;
    for(int i=1;i>0;i++){
        int remender = b%10;
        ans += remender*pow;
        b = b/10;
        pow =pow*2;
    }
    return ans;
}
int main(){
    cout<<binTodec(101)<<endl;
    return 0;
}