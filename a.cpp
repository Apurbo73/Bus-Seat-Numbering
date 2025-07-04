#include <iostream>
using namespace std;

string classifySeat(int seat) {
    if (seat >= 1 && seat <= 10)
        return "Lower Double";
    else if (seat >= 11 && seat <= 15)
        return "Lower Single";
    else if (seat >= 16 && seat <= 25)
        return "Upper Double";
    else if (seat >= 26 && seat <= 30)
        return "Upper Single";
    else
        return "Invalid Seat"; 
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int seat;
        cin >> seat;
        cout << classifySeat(seat) << endl;
    }

    return 0;
}
