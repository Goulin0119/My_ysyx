#include <stdio.h>
#define MSG "Hello \
world!\n"
int main() {
	printf(MSG /* "Hi!\n" */);
#ifdef __riscv
	printf(Hello RISC-V!\n);
#endif
	return 0;
}
