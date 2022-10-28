#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		int count=0;
		int lineCount=0;
		cin >> n;
		while(lineCount!=n){
			if(count==n){
				cout<<endl;
				lineCount++;
				count=0;
			}
			else{
				cout<<"*";
				count++;			
			}
			//if(lineCount==n)break;
		}
		if(t!=0)
		cout<<endl;
	}
}