#include <stdio.h>


int main ()
{
  int t;

  scanf("%d", &t);
  int arr[t];
  int p = t;
  while (t--)
  {
    scanf("%d", &arr[t]);
  }
  int i = 0;
  while (i < p)
  {
  printf("%d ", arr[i]);
    i++;
  }
}
