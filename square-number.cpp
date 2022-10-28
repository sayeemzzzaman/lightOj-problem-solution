#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sq = sqrt(n);//without fraction
        if(sqrt(n)==sq)//fraction==without fraction
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}