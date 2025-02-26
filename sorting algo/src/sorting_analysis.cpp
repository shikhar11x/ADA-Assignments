#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int bubbleSort(vector<int> arr){
    int stepCount=0;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size()-i-1;j++){
            stepCount++;
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                stepCount+=3;
            }
        }
    }
    return stepCount;
}

int bubbleSortDescending(vector<int> arr){
    int stepCount=0;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size()-i-1;j++){
            stepCount++;
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                stepCount+=3;
            }
        }
    }
    return stepCount;
}

int selectionSort(vector<int> arr){
    int stepCount=0;
    for(int i=0;i<arr.size();i++){
        int temp=i;
        for(int j=i+1;j<arr.size();j++){
            stepCount++;
            if(arr[j]<arr[temp]){
                temp=j;
            }
        }
        if (temp != i) {
            swap(arr[i],arr[temp]);
            stepCount+=3; 
        }
    }
    return stepCount;
}

int selectionSortDescending(vector<int> arr){
    int stepCount=0;
    for(int i=0;i<arr.size();i++){
        int temp=i;
        for(int j=i+1;j<arr.size();j++){
            stepCount++;
            if(arr[j]>arr[temp]){
                temp=j;
            }
        }
        if (temp != i) {
            swap(arr[i],arr[temp]);
            stepCount+=3; 
        }
    }
    return stepCount;
}

int insertionSort(vector<int> arr){
    int stepCount=0;
    for(int i=1;i<arr.size();i++){
        int temp=arr[i];stepCount++;
        int j=i-1;
        while(j>=0 && arr[j]>temp){stepCount++;
            arr[j+1]=arr[j];
            stepCount++;
            j--;
        }
        arr[j+1]=temp;
        stepCount++;
    }
    return stepCount;
}

int insertionSortDescending(vector<int> arr){
    int stepCount=0;
    for(int i=1;i<arr.size();i++){
        int temp=arr[i];stepCount++;
        int j=i-1;
        while(j>=0 && arr[j]<temp){stepCount++;
            arr[j+1]=arr[j];
            stepCount++;
            j--;
        }
        arr[j+1]=temp;
        stepCount++;
    }
    return stepCount;
}

void AscendingAnalysis(){
    vector<int> inputSizes={10,20,30,40,50};
    srand(time(0));
    for(int i=0;i<inputSizes.size();i++){
        int size=inputSizes[i];
        vector<int> Sortedsample(size);
        vector<int> Randomsamples(size);
        vector<int> Reversedsamples(size);
        for(int j=0;j<size;j++){
            Sortedsample[j]=j+1;
            Randomsamples[j]=rand()%size+1;
            Reversedsamples[j]=size-j;
        }

        cout<<"|||||||||||||||||||||||||||| Input Size: "<<inputSizes[i]<<"||||||||||||||||||||||||||||"<<endl<<endl;
        cout<<"---------Bubble Sort---------"<<endl;
        vector<int> temp=Sortedsample;
        vector<int> temp1=Randomsamples;
        vector<int> temp2=Reversedsamples;
        cout<<"Best Case= "<<bubbleSort(temp)<<" steps"<<endl;
        cout<<"Average Case= "<<bubbleSort(temp1)<<" steps"<<endl;
        cout<<"Worst Case= "<<bubbleSort(temp2)<<" steps"<<endl;
        cout<<"---------Selection Sort---------"<<endl;
        vector<int> temp3=Sortedsample;
        vector<int> temp4=Randomsamples;
        vector<int> temp5=Reversedsamples;
        cout<<"Best Case= "<<selectionSort(temp3)<<" steps"<<endl;
        cout<<"Average Case= "<<selectionSort(temp4)<<" steps"<<endl;
        cout<<"Worst Case= "<<selectionSort(temp5)<<" steps"<<endl;
        cout<<"---------Insertion Sort---------"<<endl;
        vector<int> temp6=Sortedsample;
        vector<int> temp7=Randomsamples;
        vector<int> temp8=Reversedsamples;
        cout<<"Best Case= "<<insertionSort(temp6)<<" steps"<<endl;
        cout<<"Average Case= "<<insertionSort(temp7)<<" steps"<<endl;
        cout<<"Worst Case= "<<insertionSort(temp8)<<" steps"<<endl<<endl;
        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl<<endl;
    }
}

void DescendingAnalysis(){
    vector<int> inputSizes={10,20,30,40,50};
    srand(time(0));
    for(int i=0;i<inputSizes.size();i++){
        int size=inputSizes[i];
        vector<int> Sortedsample(size);
        vector<int> Randomsamples(size);
        vector<int> Reversedsamples(size);
        for(int j=0;j<size;j++){
            Sortedsample[j]=size-j;
            Randomsamples[j]=rand()%size+1;
            Reversedsamples[j]=j+1;
        }

        cout<<"|||||||||||||||||||||||||||| Input Size: "<<inputSizes[i]<<"||||||||||||||||||||||||||||"<<endl<<endl;
        cout<<"---------Bubble Sort---------"<<endl;
        vector<int> temp=Sortedsample;
        vector<int> temp1=Randomsamples;
        vector<int> temp2=Reversedsamples;
        cout<<"Best Case= "<<bubbleSortDescending(temp)<<" steps"<<endl;
        cout<<"Average Case= "<<bubbleSortDescending(temp1)<<" steps"<<endl;
        cout<<"Worst Case= "<<bubbleSortDescending(temp2)<<" steps"<<endl;
        cout<<"---------Selection Sort---------"<<endl;
        vector<int> temp3=Sortedsample;
        vector<int> temp4=Randomsamples;
        vector<int> temp5=Reversedsamples;
        cout<<"Best Case= "<<selectionSortDescending(temp3)<<" steps"<<endl;
        cout<<"Average Case= "<<selectionSortDescending(temp4)<<" steps"<<endl;
        cout<<"Worst Case= "<<selectionSortDescending(temp5)<<" steps"<<endl;
        cout<<"---------Insertion Sort---------"<<endl;
        vector<int> temp6=Sortedsample;
        vector<int> temp7=Randomsamples;
        vector<int> temp8=Reversedsamples;
        cout<<"Best Case= "<<insertionSortDescending(temp6)<<" steps"<<endl;
        cout<<"Average Case= "<<insertionSortDescending(temp7)<<" steps"<<endl;
        cout<<"Worst Case= "<<insertionSortDescending(temp8)<<" steps"<<endl<<endl;
        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl<<endl;
    }
}
int main(){
    cout<<"!!!!!!!!!!!!!!!!!!!!!Ascending Analysis!!!!!!!!!!!!!!!!!!!!!"<<endl;
    AscendingAnalysis();
    cout<<"!!!!!!!!!!!!!!!!!!!!!Descending Analysis!!!!!!!!!!!!!!!!!!!!!"<<endl;
    DescendingAnalysis();
    return 0;
}

