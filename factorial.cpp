#include<iostream>
using namespace std;
long long factorial(int n){
    if(n==0)return 1;
    else{
        return n*factorial(n-1);
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n<=0)cout<<0<<endl;
        else
            cout << factorial(n) << endl;
    }
}