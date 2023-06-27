#include "header.h"

int main()
{
    char crestic = 'x';
    char nolic = '@';
    int* hod = new int[2];
    char** ground1 = new char* [size_arr];
    for (int i = 0; i < size_arr; i++) {
        ground1[i] = new char[i + 1];
    }
    ground(ground1);
    int count = 1;
    while (true) {
        show_arr(ground1);
        while (true)
        {
            cin >> hod[0] >> hod[1];
            player_next1(ground1, hod);
            if (ground1[hod[0]][hod[1]] != '0' && ground1[hod[0]][hod[1]] != '-') {
                break;
            }
        }
        //проверка для хода на 0 столбец
        if (hod[0] == 0) {
            for (int i = 0; i < 3; i++) {
                if (ground1[hod[0]+i][hod[1]] == 'X') {
                    count++;
                }
                else if (count == 4) {
                    cout << "player - X, Win!";
                    return 0;
                }
            }
            count = 1;
        }
        //проверка для хода на последний столбец
        else if (hod[0] == 20) {
            for (int i = 0; i < 3; i++) {
                if (ground1[hod[0]- i][hod[1]] == 'X') {
                    count++;
                }
                else if (count == 4) {
                    cout << "player - X, Win!";
                    return 0;
                }
            }
            count = 1;
            }
        //середний столбец
        else {
            for (int i = 0; i < 3; i++) {
                if (ground1[hod[0]- i][hod[1]] == 'X') {
                    count++;
                    if (hod[0] - i == 0) {
                        if(count == 4){
                            cout << "player - X, Win!";
                            return 0;
                        }
                        else {
                            for (int i = 0; i < 3; i++) {
                                if (ground1[hod[0] + i][hod[1]] == 'X') {
                                    count++;
                                }
                            if (count == 4) {
                                cout << "player - X, Win!";
                                return 0;
                            }
                        }
                    
                    }
                    else if (hod[0] + i == 20) {

                    }

                }
                    
            }
        }
    }
}