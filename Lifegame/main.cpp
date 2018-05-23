#include <iostream>
#include <fstream>


using namespace std;

int main() {
    int generation=0;
    ifstream in;
    int numTestcases;
    int rows;
    int cols;
    char ox;
    int cnt;

    in.open("input.txt");

    if(in.fail())
    {
        cout<<"Input file opeing is failed.\n"<<endl;
        exit(1);
    }
    in>>numTestcases;

    for (int i = 0; i < numTestcases; ++i)
    {
            in>>rows;
            in>>cols;
        char plate[rows][cols];

            in>>generation;

        for (int j = 0; j < rows; ++j) {
            for (int k = 0; k < cols; ++k) {
                in>>plate[j][k];
            }
        }


        for (int a = 0; a < rows; a++)
        {
            for (int b = 0; b < cols; b++)
            {
                 cnt = 0;

                   if(plate[a][b]=={"O"})
                   {
                    try {
                        if (plate[a - 1][b - 1] == {"O"})
                        {
                            throw plate[a-1][b-1];
                            cnt++;
                        }
                    }
                       catch(int e)
                       {

                       }
                       try {
                           if (plate[a ][b - 1] == {"O"})
                           {
                               throw plate[a][b-1];
                               cnt++;
                           }
                       }
                       catch(int e)
                       {

                       }try {
                           if (plate[a - 1][b + 1] == {"O"})
                           {
                               throw plate[a-1][b+1];
                               cnt++;
                           }
                       }
                       catch(int e)
                       {

                       }try {
                           if (plate[a ][b - 1] == {"O"})
                           {
                               throw plate[a][b-1];
                               cnt++;
                           }
                       }
                       catch(int e)
                       {

                       }try {
                           if (plate[a + 1][b - 1] == {"O"})
                           {
                               throw plate[a+1][b-1];
                               cnt++;
                           }
                       }
                       catch(int e)
                       {

                       }try {
                           if (plate[a + 1][b ] == {"O"})
                           {
                               throw plate[a+1][b];
                               cnt++;
                           }
                       }
                       catch(int e)
                       {

                       }try {
                           if (plate[a + 1][b + 1] == {"O"})
                           {
                               throw plate[a+1][b+1];
                               cnt++;
                           }
                       }
                       catch(int e)
                       {

                       }try {
                           if (plate[a ][b + 1] == {"O"})
                           {
                               throw plate[a][b+1];
                               cnt++;
                           }
                       }
                       catch(int e)
                       {

                       }



                   }

             }
//                    if (m + vert[k] < 0 || o + horz[k] < 0 || m + vert[k] >= rows || o + horz[k] >= cols)
//                    {
//                        continue;
//                    }
//                    if (result.at(m + vert[k]).at(o + horz[k]) == 'O')
//                    {
//                        cell++;
//                    }



    }

}



}