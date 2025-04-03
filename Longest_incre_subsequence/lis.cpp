#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;

int lis(vector<int>& arr) {
    int n = arr.size();
    vector<int> dp(n, 1);
    int stepCount = 0;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++) {
            if (arr[i]>arr[j]) {
                dp[i]=max(dp[i],dp[j]+1);
                stepCount++;
            }
        }
    }
    int maxLength = *max_element(dp.begin(), dp.end());
    cout<<"Steps: "<<stepCount<<endl;
    cout<<"Max Length: "<<maxLength<<endl;
    return maxLength;
}
 void lisAnalysis() {
    vector<int> inputSizes = {5, 10, 15, 20, 25};
    for(int size : inputSizes){

        cout<<"=========================== "<<size<<" ==========================="<<endl;
        vector<int> worst(size);
        for(int i=0;i<size;i++){
            worst[i]=i+1;
        }
        cout<<"worst Case: ";
        lis(worst);

        vector<int> average(size);
        for(int i=0;i<size;i++){
            average[i]=rand()%100;
        }
        cout<<"Average Case: ";
        lis(average);

        vector<int> best(size);
        for(int i=0;i<size;i++){
            best[i]=size-i;
        }
        cout<<"best Case: ";
        lis(best);

        cout<<"==================================================================="<<endl;

    }
    cout<<endl;
}
int main() {
    lisAnalysis();
    return 0;
}