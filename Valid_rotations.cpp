#include <iostream>
#include <vector>

using namespace std;

void rotate(int nums[], int k, int n) {
    int temp[n];
    for(int i=0; i<n; i++){
        temp[(i+k)%n] = nums[i];
    }
    for(int i=0; i<n; i++){
        cout << temp[i] << " ";
    }
}
int main(){
    int nums[]={1,2,3,4,5};
    int n = 5;
    int k = 3;
    rotate(nums, k, n);
}
