#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    long long maxcnt = 0;
    long long i=0,j=0;
    while(j<s.size()){
        j++;
        while(i<j && s[i]!=s[j]){
            i++;
        }
        maxcnt=max(maxcnt,j-i+1);
    }
    cout<<maxcnt;
}