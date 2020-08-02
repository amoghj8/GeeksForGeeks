#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int actualSize = 8;
    vector<int> arr = {1, 2, 4, 6, 3, 7, 8};
    int sum = (actualSize*(actualSize+1))/2;
    for(auto num : arr) {
        sum-=num;
    }
    cout<<sum;
    return 0;
}
