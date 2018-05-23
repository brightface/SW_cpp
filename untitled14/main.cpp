#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

class crossPuzzle
{
private:
     int row;
     int col;
    vector<vector<char> > puzzleArray;

    vector<int> vert;
    vector<int> horz;
public:
    crossPuzzle(const  int row, const  int col);
    void setValue(const  int row, const  int col, const char value);
    int search(const  int row, const  int col, string str);
    void toString();
};

crossPuzzle::crossPuzzle(const unsigned int row, const unsigned int col)
{
    this->row = row;
    this->col = col;
    puzzleArray = vector<vector<char> >(row, vector<char>(col, '1'));
    int verts[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };
    int horzs[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
    vert = vector<int>(verts, verts + sizeof(verts) / sizeof(int));
    horz = vector<int>(horzs, horzs + sizeof(horzs) / sizeof(int));

}

void crossPuzzle::setValue(const unsigned int row, const unsigned int col, const char value)
{
    puzzleArray[row][col] = value;
}

int crossPuzzle::search(const unsigned int row, const unsigned int col, string str)
{
    int direction = -1;
    if (puzzleArray[row][col] == str[0])
    {
        for (int k = 0; k < 8; k++)
        {
            size_t length = 0;
            while (str[length] != NULL)
            {
                length++;
            }
            for (size_t l = 1; l < length; l++)
            {
                if (row + vert[k] * l < 0 || col + horz[k] * l < 0 || row + vert[k] * l >= this->row || col + horz[k] * l >= this->col)
                {
                    break;
                }
                if (puzzleArray[row + vert[k] * l][col + horz[k] * l] != str[l])
                {
                    break;
                }
                if (l == length - 1)
                {
                    direction = k;
                }
            }
        }
    }
    return direction;
}

void crossPuzzle::toString()
{
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << puzzleArray[i][j];
        }
        cout << endl;
    }
}


int main()
{
    ifstream in;
    int numTestCases;
    in.open("input.txt");

    in >> numTestCases;
    for (int i = 0; i < numTestCases; i++)
    {
         int rows;
         int cols;
         int row;
         int col;
        char value;
         int Count;
        int direction;
        string str;
        in >> rows >> cols;
        crossPuzzle puzzle(rows, cols);
        for (size_t j = 0; j < rows; j++)
        {
            for (size_t k = 0; k < cols; k++)
            {
                in >> value;
                puzzle.setValue(j, k, value);
            }
        }
        in >> Count;
        for (size_t x = 0; x < Count; x++)
        {
            in >> str;
            for (size_t r = 0; r < rows; r++)
            {
                for (size_t c = 0; c < cols; c++)
                {
                    direction = puzzle.search(r, c, str);
                    if (direction != -1)
                    {
                        row = r + 1;
                        col = c + 1;
                        r = rows;
                        break;
                    }
                }
            }
            if (direction == -1)
            {
                cout << direction << endl;
                continue;
            }
            cout << row << " " << col << " " << direction << endl;
        }
    }
}