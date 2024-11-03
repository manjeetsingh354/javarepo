#include <iostream>
using namespace std;
int main(){
    int num = 1;
    int n = 5;
    for(int i =0;i<=n;i++){
        for(int j=0;j<=n;j++){
            cout<<num;
            num = num+1;
        }
        cout<<endl;
    }
    cout<<num<<endl;
    return 0;
}