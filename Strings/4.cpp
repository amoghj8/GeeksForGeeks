// Ordering of strings 
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
	    int n;
	    cin >> n;
	    vector<string> temp;
	    for(int i=0;i<n;i++) {
	        string s;
	        cin >> s;
	        temp.push_back(s);
	    }
	    sort(temp.begin(), temp.end());
	    cout << temp[0] << " " <<temp[temp.size()-1] <<endl; 
	}
	return 0;
}