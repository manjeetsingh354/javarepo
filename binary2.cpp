#include <iostream>
using namespace std;
int binary(int decimal){
    int ans = 0;
    int pow = 1;
    for(int i=1;i>0;i++){
        int rimender = decimal%2;
        decimal = decimal/2;
        ans += (rimender*pow);
        pow = pow*10;
    }
    return ans;
}
int main(){
    cout<<binary(5)<<endl;

}