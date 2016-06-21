#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main() {
	//code
	int T,i,length,j,temp;
    int start,maxlength;
	char str[1000];
	cin>>T;
	while(T--){
        start=0;
        maxlength=1;
	    cin>>str;
	    int size = strlen(str);
	    vector<vector<int>> dp(size,vector<int>(size,0));
        
	    for(i=0;i<size;i++)
	        dp[i][i]=1;
        
        for(i=0;i<size-1;i++){
            if(str[i]==str[i+1]){
                dp[i][i+1]=2;
                if(2 > maxlength)
                start=i;
                maxlength=2;
            }
            else{
                dp[i][i+1]=0;
            }
        }
        
	    for(length=3;length<=size;length++){
    
            for(i=0;i< size-length+1;i++){
               temp=i+length-1;
               if(dp[i+1][temp-1]!=0 && str[i] == str[temp]){
                   dp[i][temp]=length;
                   if(length > maxlength){
                       maxlength=length;
                       start=i;
                    }
               }
            }
        }
        for(i=start;i<start+maxlength;i++){
            cout<<str[i];
        }
        cout<<endl;
	}
	return 0;
}
