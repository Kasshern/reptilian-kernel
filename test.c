#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main() {
	long int shoutout = syscall(548);
	printf("system call sys_gettag returned %ld\n", shoutout);
	return 0;
}
