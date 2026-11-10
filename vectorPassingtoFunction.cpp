#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
    void change (vector<int>& arr){
        arr[4]=99;
    }
int main(){
    vector<int>arr={5,6,9,8,7,5,3};
    change(arr);
    cout<<arr[3];

    return 0;
}