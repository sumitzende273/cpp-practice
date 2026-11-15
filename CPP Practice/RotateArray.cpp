#include <iostream>
#include <vector>
//#include <algorithm>
using namespace std;
    void change(vector<int>&arr,int i,int j){
        while(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
int main(){
    vector<int>arr={1,2,3,4,5,6,7};
    int n=arr.size();
    int k = 3;
    k = k % n;
    change(arr,0,n-1);
    change(arr,0,k-1);
    change(arr,k,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}