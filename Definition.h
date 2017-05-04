#ifndef DEFINITION_H
#define DEFINITION_H

struct WindowsPort {
	int State;	//the state of windows
	int CurNum; //current Cust number of windows
	int CurStateTime;
	int CurCustTime;
	int TotOffTime, TotOnTime, TotServeTime, TotNum, ScheRestTime, RestSignal;
}

#endif