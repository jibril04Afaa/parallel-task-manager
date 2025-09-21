#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    // duplicate process
    pid_t pid = fork();
    char *args[] = {"Hello", "from", "main.c!", NULL};

    if (pid == 0)
    {
        execv("./demo", args);
        perror("Exec failed!\n");
        exit(1); 
    }
    else if (pid > 0)
    {
        printf("This is a parent process with PID of %d\n", getpid());
        wait(NULL); // wait for the child to finish
    }
    else
    {
        perror("Error forking\n");
    }

    return 0;
}