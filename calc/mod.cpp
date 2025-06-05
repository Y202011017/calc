#include "sub.h"
int divide(int x, int y) {
	int d = 0;
	while (x >= y) {
		d = sub(x, y);
	}
	return d;
}