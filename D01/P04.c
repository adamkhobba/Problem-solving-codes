#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char s[2][100];

  scanf("%s", s[0]);
  scanf("%s", s[1]);
  int i = 0;
  int j;
  while (i < 2) {
    j = 0;
    while (s[i][j]) {

      s[i][j] = tolower(s[i][j]);
      j++;
    }
    i++;
  }
  int result = strcmp(s[0], s[1]);
  if (result > 0)
    printf("1");
  else if (result == 0)
    printf("0");
  else
    printf("-1");
}
