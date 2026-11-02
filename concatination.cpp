#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "abcd";
    string s2 = "wxyz";
    string s3 = "abcd";
    string s4 = "wxyz";
    string s5 = "abcd";
    cout<< s1 + s2 + s3 + s4 + s5 ;
    cout<<endl;

    // ERROR
    /*string s = "abc";
    string x = s + 4 ;
    cout<<x<<endl ;*/

    // Not giving ERROR
    string s = "abc";
    string x = s + '4' ;
    cout<<x<<endl ;
}
