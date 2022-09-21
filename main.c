#include <stdbool.h>

bool check(char one, char two)
{
  // if one lowercase
  if ((one == two) || (one == two - 32))
    return (false);
  if (one == two || one == two + 32)
    return (false);
  return (true);
}

bool IsIsogram (const char *string) 
{
  int i;
  int x;

  i = 0;
  while (string[i])
  {
    x = i + 1;
    while (string[x])
    {
      if (!(check(string[i], string[x])))
        return (false);
      x++;
    }
    i++;
  }
  return (true);
}