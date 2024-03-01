# include <bits/stdc++.h>
using namespace std;
int n,k,a[100],ok=1;
void tao(){
    for (int i=1;i<=n;i++){
        a[i]=0;
    }
}
void sinh(){
    int i=n;
    while (i>=1 && a[i]==1){
        a[i]=0;
        i--;
    }
    if (i==0) {
        ok=0;
    }
     else a[i]=1;
}
bool check(){
    int d=0, res=0;
    for (int i=1;i<=n;i ++){
        if (!a[i]) {
            d++;
        } else d=0;
        if (d>k) return false;
        if (d==k) res++;
    }
    return res==1;
}
int main(){
    cin>>n>>k;
    int cnt1=0;
    tao();
    while (ok){
        if (check()) cnt1++;
        sinh();
    }
    ok=1;
    tao();
    while(ok){
        if (check()){
            for (int i=1;i<=n;i++){
                if (a[i]==0) cout<<"A";
                 else cout<<"B";
            }
            cout<<endl;
        }
        sinh();
    }
    return 0;
}