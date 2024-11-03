#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character"<<endl;
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"lowercase"<<endl;

    }else if(ch>='A' && ch<='Z'){
        cout<<"uppercase"<<endl;

    }else{
        cout<<"its is not a character"<<endl;
    }
    return 0;
}