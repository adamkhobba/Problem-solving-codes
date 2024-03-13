#include <stdio.h>

int main ()
{
  long long t;
  long long a;
  long long b;
  long i; 

  scanf("%lld", &t);
  long long arr[t];
  i = 0;
  while (i < t)
  {
    scanf("%lld", &arr[i]);
    i++;
  }
  scanf("%lld %lld", &a, &b);
  i = a;
  long long sum = 0;
  while (i < b + 1)
  {
    sum += arr[i];
    i++;
  }
  printf("%lld", sum);
}
