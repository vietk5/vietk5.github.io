# include<bits/stdc++.h>
# define MAX 8
using namespace std;
int A[MAX][MAX]={0};
int X[8]={-2,-2,-1,-1,1,1,2,2};
int Y[8]={-1,1,-2,2,-2,2,-1,1};
int n,dem=0;
void xuat(){
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cout<<A[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void di_chuyen(int x,int y){
	++dem;
	A[x][y]=dem;
	for (int i=0;i<8;i++){
		if (dem==n*n){
			cout<<"cac buoc da di: "<<endl;
			xuat();
			exit(0);
		}
		int u=x+X[i],v=y+Y[i];
		if (u>=0 && u<n && v>=0 && v<n && A[u][v]==0) di_chuyen(u,v);
	}
	--dem;
	A[x][y]=0;
}
int main(){
	cout<<"nhap kich thuoc ban co: ";cin>>n;
	int a,b;
	cout<<"nhap vi tri ban dau : "; cin>>a>>b;
	di_chuyen(a,b);
	cout<<"khong tim thay duong di.";
}