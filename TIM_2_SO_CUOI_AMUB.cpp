# include<bits/stdc++.h>
using namespace std;
long long cuoi(long long a,long long b){
	if (b==1) return a%100;
	long long x=cuoi(a,b/2)%100;
	if (b%2==0) return 1ll*x*x%100;
	return 1ll*x*x*a%100;
}
int dem( int a){
	int dem=0;
	while (a){
		dem++;
		a/=10;
	}
	return dem;
}
int main(){
	long long a,b;
	cin>>a>>b;
	if (dem(cuoi(a,b))==1) cout<<0<<cuoi(a,b);
	   else cout<<cuoi(a,b);
	return 0;
}
