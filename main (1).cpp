#include <iostream>
#include <fstream>
#include <iomanip>
#include <Windows.h>
#include <conio.h>
using namespace std;

void Cracker(string Code,ofstream &out)  {



	if (Code == ".-")  out << "A";

	if (Code == "-...")  out << "B";

	if (Code == "-.-.")  out << "C";

	if (Code == "-..")  out << "D";

	if (Code == ".")  out << "E";

	if (Code == "..-.")  out << "F";

	if (Code == "--.")  out << "G";

	if (Code == "....")  out << "H";

	if (Code == "..")  out << "I";

	if (Code == ".---")  out << "J";

	if (Code == "-.-")  out << "K";

	if (Code == ".-..")  out << "L";

	if (Code == "--")  out << "M";

	if (Code == "-.")  out << "N";

	if (Code == "---")  out << "O";

	if (Code == ".--.")  out << "P";

	if (Code == "--.-")  out << "Q";

	if (Code == ".-.")  out << "R";

	if (Code == "...")  out << "S";

	if (Code == "-")  out << "T";

	if (Code == "..-")  out << "U";

	if (Code == "...-")  out << "V";

	if (Code == ".--")  out << "W";

	if (Code == "-..-")  out << "X";

	if (Code == "-.--")  out << "Y";

	if (Code == "--..")  out << "Z";

	if (Code ==  "/") 	out << " ";

	if (Code == ".----") out << "1";

	if (Code == "..---") out << "2";

	if (Code == "...--") out << "3";

	if (Code == "....-") out << "4";

	if (Code == ".....") out << "5";

	if (Code == "-....") out << "6";

	if (Code == "--...") out << "7";

	if (Code == "---..") out << "8";

	if (Code == "----.") out << "9";

	if (Code == "-----") out << "0";
}
void encrypt(string Code,ofstream &out)  {

	if (Code == "A")  out << ".- ";

	if (Code == "B")  out << "-... ";

	if (Code == "C")  out << "-.-. ";

	if (Code == "D")  out << "-.. ";

	if (Code == "E")  out << ". ";

	if (Code == "F")  out << "..-. ";

	if (Code == "G")  out << "--. ";

	if (Code == "H")  out << ".... ";

	if (Code == "I")  out << ".. ";

	if (Code == "J")  out << ".--- ";

	if (Code == "K")  out << "-.- ";

	if (Code == "L")  out << ".-.. ";

	if (Code == "M")  out << "-- ";

	if (Code == "N")  out << "-. ";

	if (Code == "O")  out << "--- ";

	if (Code == "P")  out << ".--. ";

	if (Code == "Q")  out << "--.- ";

	if (Code == "R")  out << ".-. ";

	if (Code == "S")  out << "... ";

	if (Code == "T")  out << "- ";

	if (Code == "U")  out << "..- ";

	if (Code == "V")  out << "...- ";

	if (Code == "W")  out << ".-- ";

	if (Code == "X")  out << "-..- ";

	if (Code == "Y")  out << "-.-- ";

	if (Code == "Z")  out << "--.. ";

	if (Code ==  " ") 	out << "/ ";

	if (Code == "1") out << ".---- ";

	if (Code == "2") out << "..--- ";

	if (Code == "3") out << "...-- ";

	if (Code == "4") out << "....- ";

	if (Code == "5") out << "..... ";

	if (Code == "6") out << "-.... ";

	if (Code == "7") out << "--... ";

	if (Code == "8") out << "---.. ";

	if (Code == "9") out << "----. ";

	if (Code == "0") out << "----- ";
}
void displaymenu()
{
    system("color A");
    cout<<setw(70)<<right<<"***CHUONG TRINH GIAI MA, MA HOA MA MORSE***"<<endl;
    cout<<setw(52)<<right<<"MENU\n";
    cout<<setw(55)<<right<<"NHAP LUA CHON\n";
    cout<<setw(54)<<right<<"1. GIAI MA\n";
    cout<<setw(53)<<right<<"2. MA HOA\n";
}
void LOAD()
{
    cout<<"\n\n\n";
	for (int j = 0; j < 15; j++)
	{
		cout <<setw(70)<<"LOADING";
		for (int i = 0; i < 3; i++)
		{
			Sleep(80);
			cout << ".";
		}
	}
	cout<<endl;
	cout<<setw(45)<<"DONE!!!";
    system ("pause");
}
int main ()   {
    displaymenu();
    int choice;
    cin>>choice;
    system("cls");
    switch(choice)
    {
    case 1:
        {
    cout<<setw(63)<<right<<"MO FILE CAN DECRYPT\n";
    system("pause");
    system("ENCRYPT.txt");
      LOAD();
    ifstream input;
    input.open("ENCRYPT.txt");
    string Word1="";
	getline(input , Word1);
	string Gtemp;
	ofstream out;
    out.open("CLEAR.txt");
	for (int i=0 ; i < Word1.length() ; i++ )
	{
		if (Word1[i] == ' ')
        {
            Cracker(Gtemp,out);
			Gtemp = "";
			continue;
		}
		Gtemp = Gtemp+Word1[i];
	}
	Cracker(Gtemp,out);
	out.close();
    system("cls");
    cout<<setw(63)<<right<<"MO FILE CLEAR\n";
    system("pause");
    system("CLEAR.txt");
        }
	break;
    case 2:
	//Ma hoa
	{
	cout<<setw(63)<<right<<"MO FILE CAN ENCRYPT\n";
    system("pause");
    system("DECRYPT.txt");
    LOAD();
	ifstream input1;
    input1.open("DECRYPT.txt");
    string Word2="";
	getline(input1,Word2);
	string Gtemp;
	ofstream out2;
	out2.open("CLEAR1.txt");
	Gtemp = "";
    for(int i=0;i<Word2.length();i++)
    {
        Gtemp=Word2[i];
        encrypt(Gtemp,out2);
        Gtemp = "";
        continue;
    }
    out2.close();
    system("cls");
    cout<<setw(63)<<right<<"MO FILE CLEAR\n";
    system("pause");
    system("CLEAR1.txt");
    int openfile;
    cin>>openfile;
	switch(openfile)
    {
        case 1: system("DECRYPT.txt");break;
        case 2: system("CLEAR1.txt");break;
    }
	}
	break;
    }
    cout<<setw(70)<<right<<"***THANKS FOR USING OUR SERVICE***";
}



