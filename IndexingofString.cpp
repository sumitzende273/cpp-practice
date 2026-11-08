#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Sumit Zende";
    // length of string 
    int n = s.size();// we can use size as well as length for lenght of string
    cout<<n<<endl;
    cout<<s[4]<<endl;
    s[0] = 'Z';
    cout<<s<<endl;
}