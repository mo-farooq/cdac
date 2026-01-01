#include <iostream>
#include<string.h>
using namespace std;
    char string1[20];
    int flag = 0;
int is_palindrome( int length){

	for(int i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
           }
        }
}
int main(){

    
    cout << "Enter a string: "; 
	cin >> string1;
	int length = strlen(string1);
    
    is_palindrome(length);
    
    if (flag) {
        cout << string1 << " is not a palindrome" << endl; 
    }    
    else {
        cout << string1 << " is a palindrome" << endl; 
    }
    return 0;     
}
