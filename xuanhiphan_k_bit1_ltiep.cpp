# include<bits/stdc++.h>
using namespace std;
int n,k,a[100],ok=1;

void ktao(){
    for (int i=1;i<=n;i++){
        a[i]=0;
    }
}
void sinh(){
    int i=n;
    while (i>=1&&a[i]==1){
        a[i]=0;
        i--;
    }
    if (i==0){
        ok=0;
    } else a[i]=1;
}
bool check(){
    int cnt=0;
    for (int i=1;i<=n;i++){
        if (a[i]==1 && a[i+1]==1) cnt++; 
    }
    return cnt==k-1;
}
int main(){
    cin>>n>>k;
    ktao();
    while(ok){
        if(check()){
            for (int i=1;i<=n;i++){
                cout<<a[i];
            }
            cout<<endl;
        }
        sinh();
    }
    return 0;
}