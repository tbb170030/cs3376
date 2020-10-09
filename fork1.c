/* fork1 */
#include <stdio.h>
#include <unistd.h>
main()
{ int i;
  printf("Ready to fork..\n");
  i=fork();
  printf("Fork returned %d\n",i);
}
