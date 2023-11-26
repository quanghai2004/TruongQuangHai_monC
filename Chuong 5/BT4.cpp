#include <iostream>
using namespace std;

int main() {
    const double CALORIES_PER_MINUTE = 3.6; // Calo đốt cháy mỗi phút
    int minutes = 5; // Thời gian (phút)
    int maxMinutes = 30; // Thời gian tối đa (phút)

    cout << "Thời gian (phút)\tCalo đốt cháy" << endl;
    cout << "----------------------------------" << endl;

    while (minutes <= maxMinutes) {
        double caloriesBurned = CALORIES_PER_MINUTE * minutes;
        cout << minutes << "\t\t" << caloriesBurned << endl;
        minutes += 5; // Tăng thời gian lên 5 phút sau mỗi lần lặp
    }

    return 0;
}
