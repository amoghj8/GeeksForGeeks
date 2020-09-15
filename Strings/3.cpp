// Minimum changes to make all substrings distinct 
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    string s;
	    cin >> s;
	    set<char> us;
	    for(auto ch:s) {
	        us.insert(ch);
	    }
	    cout << s.size() - us.size() << endl;
	}
	return 0;
}