// Program for array rotation
#include<iostream>
using namespace std;

void rotateArray(int *, int, int);

int main(int argc, char const *argv[])
{
    int array[]={1,2,3,4,5,6,7};
    int numOfRotations = 2;
    rotateArray(array, sizeof(array)/sizeof(array[0]), numOfRotations);
    for(auto num:array) {
        cout << num << "\t";
    }
    return 0;
}

void rotateArray(int *A, int size, int rotations) {
    while(rotations) {
        int temp = A[0];
        for(int i=1;i<size;i++) {
            A[i-1] = A[i]; 
        } 
        A[size-1] = temp;
        --rotations;
    }
}