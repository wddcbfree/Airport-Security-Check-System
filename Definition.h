#pragma once
#ifndef DEFINITION_H
#define DEFINITION_H

#include <iostream>
#include <fstream>
#include <string>
#define MAXWINDOWS 10
struct WindowsPort {
	int State;
	int CurNum, CurCustTime;
	int CurStateTime;
	int TotOffTime, TotOnTime;
	int TotServeTime, TotNum, ScheRestTime, RestSignal;
};

extern int MaxCustSingleLine, MaxLines, MaxSeqLen, MinTimeLen, MaxTimeLen, MinRestSec, MaxRestSec;
extern struct WindowsPort windows[MAXWINDOWS];

#endif
