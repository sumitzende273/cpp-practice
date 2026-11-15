#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int missingnumber(vector<int>&arr){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(i != arr[i])return i;
    }
    return n;
}
int main (){
    vector<int>arr={0,1,3,4};
    missingnumber(arr);
    cout<<"The Missing Number is : "<<missingnumber(arr)<<endl;

    return 0;
}    