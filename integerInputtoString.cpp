#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;

    string s = to_string(n); // time compexity 0(n).
    cout<<s<<endl;
    /*string s = "";
    while(n!=0){
        int lastDigit = n % 10;
        char ch = lastDigit + 48 ;
        s.push_back(ch);
        n = n/10 ;
    }
    //cout<<s<<endl;
    // reverse 
    int i = 0 , j = s.size() - 1 ;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    cout<<s;
    return 0;*/
}