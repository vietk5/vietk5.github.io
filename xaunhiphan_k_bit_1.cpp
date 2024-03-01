# include <bits/stdc++.h>
using namespace std;
int n,k,a[100],ok=1,cnt=0,cnt1=0;

void ktao(){
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
    if (i==0){
        ok=0;
    }
     else a[i]=1;
}

bool check(){
    cnt=0;
    for (int i=1;i<=n;i++){
        cnt+=a[i];
    }
    return cnt==k;
}
int main(){
    cin>>n>>k;
    ktao();
    while (ok){
        if (check()){
            for (int i=1;i<=n;i++){
                cout<<a[i];
            }
            cout<<endl;
            cnt1++;
        }
        sinh();
    }
    cout<<"CO "<<cnt1<<" CAU HINH.";    
    return 0;
}