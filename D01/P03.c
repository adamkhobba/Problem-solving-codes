#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
  char **s;
  int t;
  int *len;

  scanf("%d", &t);
  s = malloc(t * sizeof(char *));
  len = malloc(t * sizeof(int));
  int i = 0;
  while (i < t)
  {
    scanf("%s", s[i]);
    if (s[i] == NULL)
      return 0;
    len[i]  = strlen(s[i]);    
    printf("a\n");
    i++;
  }
  i = 0;
  while (i < t)
  {
    printf("%c%d%c", s[i][0], len[i] - 2, s[i][len[i]]);
    i++;
  }

}
