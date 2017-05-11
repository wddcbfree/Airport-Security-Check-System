#include "Definition.h"

using namespace std;

struct WindowsPort windows[MAXWINDOWS] = { 0 };
int MaxCustSingleLine, MaxLines, MaxSeqLen, MinTimeLen, MaxTimeLen, MinRestSec, MaxRestSec;

void init();
void input(int*, int*, string &, int*);
void output(int, int, int);

int main() {
	int Time = 0;
	init();
	int State = 1, QueueNum = 0;
	while (State) {
		++Time;
		string CurTimeRequestOfWindows(MAXWINDOWS, '0');
		int CurTimeNumOfCustCome = 0;
		//process();
		output(Time, QueueNum, State);
	}
	return 0;
}