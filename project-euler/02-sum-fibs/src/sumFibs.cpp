long SumFibs(int limit)
{
  long sum = 0;
  int arr[2] = {1, 2};
  int nextFib = 0;

  while (arr[1] <= limit)
  {
    if (arr[1] % 2 == 0)
      sum += arr[1];

    nextFib = arr[0] + arr[1];
    arr[0], arr[1] = arr[1], nextFib;
  }
  return sum;
}
