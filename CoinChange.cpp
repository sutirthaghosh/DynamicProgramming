#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int T;
    int M,N;
    cin>>T;
    while(T--){
        cin>>M;
        int arr[M+1];
        for(int i=1;i<=M;cin>>arr[i++]);
        cin>>N;
        int table[N+1];
        for(int i=0;i<=N;table[i++]=0);
        table[0]=1;
        //remember order does not matter
        //loop for coins taking one at a time
        for(int i=1;i<=M;i++){
            //loop for sum going from 1 to N
            for(int j=1;j<=N;j++){
                if(j-arr[i] >= 0)
                    table[j]+=table[j-arr[i]];
            }
        }
        cout<<table[N]<<endl;
    }
    return 1;
}
