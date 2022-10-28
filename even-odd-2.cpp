#include<iostream>
using namespace std;

int main(){
    long long int t;
    cin >> t;
    while(t--){
        string temp;
        cin >> temp;
        int lastDigit = temp[temp.size()-1];
        if(lastDigit%2==0)cout<<"even"<<endl;
        else cout<<"odd"<<endl;
    }
}