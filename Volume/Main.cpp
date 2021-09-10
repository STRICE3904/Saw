#include <iostream>
#include <string>

using namespace std;

void V();
void Intro();
void RoomsOn();
void RoomsTw();
void RoomsTH();
char awn;

int main()
{
	Intro();
	cout << "Y or N?:";
	cin >> awn;
	if (awn == 'Y')
	{
		V();
	}
	else
	{
		cout << "\n\nAll awnsers are final. Their deaths are secured. You could have saved so much more lives.\n\n";
		cout << "\n\nHowever since you chose to do nothing your not responisble for any deaths.\n\n";
		cout << "\n\nDoing nothing means you didn't put one life over another and your not at fault.\n\n";
		cout << "\n\nHowever you may not have considered where they are located. Hundreds have died.\n\n";
	}
	
	
	return 0;
}

void Intro()
{
	cout << "\n\nWould you like to play a game?\n\n";
	cout << "\n\nThere are 3 people rigged with explosives.\n\n" << "\n\nOn each person there is one bomb\n\n";
	cout << "\n\nIf you play only one blows up. If no then only one dosn't.\n\n";
}

void V()
{
	cout << "\n\nGood. It is now up to you who dies and who lives\n\n";
	cout << "\n\nIf you choose the first two to live then the last one dies.\n\n" << endl << endl;
	RoomsOn();
	cout << "L or D?:";
	cin >> awn;
	if (awn == 'L')
	{
		cout << "So you think the life of a doctor is worth it?" << endl;
		cout << "Someone who takes money from people for wrong diagnossis and dont care since it pays well?" << endl;
		cout << "Next victem" << endl << endl;
		RoomsTw();
	}
	else
	{
		cout << "So the life of a doctor is meaningless?" << endl;
		cout << "For all you know the next two people are serial killers and yet you chose to kill the first option." << endl;
		cout << "She is now dead and the other two get to run free.\nHope you are happy with your choice" << endl;
	}
}

void RoomsTH()
{
	cout << "\nRoom number 3\n" << "\nHuman: Male\n" << "\nAge: 10\n" << "\nOcupation: Student\n" << "\nCurrent Location: Class" << endl << endl;
	cout << "This is who you chose to kill. Are you happy with your decision?\nCause of your indecisiveness a child died.\n" << endl;
	cout << "\n\nNot only did he die but so did about 30 classmates.\n\nHe will be blamed by the news as a torubled child and the families will be devistated.\n\n";

}

void RoomsOn()
{
	cout << "\nRoom number 1\n";
	cout << "\nHuman: Female\n";
	cout << "\nAge: 32\n";
	cout << "\nOcupation: Doctor\n";
	cout << "\nCurrent Locations: Home\n\n";
}

void RoomsTw()
{
	cout << "\nBomb 2\n";
	cout << "\nDog: Female\n";
	cout << "\nAge: 6\n";
	cout << "\nOwner: Unknown\n";
	cout << "\nCurrent Location:Busy New York City street.\n\n";
	cout << "\nL or D?:\n";
	cin >> awn;
	if (awn == 'L')
	{
		cout << "\nYou just saved the life of a mut.\nWith no owner of pourpos.\nAnd yet potentialy saving hundereds of lives.\n";
		cout << "Final victem";
		RoomsTH();
	}
	else
	{
		cout << "\nEven though the dog was of no value you must have overlooked the location.\n";
		cout << "\nHundereds of people have now died.\nDon't worry you will be able to see the aftermath of your choice on the news.\n";
	}
}