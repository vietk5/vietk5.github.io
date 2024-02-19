# include <bits/stdc++.h>
using namespace std;
int check[100]={0},X[100],n;
void inkq(){
    for (int i=1;i<=n;i++){
        cout<<X[i];
    }
    cout<<endl;
}
void xu_li(int i){
    for (int j=1; j<=n;j++){
        if (check[j]==0){
            X[i]=j;
            check[j]=1;
            if (i == n) inkq();
                else xu_li(i+1);
            check[j]=0;
        }
    }
}
int main(){
    cin>>n;
    xu_li(1);
    return 0;
}