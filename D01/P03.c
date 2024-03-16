#include <stdio.h>
#include <string.h>

int main() {
  char *str;
  int t;

  scanf("%d", &t);
  char s[t][100];
  int i = 0;
  int len[t];
  while (i < t) {
    scanf("%s", s[i]);
    len[i] = strlen(s[i]);
    i++;
  }
  i = 0;
  while (i < t) {
    if (len[i] > 10)
      printf("%c%d%c\n", s[i][0], len[i] - 2, s[i][len[i] - 1]);
    else
      printf("%s\n", s[i]);
    i++;
  }
}
