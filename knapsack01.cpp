#include <iostream>
#include<algorithm>
using namespace std;
int main() {
	int T,N,W;
	cin>>T;
    while(T--){
        cin>>N>>W;
        int weight[N+1];
        int val[N+1];
        int table[N+1][W+1];
        for(int i=1;i<=N;cin>>val[i++]);
        for(int i=1;i<=N;cin>>weight[i++]);
        for(int i=0;i<=N;i++)    
            for(int j=0;j<=W;j++)
                table[i][j]=0;
        for(int i=1;i<=N;i++){
            for(int j=1;j<=W;j++){
                if(j-weight[i] >= 0){
                    table[i][j]=max(table[i-1][j-weight[i]]+val[i],table[i-1][j]);
                }
                else{
                    table[i][j]=table[i-1][j];
                }
            }
        }    
        cout<<table[N][W]<<endl;
    }
	return 0;
}
