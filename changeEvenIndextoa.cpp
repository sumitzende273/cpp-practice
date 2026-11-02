#include<iostream>
#include<string>
using namespace std;
int main(){
    string x ;
    getline(cin,x);
    int n = x.size();
    for(int i=0;i<n;i++){
        if(i%2==0){
            x[i] = 'a';
        }
    }
    cout<<x;
}