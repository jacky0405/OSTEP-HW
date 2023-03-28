#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main() {

    int x = 100;
    printf("x = %d, (pid=%d)\n", x, (int)getpid());

    int rc = fork();
    if(rc < 0) {
        fprintf(stderr, "fork failed");
		exit(1);
    } else if (rc == 0) {
        printf("x = %d in child (pid=%d)\n", x, (int)getpid());
        x = 200;
        printf("x = %d after changing in child (pid=%d)\n", x, (int)getpid());
    } else {
        printf("x = %d in parent (pid=%d)\n", x, (int)getpid());
        x = 300;
        printf("x = %d after changing in parent (pid=%d)\n", x, (int)getpid());
    }

    return 0;
}