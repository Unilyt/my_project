#include "header.h"

void show_arr(char** arr1) {
	for (int i = 0; i < size_arr; i++) {
		for (int j = 0; j < size_arr; j++) {
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}
}
void ground(char** arr) {

	//air and ground
	for (int i = 0; i < size_arr; i++) {
		for (int j = 0; j < size_arr; j++) {
			arr[i][j] = '0';
			if (i == 20) {
				arr[i][j] = '-';
			}
		}
	}
}
int player_next1(char** arr, int* hod) {
	cout << "enter the coordinates of the move: " << endl;
	
	while (true){
		if (arr[hod[0]][hod[1]] == '-') {
			arr[hod[0]][hod[1]] = 'X';
		}
		else if (arr[hod[0]][hod[1]] == '0') {
			if (arr[hod[0]][hod[1] - 1] != 'X') {
				arr[hod[0]][hod[1]] = 'X';
			}
			else {
				cout << "error";
				
			}
		}
	}
}
int player_next2(char** arr, int* hod) {
	cout << "enter the coordinates of the move: " << endl;
	cin >> hod[0] >> hod[1];

	while (true) {
		if (arr[hod[0]][hod[1]] == '-') {
			arr[hod[0]][hod[1]] = '@';
		}
		else if (arr[hod[0]][hod[1]] == '0') {
			if (arr[hod[0]][hod[1] - 1] != '@') {
				arr[hod[0]][hod[1]] = '@';
			}
			else {
				cout << "error";
				cin >> hod[0] >> hod[1];
			}
		}
	}
}