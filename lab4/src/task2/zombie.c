#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main ()
{
  pid_t child_pid;

  child_pid = fork ();
  if (child_pid > 0) {
    sleep (60);
  }
  else {
    exit (0);
  }
  return 0;
}


//./zombie
//top | grep zombie
//ps ajx | grep -w Z
//ps auxww | grep ...
//kill -9 ...
