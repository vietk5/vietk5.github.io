# include<bits/stdc++.h>
using namespace std;

void next(string s){
    int i=s.length()-2;
    while (i>=0 && s[i]>=s[i+1]){
        i--;
    }
    if (i==-1) {
        cout<<"BIGGEST"<<endl;
    }
     else {
        int j=s.length()-1;
        while (s[i]>=s[j]) j--;
        swap(s[i],s[j]);
        int l=i+1,r=s.length()-1;
        while(l<r){
            swap(s[l],s[r]);
            l++;
            r--;
        }
        cout<<s<<endl;
     }
}
int main(){
    int t;
    cin>>t;
    while (t--){
        int test;
        cin>>test;
        string s;
        cin>>s;
        cout<<test<<" ";
        next(s);
    }
    return 0;
}