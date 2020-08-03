// Leaders in an array

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> array = {16, 17, 4, 3, 5, 2};
    vector<int> res;
    res.push_back(array[array.size()-1]);
    int maxVal = res[0];
    for(int i=array.size()-1;i>-1;i--) {
        if(array[i]>maxVal) {
            res.push_back(array[i]);
        }
        maxVal = max(maxVal, array[i]);
    }
    for(auto num:res) {
        cout << num <<"\t";
    }
    return 0;
}
