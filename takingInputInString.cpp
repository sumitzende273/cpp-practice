#include<iostream>
#include<string>
using namespace std;
int main(){
    string x ;
    // cin>>x it doesnot take input of full sentence
    getline(cin,x);
    cout<<x;
}
