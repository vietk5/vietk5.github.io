# include <bits/stdc++.h>
using namespace std;
int X[100],n,k;
void inkq(){
    for (int i=1;i<=k;i++){
        cout<<X[i];
    }
    cout<<endl;
}
void xu_li(int i){
    for (int j=X[i-1]+1;j<=n-k+i;j++){
        X[i]=j;
        if (i==k) inkq();
            else xu_li(i+1);
    }
}
int main(){
    cin>>n>>k;
    xu_li(1);
    return 0;
} 