#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int T;
    int n1,n2,current=0;
    cin>>T;
    while(T--){
        cin>>n1;
        int arr1[n1];
        for(int i=0;i<n1;cin>>arr1[i++]);
        cin>>n2;
        int arr2[n2];
        for(int i=0;i<n2;cin>>arr2[i++]);
        int table[n2];
        for(int i=0;i<n2;table[i++]=0);
        
        for(int i=0;i<n1;i++){
            current=0;
            for(int j=0;j<n2;j++){
                if(arr1[i] == arr2[j]){
                    if(current+1 > table[j]){
                        table[j]=current+1;
                    }
                }
                if(arr1[i] > arr2[j]){
                    if(table[j] > current){
                        current=table[j];
                    }
                }
            }
        }
        cout<<*max_element(table,table+n2)<<endl;
    }
    return 1;
}
