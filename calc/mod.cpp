#include "sub.h"
int mod(int x, int y) {
	int d = 0;
	while (x >= y) {
		d = sub(x, y);
	}
	return d;
}