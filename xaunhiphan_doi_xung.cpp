# include<bits/stdc++.h>
using namespace std;
int n,ok=1,a[1000];

void khoi_tao(){
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
    } else a[i]=1;
}
bool check(){
    int ok1=1;
    int i=1, j=n;
    while (i<=j){
        if (a[i]!= a[j]){
            ok1=0;
            break;
        } else {
            i++;
            j--;
        }
    }
    return ok1;
}
int main(){
    cin>>n;
    khoi_tao();
    while (ok){
        if (check()){
            for (int i=1;i<=n;i++){
                cout<<a[i];
            }
            cout<<endl;
        }
        sinh();
    }
    return 0;
}