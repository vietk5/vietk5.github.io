# include <bits/stdc++.h> 
using namespace std;
int a[1000];
void next(int n,int k,int a[]){
    int i=k;
    while (i>=1 && a[i]==n-k+i){
        i--;
    }
    if (i==0){
        for (int j=1;j<=k;j++){
            a[j]=j;
        }
    }
        else {
        a[i]++;
        for (int j=i+1;j<=k;j++){
            a[j]=a[j-1]+1;
        }
    }
    for (int h=1;h<=k;h++){
        cout<<a[h]<<" ";
    }       
}
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        for (int i=1;i<=k;i++){
            cin>>a[i];  
        }
        
        next(n,k,a);
        cout<<endl;
    }
    return 0;
}