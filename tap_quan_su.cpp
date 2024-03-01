# include<bits/stdc++.h>
using namespace std;
int ok=1;
void sinh_next(int n, int k, int a1[]){
    int i=k;
    int cntt=0;
    while (i>=1 && a1[i]==n-k+i){
        i--;
    }
    if (i==0) {
        for (int j=1;j<=k;j++){
            a1[j]=a1[j];
        }
    }
    else {
        a1[i]++;
        for (int j=i+1; j<=k;j++){
            a1[j]=a1[j-1]+1;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,cntt=0;
        cin>>n>>k;
        int a2[100],a[100];
        for (int i=1;i<=k;i++){
            cin>>a2[i];
            a[i]=a2[i];
        }
        sinh_next(n,k,a2);
        // for (int i=1;i<=k;i++){
        //     cout<<a2[i]<<" ";
        // }
        // cout<<endl;
        for (int i=1;i<=k;i++){
            for (int j=1;j<=k;j++){
                if (a[i]==a2[j]) cntt++;
            }
        }
        if (cntt==k) cout<<k;
        else  cout<<k-cntt<<endl;
    }
    return 0;
}