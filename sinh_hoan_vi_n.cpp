# include <bits/stdc++.h>
using namespace std;
int n,ok,a[1000];
void khoi_tao(){
    for (int i=1;i<=n;i++){
        a[i]=i;
    }
}
void sinh(){
    int i=n-1;
    while (i>=1 && a[i]>a[i+1]){
        i--;
    }
    if (i==0){
        ok=0;
    }
     else {
        int j=n;
        while(a[i]>a[j]) j--;
        swap(a[i],a[j]);
        int l=i+1,r=n;
        while(l<r){
            swap(a[l],a[r]);
            l++;
            r--;
        }
     }
}
int main(){
    cin>>n;
    int cnt=0;
    khoi_tao();
    ok=1;
    while (ok){
        for (int i=1;i<=n;i++){
            cout<<a[i];
        }
        cnt++;
        cout<<endl;
        sinh();
    }
    cout<<cnt;
    return 0;
}