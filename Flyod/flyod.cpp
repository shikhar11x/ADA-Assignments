#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

void floydWarshall(vector<vector<int>>& dist, int n){
    int updateCount=0;
    for(int k=0; k<n; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(dist[i][k] + dist[k][j]<dist[i][j]){
                    dist[i][j]=dist[i][k] + dist[k][j];
                    updateCount++;
                }
            }
        }
    }

    cout<<"Updates: " <<updateCount <<endl;
}

void floydAnalysis(){
    vector<int> inputSizes={5, 10, 15};

    for(int size : inputSizes){
        cout <<"======================= " <<size <<" =======================\n";

        vector<vector<int>> best;
        for(int i=0; i<size; i++){
            vector<int> row(size, 0);
            best.push_back(row);
        }
        cout <<"Best Case: ";
        floydWarshall(best, size);

  
        vector<vector<int>> average;
        for(int i=0; i<size; i++){
            vector<int> row(size);
            for(int j=0; j<size; j++){
                row[j]=rand() % 10 + 1;
            }
            average.push_back(row);
        }
        cout <<"Average Case: ";
        floydWarshall(average, size);


        vector<vector<int>> worst;
        for(int i=0; i<size; i++){
            vector<int> row(size, 100);
            row[i]=0;
            worst.push_back(row);
        }
        cout <<"Worst Case: ";
        floydWarshall(worst, size);

        cout <<"============================================================\n";
    }
}

int main(){
    floydAnalysis();
    return 0;
}
