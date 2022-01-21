#include <fstream>
#include <string>
#include <iostream>
#include <thread>
#include <Windows.h>

#include "../Headers/files.h"
#include "../Headers/player.h"

using namespace std;

void Files::CheckFile(string filepath)
{

    ifstream file(filepath, ios_base::in);

    if (file.good())
    {
        cout << "[Files] " << "File exists" << endl;
        file.close();
    }
    else if (!file.good())
    {
        ofstream file(filepath, ios_base::out);
        file.close();
        cout << "[Files] " << "File has been made in : " << filepath << endl;
    }

    cout << "[Files] " << "File Check succeeded\n" << endl;
}

void Files::SaveGame()
{
    cout << "[Files] " << "Saving game..." << endl;
    PlayerClass PlayerObj;

    string username = PlayerObj.player.username;
    int hp = PlayerObj.player.hp;
    int money = PlayerObj.player.money;
    cout << "[Files] " << "Saved player data to variables." << endl;

    cout << "[Files] " << "Started file check." << endl;
    thread checkfile(CheckFile, "Data/PlayerData");
    checkfile.join();

    ofstream file;
    file.open("Data/PlayerData", ios_base::out);
    cout << "[Files] " << "Opened file." << endl;

    file << username << endl << hp << endl << money;
    file.close();

    cout << "[Files] " << "Game has been saved, File closed." << endl;
    cin.sync();
    cin.clear();

    cin.get();
}