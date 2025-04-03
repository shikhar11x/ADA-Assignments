#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int lcs(string s1,string s2){
    int n=s1.length();
    int m=s2.length();
    vector<vector<int>> dp(n + 1,vector<int>(m + 1,0));
    int stepCount=0;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            stepCount++;
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1] + 1;
            } else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    cout<<"Steps: "<<stepCount<< endl;
    return dp[n][m];
}

void analyzeLCS(){
    vector<int> inputSizes ={5,10,15,20,25};
    for(int size : inputSizes){
        string s1(size,'A'+rand()%26);
        string s2(size,'A'+rand()%26);
        cout<<"Input Size: "<<size<<" -> ";
        lcs(s1,s2);
    }
}

int main(){
    analyzeLCS();
    return 0;
}