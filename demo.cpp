#include <iostream>
using namespace std;

int main() {
    //input a string
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
        
    //declare an empty string
    string nstr;
    
    //loop through the characters of the input string
    for(int i=0; i<str.length();  ){
        //check if character is white space
        if(str[i] == ' '){
            /* 
              *do not include the white space, if-
              *it is at the trailing or leading position
            */
            if(i==0 || i==str.length()-1){
                i++;
                continue;
            }
            
            /*
              *if space is inbetween then skip it-
              *except the last occurrence
            */
            while(str[i+1] == ' ')
                i++;
        }
        
        //concatenate the character to the new string
        nstr += str[i++];
    }
    
    //output the new string
    cout << "New String: " << nstr;
    return 0;
}