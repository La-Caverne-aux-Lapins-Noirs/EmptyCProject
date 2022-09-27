
#include	<stdlib.h>
#include	<stdio.h>
#include	"abs.h"

int		main(int	argc,
		     char	**argv)
{
  int		i;

  for (i = 1; i < argc; ++i)
    printf("|%s| = %d\n", argv[i], efabs(atoi(argv[i])));
  return (EXIT_SUCCESS);
}
