#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];

void chap(int n){
    a[1][0]=1;
    a[1][1]=1;
    for (int i=2;i<=n;i++){
        for(int j=0;j<=i;j++){
            if (j==0 || i==j) a[i][j]=1;
                else a[i][j]=a[i-1][j-1]+ a[i-1][j];
        }
    }
}
int main(){
    int n,k;
    cout<<"nhap k va n: ";
    cin>>k>>n;
    chap(n);
    cout<<"to hop chap k cua n: "<<a[n][k]<<endl;
    cout<<"tat ca to hop cua k n: "<<endl;
    for (int i=1;i<=n;i++){
        for (int j=0;j<=i;j++){
             cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}