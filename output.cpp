#include <math.h>
#include "Definition.h"

using namespace std;

void output(int Time, int QueueNum, int State) {
	cout << "Time is " << Time << endl;
	cout << "OFFDUTY=";
	if (State == 0) {
		cout << "Y" << endl;
	}
	else {
		cout << "N" << endl;
	}
	for (int i = 1; i <= 8; ++i) {
		cout << "No." << i << " Windows:"
			<< "State = " << windows[i].State;
		if (windows[i].State == 5) {
			continue;
		}
		cout << "CurNum = " << windows[i].CurNum
			<< "CurCustTime = " << windows[i].CurCustTime
			<< "WinListCustCount = " << windows[i].CurNum
			<< endl;
	}
	cout << "ListLines = " << ceil(QueueNum / MaxCustSingleLine) << endl;
	cout << "ListCustCount = " << QueueNum << endl;
}