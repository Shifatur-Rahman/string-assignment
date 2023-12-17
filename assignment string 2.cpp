#include <iostream>
using namespace std;
int main(){

    string  haystack, needle;
    haystack = "sadbutsad";
    needle = "sad";

    int m = haystack.length();
    int n = needle.length();

    if(n>m){
        cout<<-1;
        return 0;
    }

    for(int i=0; i<(m-n)+1; i++){
        if(needle == haystack.substr(i,n)){
            cout<<i<<endl;
            return 0;
        }
    }

      cout<<-1;

}
