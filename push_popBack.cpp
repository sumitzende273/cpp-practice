#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main (){
    string s = " sumit zende";
    // POP and PUSH BACK
    s.pop_back();
    s.push_back('i');
    cout<<s<<endl;

    //Sorting 
    sort(s.begin(),s.end());
    cout<<s<<endl;

}