#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{
   int pid, tickets;

   if (argc != 3){
     printf(1, "please only 2 arguments, pid and tickets!\n");
     exit();
   }
   pid = atoi(argv[1]);
   tickets = atoi(argv[2]);

   printf(1, " pid=%d, tickets=%d\n", pid, tickets );
   settickets(pid, tickets);

   exit();
}
