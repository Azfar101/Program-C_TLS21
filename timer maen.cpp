#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
using namespace std;

int minutes = 0;
int seconds = 0;
int maxtime;

void displayTimer()
{
	system("cls");
	cout << "		 TIMER		 \n";
	cout << maxtime - minutes << " min | ";
	cout << seconds << " sec |" << endl;
}

void timer()
{
	while (true) {
		displayTimer();

		Sleep(1);
		seconds++;

		if (seconds == 60) {
			minutes++;
			if (maxtime - minutes == 0) {
                system("c:\\windows\\system32\\shutdown /l"); //to shutdown
			}
			seconds = 0;
		}
	}
}

int main()
{
    cout << R"(
             A_A
            ('w')  <(Mau maen berapa menit?)
             <V\
            _/"\_
            )" << '\n';
    cin>>maxtime;
    timer();
    return 0;
}