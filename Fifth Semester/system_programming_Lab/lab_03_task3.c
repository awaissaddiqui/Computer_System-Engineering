#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
     int pid;
     for (int i = 0; i < 5; i++)
     {
          pid = fork();

          // create a tree of processes
          if (pid == 0)
          {
               // child process
               printf("Child process: %d\n", getpid());
               printf("Parent process: %d\n", getppid());
          }
          else if (pid > 0)
          {
               // parent process
               printf("Parent process: %d\n", getpid());
               printf("Child process: %d\n", pid);
          }
          else
          {
               // fork failed
               printf("Fork failed!\n");
               return 1;
          }
     }

     return 0;
}
