#include <iostream>

using namespace std;

void printMatrix(int[][3]);

int main()
{
	int scores[5][3] = { {86, 75, 95}, {67, 88, 93}, {95, 79, 83}, {86, 98, 82}, {74, 68, 90} };

	for (int i = 0; i < 5; i++) {
		for (int n = 0; n < 3; n++) {
			cout << scores[i][n] << " ";
		}
		cout << endl;
	}

	cout << endl;
	printMatrix(scores);

	cout << endl;
	int average = 0;
	for (int i = 0; i < 5; i++) {
		for (int n = 0; n < 3; n++) {
			average += scores[i][n];
		}
	}
	cout << average / 15;

	cout << "\n\n";
	for (int i = 0; i < 5; i++) {
		for (int n = 0; n < 3; n++) {
			if (scores[i][n] >= 90) {
				cout << "HONORS: " << scores[i][n] << endl;
			}
		}
	}



}

void printMatrix(int arr[][3]) {
	for (int i = 0; i < 5; i++) {
		for (int n = 0; n < 3; n++) {
			cout << arr[i][n] << " ";
		}
		cout << endl;
	}
}
