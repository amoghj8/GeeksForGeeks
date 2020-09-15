// Excel Sheet | Part - 2 
#include <bits/stdc++.h>
using namespace std;

int main() {
		int t;
		cin>> t;
		
	while(t--) {
	    string S;
	    cin >> S;
	    int val = 0;
	    for(int i=S.size()-1,j=0;i>-1;i--) {
	        val += (pow(26,j))*((S[i]-'A')+1);
	        j++;
	    }
	    cout << val <<endl;
	}
	return 0;
}