#include<iostream>
#include<fstream>

using namespace std;

void PrintDiamond(int k);

int main(void){
    int numtestCase;
    ifstream is;
    is.open("input.txt");
    is >> numtestCase;
    while(numtestCase--){
        int k;
        is >> k;
        PrintDiamond(k);
    }
    is.close();
    return 0;

}

void PrintDiamond(int k){
    int numofPlus =1;
    for (int row = 0; row < k; ++row) { //이건 매우 ㅅㅌ 알고리즘;(미친게 아니다)
        for(int j=0; j<k; ++j){
            char c;
            if(j< (k-numofPlus)/2 || j > ((k - numofPlus)/2 + numofPlus) -1 )
                c='*'; //문자형 출력
            else
                c='+'; // 문자형 출력
            std::cout<<c;
        }
        (row < k / 2 )? numofPlus +=2 : numofPlus -=2; //로우에 따라 나뉘는 상타 for문
        std::cout << std::endl;
    }
}