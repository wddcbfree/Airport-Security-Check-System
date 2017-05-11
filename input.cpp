#include "Definition.h"

using namespace std;

void input(int* Time, int* CurTimeNumOfCustCome, string &CurTimeRequestOfWindows, int* state) {
	if (*state == 2) return;
	static string RequestOfWindows(MAXWINDOWS, '0');
	static int NumOfCustCome = 0, ProcessTime = 0;
	if (ProcessTime < *Time) {
		char ch;
		NumOfCustCome = 0;
		RequestOfWindows = (MAXWINDOWS, '0');
		cin >> ch >> ch >> ProcessTime;
		string str;
		cin >> str;
		char sta = '0';
		for (auto iter : str) {
			switch (iter) {
			case 'G': ++NumOfCustCome; break;
			case 'C': sta = 'C'; break;
			case 'R': sta = 'R'; break;
			case 'Q': *state = 2;
			}
			if (isdigit(iter)) {
				RequestOfWindows[iter - '0'] = sta;
			}
		}

	}
	if (ProcessTime == *Time) {
		CurTimeRequestOfWindows = RequestOfWindows;
		*CurTimeNumOfCustCome = NumOfCustCome;
	}
	return;
}