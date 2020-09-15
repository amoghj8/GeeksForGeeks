// Karatsuba Algorithm 
#include <iostream>
using namespace std;

#include<bits/stdc++.h>
int main() {
	int t;
	cin >> t;
	while(t)  {
	    string input;
	    string first, second;
	    cin >> first >> second;
	    
	    bitset<100> bt1(first);
	    bitset<100> bt2(second);
	    
	    long long result = bt1.to_ullong() * bt2.to_ullong();
	    
	    cout << result <<endl;
	    
	    t--;
	}
	return 0;
}