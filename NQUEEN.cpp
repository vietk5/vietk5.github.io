# include<bits/stdc++.h>
using namespace std;
int n,d1[100],d2[100],cot[100],X[100],a[100][100],cnt=0;
void inkq(){
    for (int i=1;i<=n;i++){
        a[i][X[i]]=1;
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++)
            cout<<a[i][j];
        cout<<endl;
    }
    cout<<endl;
    memset(a,0,sizeof(a));
}
void nqueen(int i){
    for (int j=1;j<=n;j++){
        if (cot[j]==1 && d1[i-j+n]==1 && d2[i+j-1]==1) {
            X[i]=j;
            cot[j]=d1[i-j+n]=d2[i+j-1]=0;
            if (i==n) {
                inkq();
                cnt++;
            }
            else {
                nqueen(i+1);
            }
            cot[j]=d1[i-j+n]=d2[i+j-1]=1;
        }
    }
}
int main(){ 
    cin>>n;
    
    for (int i=0;i<99;i++) {
        cot[i]=d1[i]=d2[i]=1;
    }
    nqueen(1);
    cout<<cnt;
    return 0;
}