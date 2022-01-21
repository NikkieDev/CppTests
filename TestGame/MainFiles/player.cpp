#include <string>
#include <fstream>
#include <iostream>

#include "../Headers/player.h"

using namespace std;

void PlayerClass::RegisterPlayer()
{
	Player player;

	cout << "NEW PLAYER" << endl << "===============================" << endl;

	cout << "username: ";
	getline(cin, player.username);
	cin.sync();

	while (player.username == "")
	{
		cout << "username may not be blank!" << endl;
		cout << "username: ";
		getline(cin, player.username);
		cin.sync();
	}

	ofstream DataFile;
	DataFile.open("Data/PlayerData", ios_base::out);

	DataFile << player.username << ", " << player.hp << ", " << player.money << endl;
	DataFile << "Username, HP, Money" << endl;

	DataFile.close();

	cout << endl << "Reopen the program to go back to the main menu." << endl;

	cin.get();
	cin.sync();
}