#include<iostream>
#include<fstream>
#include<string>
#include"Definition.h"

using namespace std;

struct WindowsPort windows[8] = {0};

void init();
void input(int*, int*, string &);


static int MaxCustSingleLine, MaxLines, MaxSeqLen, MinTimeLen, MaxTimeLen, 
	MinRestSec, MaxRestSec;

int main() {
	int Time = 0;
	init();
	int state = 1;
	while (state) {
		++Time;
		string CurTimeWindowsRequest = (10, '0');
		int CurTimeNumOfCustCome = 0;
		input(&Time, &CurTimeNumOfCustCome, RequestOfWindows);
		//process();
		//output();
	}
	reutrn 0;
}

void init() {
	for (int i = 1; i <= 4; ++i) {
		windows[i].State = 1;
	}
	string s;
	ifstream in("ConfingFile.txt");
	if (in.is_open()) {
		in >> s >> MaxCustSingleLine >> s >> MaxLines >> s >> MaxSeqLen >> s >> MinTimeLen 
			>> s >> MaxTimeLen >> s >> MinRestSec >> s >> MaxRestSec;
		cout << "The Confing File has been readed." << endl;
		in.close();
	}
	MaxCustSingleLine *= 10;
	MaxLines *= 10;
	MaxSeqLen *= 10;
	MinTimeLen *= 10;
	MaxTimeLen *= 10;
}

void input(int* Time, int* CurTimeNumOfCustCome, string &RequestOfWindows) {
	static string WindowsRequest = (10, '0');
	static int NumOfCustCome = 0, ProcessTime = 0;
	if (ProcessTime < *Time) {
		char ch;
		NumOfCustCome = 0;
		WindowsRequest = (10, '0');
		cin >> ch >> ch >> ProcessTime;
		string str;
		cin >> str;
		char sta = '0';
		for (auto iter : str) {
			switch (iter) {
				case 'G' : ++NumOfCustCome; break;
				case 'C' : sta = 'C'; break;
				case 'R' : sta = 'R'; break;
			}
			if (isdigit(iter)) {
				WindowsRequest[todigit(iter)] = sta;
			}
		}
		
	}
	if (ProcessTime == *Time) {
		*CurTimeWindowsRequest = RequestOfWindows;
		*CurTimeNumOfCustCome = NumOfCustCome;
	}
}