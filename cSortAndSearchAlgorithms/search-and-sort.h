// Binary Search Algorithm That Takes An Integer Array, The Integer, The Index Of The Lowest Element And The Index Of The Highest Element As Parameters
int binarySearch(int *array, int n, int low, int high)
{
  if (low > high)
    return 0;
  int midPoint = low + (high - low) / 2;
  if (n == array[midPoint])
    return 1;
  else if (n > array[midPoint])
    return binarySearch(array, n, midPoint + 1, high);
  else
    return binarySearch(array, n, low, midPoint - 1);
}

// Linear Search Algorithm That Takes An Integer Array, The Integer To Search For And The Array Size As Parameters
int linearSearch(int array[], int x, int y)
{
  for (int i = 0; i < y; i++)
  {
    if (array[i] == x)
      return 1;
  }
  return 0;
}

// Bubble Sort Algorithm That Takes An Integer Array And The Array Size As Parameters
void bubbleSort(int *array, int x)
{
  for (int i = 0; i < x; i++)
  {
    for (int j = i + 1; j < x; j++)
    {
      if (array[i] > array[j])
      {
        int tmp = array[j];
        array[j] = array[i];
        array[i] = tmp;
      }
    }
  }
}

// Insertion Sort Algorithm That Takes An Integer Array And The Array Size As Parameters
void insertionSort(int *array, int x)
{
  for (int i = 1; i < x; i++)
  {
    int key = array[i];
    int j = i - 1;
    while ((j >= 0) && (array[j] > key))
    {
      array[j + 1] = array[j];
      j--;
    }
    array[j + 1] = key;
  }
}

// Merges An Array Together By Taking An Integer Array And The Index Of The Left, Middle And Right Element
void Merge(int array[], int left, int middle, int right)
{
  int x = middle - left + 1;
  int y = right - middle;
  int left_array[x], right_array[y];
  for (int i = 0; i < x; i++)
    left_array[i] = array[left + i];
  for (int j = 0; j < y; j++)
    right_array[j] = array[middle + 1 + j];
  int i = 0;
  int j = 0;
  int k = left;
  while ((i < x) && (j < y))
  {
    if (left_array[i] <= right_array[j])
    {
      array[k] = left_array[i];
      i++;
    }
    else
    {
      array[k] = right_array[j];
      j++;
    }
    k++;
  }
  while (i < x)
  {
    array[k] = left_array[i];
    i++;
    k++;
  }
  while (j < y)
  {
    array[k] = right_array[j];
    j++;
    k++;
  }
}

// Merge Sort Algorithm That Takes An Integer Array And The Index Of The Left And Right Element
void mergeSort(int array[], int left, int right)
{
  if (left < right)
  {
    int middle = left + (right - left) / 2;
    mergeSort(array, left, middle);
    mergeSort(array, middle + 1, right);
    Merge(array, left, middle, right);
  }
}
