#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
int pid, pid1, pid2, pid3;
pid = fork();
if (pid == 0) {
sleep(1);
printf("child[1] --> pid= %d and ppid = %d\n", getpid(), getppid());
}

else {
pid1 = fork();
if (pid1 == 0) {
sleep(2);
printf("child[2] --> pid = %d and ppid = %d\n", getpid(), getppid());
}

else { 
pid2 = fork();
if (pid2 == 0) {
sleep(3);
printf("child[3] --> pid = %d and ppid = %d\n", getpid(), getppid());
}
else {
pid3 = fork();
if (pid3 == 0) {
sleep(4);
printf("child[4] --> pid = %d and ppid = %d\n", getpid(), getppid());
}
else {
sleep(5);
printf("parent --> pid = %d\n", getpid());

printf("job is done \n ");
}
}
}
}
return 0;
}
