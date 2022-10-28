#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    getchar();
    while(t--){
        fflush(stdin);
        int count=0;
        string num;
        getline(cin,num);
 
        string nstr;

        for(int i=0; i<num.length();){
            if(num[i] == ' '){
                if(i==0 || i==num.length()-1){
                    i++;
                    continue;
                }
                while(num[i+1] == ' '){
                    i++;
                }
            }
            nstr += num[i++];
        }

        // cout << nstr << endl;
        for(int i=0;i<nstr.size();i++){
            if(nstr[i]==' '){
                count++;
            }
        }
        cout<<count+1<<endl;
    }
}