#include<iostream>
using namespace std;

int main(){
    for(int i=1000;i>=1;i--){
        cout << i;
        if(i%5==1)cout<<endl;
        else cout<<" ";
    }
}

// #include<iostream>
// using namespace std;

// int main(){
//     int n=1000,count=0;
//     while(1){
//         if(count!=5){
//             cout<<n<<" ";
//             count++;
//         }
//         if(count==5){cout<<endl;count=0;}
//         if(n==1)break;
//         n--;
//     }
// }