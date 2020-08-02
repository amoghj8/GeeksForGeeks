// Merge an array of size n into another array of size m+n
#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int m=3;
    int n=4;
    vector<int> vec_mn = {2,7,10,0,0,0,0};
    vector<int> vec_n = {5,8,12,14};
    int high = m+n-1;
    int end2 = n-1;
    int end1=m-1;
    while(end2>-1) {
        if(vec_n[end2]>vec_mn[end1]){
            vec_mn[high] = vec_n[end2];
            end2--;
        }
        else if(vec_n[end2]<vec_mn[end1]) {
            vec_mn[high] = vec_mn[end1];
            end1--;
        }
        high--;
    }
    for(auto x: vec_mn) {
        cout<< x<< "\t";
    }
    return 0;
}
