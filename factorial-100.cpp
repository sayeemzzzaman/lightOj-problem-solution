#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count=0;
        for(int i=5;i<=n;i=i*5){
            count = count + (n/i);
        }
        cout<<count<<endl;
    }
}