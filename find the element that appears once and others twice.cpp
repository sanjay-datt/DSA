// Problem - 13 --> Find the elements that appears once and others twice.

// BruteForce Approach
int appear_once(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        int num = arr[i];
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == num)
                count++;
        }
        if (count == 1)
            return num;
    }
}
