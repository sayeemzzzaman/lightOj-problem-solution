#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int temp;
        cin >> temp;
        if(temp%2==0)cout<<"even"<<endl;
        else cout<<"odd"<<endl;
    }
}