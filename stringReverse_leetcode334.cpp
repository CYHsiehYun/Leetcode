#include <iostream>
#include <string>
using namespace std;
void reverseString(string&str){
    int n = str.length();
    for(int i = 0;i<n/2;i++){
        swap(str[i],str[n-i-1]);
    }
}
int main(){
    string str1;
    cin>>str1;
    reverseString(str1);
    cout<<str1;
}