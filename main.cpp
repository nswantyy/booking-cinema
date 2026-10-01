#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()

{
	char cinemaplace[3][5] =
	{
		{ '.', '.', '.', '.', '.'},
		{ '.', '.', '.', '.', '.'},
		{ '.', '.', '.', '.', '.'}
	};
	int choice;
	cout << "There you can chose place in cinema which you want" << endl;
	cout << "You have three option let show it you" << endl;
	do {
		cout << "Look at available seats - 1" << endl;
		cout << "Chose seats - 2" << endl;
		cout << "Exit - 3. Please print your choice ";
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "There available seats" << endl;
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 5; j++)   {
					cout << cinemaplace[i][j] << " ";
				}
				cout << endl;
			}
			break;
		case 2:
			cout << "chose your seats. Please print number of row ";
			int row;
			cin >> row;
			cout << "And number of column ";
			int column;
			cin >> column;
			cinemaplace[row-1][column-1] = 'X';
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 5; j++) {
					cout << cinemaplace[i][j] << " ";
				}
				cout << endl;
			}
			break;
		case 3:
			cout << "Goodbye";
			break;
		default:
			cout << "Wrong choise";
		}
	}
		while (choice != 3);


}