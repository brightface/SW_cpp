#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct procession
{
    int row;
    int col;

    vector<int> process;
};

int main() {
    fstream is;
    int numTestcases;
    int tmp;
    is.open("input.txt");

    is>>numTestcases;

    for (int i = 0; i < numTestcases; ++i)
    {
        procession p1;
        procession p2;
        procession MulOfp;
        is>>p1.row;
        is>>p1.col;
        is>>p2.col;

        p2.row=p1.col;
        MulOfp.row = p1.row;
        MulOfp.col = p2.col;

        for (int j = 0; j < p1.row * p1.col; ++j) {
            is>>tmp;
            p1.process.push_back(tmp);
        }

        for (int k = 0; k < p2.row * p2.col; ++k) {
            is>>tmp;
            p2.process.push_back(tmp);
        }

        int id=0;
        for (int l = 0; l < p1.row; ++l) {

            int *p = new int[p2.col];
            for (int j = 0; j < p2.col; ++j) {
                p[j] = 0;
            }

            for (int k = 0; k < p1.col * p2.col; ++k) {
                p[k % p2.col] += p1.process[id] * p2.process[k];
                if (k % p2.col == p2.col - 1) {
                    id++;
                }
            }

            for (int m = 0; m < p2.col; ++m) {
                MulOfp.process.push_back(p[m]);
            }
        
        


        }

        for (int n = 0; n < p1.row * p2.col; ++n) {
            cout<<MulOfp.process[n]<<" ";
            if(n%p2.col == p2.col-1)
            {
                cout << endl;
            }
        }

    }

}
