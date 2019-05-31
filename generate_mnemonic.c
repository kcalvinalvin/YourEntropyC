#include "ccan/ccan/crypto/sha256/sha256.h"
#include "configure.h"

int main() {

	int x = 1;
	int y = sha256(x);
	printf("%d\n", y);
	return 0;

}
