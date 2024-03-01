# include <bits/stdc++.h>
using namespace std;
int n,a[100];
int main(){
    cin>>n;

    for (int i=0;i<n;i++) a[i]=i+1;// n-i
    do{
        for (int i=0;i<n;i++){
            cout<<a[i];
        }
        cout<<endl;
    } while (next_permutation(a,a+n));// prev_permutation(a,a+n)55
    
    return 0;
}