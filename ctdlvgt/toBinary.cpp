#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	stack<char> st;
	if(n==0) {
		cout << "0" << endl;
	}
	else {
		while(n!=0) {
		char temp=(n%2)+'0';
		st.push(temp);
		n/=2;
	}
	}
	while(!st.empty()) {
		cout << st.top();
		st.pop();
	}
    return 0;
}
