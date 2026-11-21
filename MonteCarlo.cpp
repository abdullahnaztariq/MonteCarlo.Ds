#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int choice;

    do {
        cout << "\n===== MONTE CARLO METHOD =====";
        cout << "\n1. Estimate Pi";
        cout << "\n2. Dice Simulation";
        cout << "\n3. Coin Toss Simulation";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        if (choice == 1) {
            int inside = 0;
            int total = 10000;

            for (int i = 0; i < total; i++) {
                double x = (double)rand() / RAND_MAX;
                double y = (double)rand() / RAND_MAX;
                if ((x * x) + (y * y) <= 1) {
                    inside++;
                }
            }

            double pi = 4.0 * inside / total;
            cout << "\nEstimated Pi = " << pi << endl;
        }
        else if (choice == 2) {
            int six = 0;
            int rolls = 1000;

            for (int i = 0; i < rolls; i++) {
                int dice = rand() % 6 + 1;
                if (dice == 6) {
                    six++;
                }
            }

            double probability = (double)six / rolls;
            cout << "\nProbability of getting 6 = " << probability << endl;
        }
        else if (choice == 3) {
            int heads = 0;
            int tosses = 1000;

            for (int i = 0; i < tosses; i++) {
                int coin = rand() % 2;
                if (coin == 1) {
                    heads++;
                }
            }

            double probability = (double)heads / tosses;
            cout << "\nProbability of Heads = " << probability << endl;
        }
        else if (choice == 4) {
            cout << "\nProgram Ended\n";
        }
        else {
            cout << "\nInvalid Choice\n";
        }

    } while (choice != 4);

    return 0;
}
