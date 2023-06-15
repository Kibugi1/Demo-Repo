#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int pid = getpid();
	int ppid = getppid();

	printf("PID: %d\n", pid);
	printf("Parent PID: %d\n", ppid);

	return (0);
}
