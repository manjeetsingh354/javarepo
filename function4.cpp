#include <iostream>
using namespace std;
int sumofDigits(int n){
    int sum =0;
    while(n>0){
        int lastdigit = n%10;
        n = n/10;
        sum = sum + lastdigit;
    } 
    return sum;

}
int main(){
    cout<<sumofDigits(145)<<endl;
    return 0;
}