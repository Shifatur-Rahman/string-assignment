#include <bits/stdc++.h>
using namespace std;
int main(){

string str = "mamacode";
int indices[] = {4,5,6,7,0,1,2,3};
int n = str.length();

string s(n, '.');

for(int i=0; i<n; i++){
    s[indices[i]] = str[i];
}

cout<<s;

// Time complexity => 0(n)
// space complexity => 0(n)

}
