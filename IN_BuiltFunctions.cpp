#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main (){
    string s = "987566";
    // SORTING 
    sort(s.begin(),s.end());
    cout<<s<<endl;

    // REVERSE
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    // String to integer 
    int n = stoi(s);
    cout<<n<<endl;

    // string to long long 
    int m = stoll(s);
    cout<<m<<endl;
}