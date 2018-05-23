

#include <iostream>
#include <fstream>

int main(){

    std::ifstream fin;
    fin.open("input.txt");

    int testCase;

    fin >> testCase;


    for(int i = 0; i < testCase; i++){
        unsigned int arr1[132] = {};
        unsigned int arr2[132] = {};
        unsigned int mulA[132] = {};
        unsigned int plusA[132] = {};
        unsigned int minusA[132] = {};
        int mulCnt = 0;
        int plusCnt = 0;
        int minusCnt = 0;
        int num;
        int data1;
        int data2;

        fin >> data1;
        for(int j = 0; j < data1; j++){
            fin >> num;
            arr1[num] = 1;
        }
        fin >> data2;
        for(int j = 0; j < data2; j++){
            fin >> num;
            arr2[num] = 1;
        }
        for(int j = 0; j < 132; j++){
            mulA[j] = arr1[j] & arr2[j];
            if(mulA[j] == 1){
                mulCnt += 1;
            }
            plusA[j] = arr1[j] | arr2[j];
            if(plusA[j] == 1){
                plusCnt += 1;
            }
            minusA[j] = arr1[j] - arr2[j];
            if(minusA[j] == 1){
                minusCnt += 1;
            }
        }
        std::cout << mulCnt << " ";
        for(int j = 0; j < 132; j++){
            if(mulA[j] == 1) {
                std::cout << j << " ";
            }
        }
        std::cout << std::endl;
        std::cout << plusCnt << " ";
        for(int j = 0; j < 132; j++){
            if(plusA[j] == 1) {
                std::cout << j << " ";
            }
        }
        std::cout << std::endl;
        std::cout << minusCnt << " ";
        for(int j = 0; j < 132; j++){
            if(minusA[j] == 1) {
                std::cout << j << " ";
            }
        }
        std::cout << std::endl;
    }
    fin.close();
    return 0;
}
