#ifndef INCFILE1_H_
#define INCFILE1_H_

extern int gFailures;

typedef void (*testFunc)(void);

void define(testFunc func, const char *name);
void fdefine(testFunc func, const char *name);
void runAllTests();

void fail(void);
void expect(long expected, long actual);
void expectPointer(void* expected, void *actual);
void expectF(float expected, float actual);
void expectFin(float expectedMin, float expectedMax, float actual);
void expectNot(long notExpected, long actual);
void expectNull(void* actual);
void expectNotNull(void* actual);

#endif /* INCFILE1_H_ */