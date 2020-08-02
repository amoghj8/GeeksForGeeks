// Maximum sum such that no two elements are adjacent
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> array ={4,1,1,4,2,1};
    int maxSum=INT_MIN;
    for( int i=0;i<2;i++) {
        for(int j=i+2;j<i+4;j++) {
            int temp_Sum = array[i];
            int k=j;
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
