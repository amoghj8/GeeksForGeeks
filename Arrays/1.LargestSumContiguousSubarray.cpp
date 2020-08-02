#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    int curr_sum = 0;
    int maxSum  = INT_MIN;
    for(auto x: arr) {
        curr_sum += x;
        maxSum = max(maxSum, curr_sum);
        curr_sum = max(0,curr_sum);
    }
    cout<<maxSum;
    return 0;
}
