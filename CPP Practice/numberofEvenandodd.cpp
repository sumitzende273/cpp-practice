#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,3,5,6,9,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int even = 0 , odd = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] % 2 == 0){
            even++;
        }
        else
            odd++;
    }
    cout<<"Even numbers in array are :  "<<even<<endl;
    cout<<"odd numbers in array are :  "<<odd;
}