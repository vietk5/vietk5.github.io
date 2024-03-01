# include <bits/stdc++.h>
using namespace std;

int n,cnt,ok=1,a[1000];

void kh_tao(){
    cnt=1;
    a[1]=n;
}

void sinh (){
    int i=cnt;
    while ( i>=1 && a[i]==1 ){
        --i;
    }
    if (i==0) {
        ok=0;
    } else {
        a[i]-=1;
        int d=cnt-i+1;
        cnt=i;
        int q = d / a[i];
        int r = d % a[i];
        if (q != 0){
            for (int j=1;j<=q;j++){
                cnt++;
                a[cnt]=a[i];
            }
        }
        if (r != 0) {
            cnt++;
            a[cnt]=r;
        }
     }
}
int main(){
    cin>>n;
    kh_tao();
    ok=1;
    while (ok){
        cout<<n<<" = ";
        for (int i=1;i<=cnt;i++){
            if (i!=cnt) cout<<a[i]<<" + ";
             else cout<<a[i];
            // cout<<a[i]<<" ";
        }
        cout<<endl;
        sinh();
    }
    return 0;
}