#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int num;
        cin >> num;
        int firstNum=num;
        int lastNum=num%10;
        while(firstNum>=10){
            firstNum/=10;
        }
        cout<<"Sum = "<<firstNum+lastNum<<endl;
    }
}