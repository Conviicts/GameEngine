#include "core/logger.h"
#include "core/asserts.h"

int main(void) {
    KERROR("This is an error message.");
	KASSERT(1 == 0);
    return 0;
}