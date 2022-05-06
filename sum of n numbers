#include<iostream>
using namespace std;

void print(int n, int result);
int print2(int n);

int main() {
	// print name n times using recursion
	int n = 5;
	print(n, 0);
	cout << print2(n);
	return 0;
}

void print(int n, int result) {

	if(n<1){
		cout << result << "\n";
		return;
	}
	print(n-1,result+n);
}

int print2(int n){
	if (n==0){
		return 0;
	}
	else {
		return n + print2(n-1);
	}
}
