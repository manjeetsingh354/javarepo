#include <iostream>
using namespace std;
int facto(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
int factorial(int n,int r){
    int factr = facto(r);
    int factn = facto(n);
    int factnr = facto(n-r);
    return factn/(factr*factnr);
}
int main(){
    cout<<factorial(8,6)<<endl;
    return 0;
}