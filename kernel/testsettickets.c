#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{
   int pid, tickets;

   if(argc != 3){
      printf("Please insert pid and number of tickets.");
      exit();
   }
   pid = atoi (argv[1]);
   tickets = atoi(argv[2]);
   printf("pid: %d, tickets: %d\n", pid, tickets);
   settickets(pid,priority);

   exit();
}
