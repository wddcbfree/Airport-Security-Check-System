#ifndef DEFINITION_H
#define DEFINITION_H

struct WindowsPort {
	int State;	//the state of windows
	int CurNum; //current guest number of windows
	int CurStateTime;
	int CurGuestTime;
	int TotOffTime, TotOnTime, TotServeTime, TotNum, ScheRestTime;
}

#endif