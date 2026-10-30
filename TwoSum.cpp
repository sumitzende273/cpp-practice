#include <iostream>
#include <vector>
using namespace std;
    void twosum(vector<int>&arr,int target){
        int n = arr.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i] + arr[j] ==target){
                    cout<<arr[i]<<" "<<arr[j]<<endl;
                    break;
                }
            }
        }
    }
int main(){
    vector<int>arr={2,6,5,9,8,7,3};
    twosum(arr,17);
    
    
    
    
    return 0;
}