# include<bits/stdc++.h>
using namespace std;
string s,ok;

void next(string s){
    int i=s.length()-1;
    while (i>=0 && s[i]=='1'){
        s[i]='0';
        i--;
    }
    if (i!=-1) {
        s[i]='1';
    }
    cout<<s;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        next(s);
        cout<<endl;
    }
    return 0;
}