#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n1,n2,n3;
        cin >> n1>>n2>>n3;
        int arr[3] = {n1,n2,n3};
        sort(arr,arr+3);
        cout << "Case " << i+1 <<": "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    }
}