// Chương trình này tính toán số đội bóng đá
// mà một giải trẻ có thể tạo ra từ số lượng
// người chơi có sẵn. Xác thực đầu vào được thể hiện
// với các vòng lặp while.
#include <iostream>
using namespace std;

int main()
{
    // Hằng số cho người chơi tối thiểu và tối đa
    const int MIN_PLAYERS = 9,
              MAX_PLAYERS = 15;
    // Biến
    int players,
        teamPlayers,
        numTeams,
        leftOver;
    // Lấy số lượng người chơi mỗi đội.
    cout << "How many players do you wish per team?";
    cin >> teamPlayers; 
    cout << "How many players are available?";
    cin >> players;
    // Xác thực đầu vào.
    while (teamPlayers < MIN_PLAYERS || teamPlayers > MAX_PLAYERS)
    {
        // Giải thích lỗi.
        cout << "You should have at least " << MIN_PLAYERS
        << " but no more than " << MAX_PLAYERS << " per team.\n";
        // Lấy lại dữ liệu đầu vào.
        cout << "How many players do you wish per team? ";
        cin >> teamPlayers;
    }
    // Lấy số lượng người chơi hiện có.
    cout << "How many players are available? ";
    cin >> players;
    // Xác thực đầu vào.
    while (players <= 0)
    {
    // Lấy lại dữ liệu đầu vào.
    cout << "Please enter 0 or greater: ";
    cin >> players;
    }
    // Tính số đội.
        numTeams = players / teamPlayers;

        leftOver = players % teamPlayers;

        cout << "There will be " << numTeams << "teams with"
             << leftOver << " players left over.\n";
        
    
    return 0;

}