# include<bits/stdc++.h>
using namespace std;

void so_tiep_theo(int n,int a[]){
    int i=n-1;
    while (i>=1 && a[i]> a[i+1]){
        i--;
    }
    if (i==0){
        for (int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    } else {
        int j=n;
        while (a[i]>a[j]) j--;
        swap(a[i],a[j]);
        int l=i+1, r=n;
        while (l<n){
            swap(a[l],a[r]);
            l++;
            r--; 
        }
        for (int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a[1005];
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        so_tiep_theo(n,a);
    }
    return 0;
}