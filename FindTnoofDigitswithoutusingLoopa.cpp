#include<iostream>
#include<string>
using namespace std;
int main (){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    
    // to convert integer to string 
    string s = to_string(n);
    int l=s.size();
    cout<<s<<endl;
    cout<<l;
    return 0;
}