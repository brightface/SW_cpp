#include <iostream>
#include <fstream>
#include<cstring>



int main() {
    std::fstream is;
    int numTestcases;
    char answer[2000];
    int k=0;
    char s_temp[2000];
    is.open("input.txt");


    std::string a[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.",
                       "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    std::string b[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S",
                       "T", "U", "V", "W", "X", "Y", "Z", "_"};
    is >> numTestcases;
//    std::cout<<a[2];
    for (int i = 0; i < numTestcases; i++) {
        int cnt = 0;
        for (int j = 0; j < 2000; ++j) {
            is >> answer[j];
        }
        while(k<2000) {

            k=cnt;
            std::string temp;
            int first = 0;
            cnt += 1;
            if (answer[k] == '|') {
                if (first == 0) {
                    for (int j = 0; j < k; ++j) {

                        s_temp[j] = answer[j];

                    }

                    temp = s_temp;

                    for (int l = 0; l < 26; ++l) {

                        if (temp == a[l]) {
                            std::cout << b[l];
                            break;
                        }
                    }
                    s_temp[2000] = {0};
                    temp = "";
                    first = first + 1;
                    k++;
                }



                if (first == 1) {
                    if (answer[k] == '|') {
                        for (int j = k; j < cnt; ++j) {
                            {

                                s_temp[k] = answer[j];

                            }

                        }
                        temp = s_temp;
                        for (int l = 0; l < 26; ++l) {

                            if (temp == a[l]) {
                                std::cout << b[l];
                            }
                        }
                    }
                } else if (answer[k] == '#') {
                    std::cout << '_';
                } else if (answer[k] == 0)
                    break;


            }
        }
        std::cout << std::endl;


        return 0;
    }
}