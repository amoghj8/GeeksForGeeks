#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int key = 10;
    vector<int> array = {30, 40, 50, 10, 20};
    int low=0;
    int high = array.size()-1;
    bool exist = false;
    while(low<=high) {
        int mid = low + (high-low)/2;
        if(array[mid]==key) {
            cout<<mid;
            exist = true;
            break;
        }
        else {
            if(array[mid]>array[high]) {
                if(key<=array[high]) {
                    low = mid+1;
                }
                else {
                    high = mid-1;
                }
            }
            else {
                
                    if(key<=array[high]) {
                        low=mid+1;
                    }
                    else {
                        high=mid-1;
                    }
                
            }
        }

    }
    if(!exist) {
        cout<< "Key doesnt exist";
    }
    return 0;
}
