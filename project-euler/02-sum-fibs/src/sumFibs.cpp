#include <cstdint>

int64_t SumFibs(int64_t limit)
{
  int64_t sum = 0;
  int64_t arr[2] = {1, 2};

  while (arr[1] <= limit)
  {
    if ((arr[1] & 1) == 0)
      sum += arr[1];

    arr[1] = arr[0] + arr[1];
    arr[0] = arr[1] - arr[0];
  }
  return sum;
}
