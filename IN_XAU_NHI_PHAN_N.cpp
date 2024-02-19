# include<bits/stdc++.h>
using namespace std;
int X[100],n;
void inkq(){
    for (int i=1;i<=n;i++){
        cout<<X[i];
    }
    cout<<endl;
}
void xu_li(int u){
    for (int i=0;i<=1;i++){
        X[u]=i;
        if (u==n) inkq();
            else xu_li(u+1);
    }
}
int main(){
    cin>>n;
    xu_li(1);
    return 0;
}