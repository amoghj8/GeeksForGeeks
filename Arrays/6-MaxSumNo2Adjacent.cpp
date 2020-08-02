// Maximum sum such that no two elements are adjacent
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> array ={1,20,3};
    int maxSum=INT_MIN;
    for( int i=0;i<2;i++) {
        int temp_Sum = array[i];
        for(int j=i+2,k=j;j<i+4;j++) {
            while(k<array.size()) {
                temp_Sum += array[k];
                k+=2;
            }
            maxSum = max(maxSum,temp_Sum);
        }
    }
    cout << maxSum;
    return 0;
}
