#include <iostream>
using namespace std;
int sumofn(int n){
    int sum =0;
    for(int i=1;i<=n;i++){
        sum = sum+i;
       

    }
     return sum;
}
int main(){
    cout<<sumofn(5)<<endl;
    return 0;

}