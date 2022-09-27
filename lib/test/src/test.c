
#include		<stdlib.h>
#include		<assert.h>
#include		"abs.h"

int			main(void)
{
  assert(efabs(5) == 5);
  assert(efabs(0) == 0);
  assert(efabs(-3) == 3);
  return (EXIT_SUCCESS);
}
