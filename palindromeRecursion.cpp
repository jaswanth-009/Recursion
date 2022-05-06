#include<iostream>
using namespace std;

void isPalindrome(int pos, string s){
	if(s[pos]!=s[s.size()-pos-1]){
		cout << "Not a palindrome";
		return;
	}
	if(pos == s.size()/2){
		cout << "Palindrome";
		return;
	}
	isPalindrome(pos+1,s);
}

int main(){
	
	string s = "madama";
	isPalindrome(0,s);
	return 0;
}

