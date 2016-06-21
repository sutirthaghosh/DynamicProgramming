#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int T,N;
    cin>>T;
    while(T--){
        cin>>N;
        int arr[N+1],table[N+1];
        for(int i=1;i<=N;i++)
            cin>>arr[i];
        for(int i=0;i<=N;i++)
            table[i]=1;
        table[1]=1;
        int m=1;
        for(int i=2;i<=N;i++){
            for(int j=1;j<=i-1;j++){
                if(arr[i]>arr[j]){
                    if(table[i] < 1+table[j]){
                        table[i]=table[j]+1;
                    }
                }
            }
            if(table[i] > m)
                m=table[i];
        }
        cout<<m<<endl;
    }
    return 1;
}
