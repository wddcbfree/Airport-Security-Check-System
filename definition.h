struct WindowsPort {
	int State;	//the state of windows
	int CurNum; //current guest number of windows
	int CurStateTime;
	int CurGuestTime;
	int TotOffTime, TotOnTime, TotServeTime, TotNum, ScheRestTime;
}

struct MaxLimits {
	int CustSingleLine, Lines, SeqLen, TimeLen, TimeLen;
}