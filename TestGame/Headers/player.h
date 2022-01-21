#include <string>

using namespace std;

class PlayerClass
{
public:
    struct Player
    {
        string username;
        int hp{ 100 };
        int money{ 500 };
    };
    static void RegisterPlayer();

    Player player;
};