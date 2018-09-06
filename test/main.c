#include <avr/io.h>
#include "../ffb-abacus.h"
#include "test.h"
#include "testsuites.h"

void testSuiteConstantForce();

int main(void)
{
	FfbAbacus_Init();
	testSuiteSetFromUsb();
	testSuiteCalcForces();

	runAllTests();

	int failures = gFailures;
	failures++;
	return gFailures;
}


