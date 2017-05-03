#include<iostream>
#include"definition.h"

using namespace std;

struct WindowsPort windows[8] = {0};
int queueNum = 0;
struct MaxLimits Max;
int state = 1;

void init();

int main() {
	init();
	while (state) {
		input();
		process();
		output();
	}
	reutrn 0;
}