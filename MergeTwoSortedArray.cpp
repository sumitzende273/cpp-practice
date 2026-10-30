#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

    int main(){
        vector<int> a = {10,20,40,60,80,100};
        vector<int> b = {30,50,70,90};
        
        int m = a.size();
        int n = b.size();
        int z = m + n;
        
        vector<int> c(z);
        int i = 0, j = 0, k = 0;
        
        while(i < m && j < n){
            if(a[i]<b[j]){
                c[k] = a[i];
                i++;
            }
            else {
                c[k] = b[j];
                j++;
            }
            k++;
        }
        while(i<m){
            c[k] = a[i];
            i++;
            k++;
        }
        while(j<n){
            c[k] = b[j];
            j++;
            k++;
        }
        for(int i=0;i<z;i++){
            cout<<c[i]<<"  ";
        }
        return 0;
    }