bool compare(int a, int b)
{
    return a > b;
}


// Bubble Sort
void bubble_sort(vector <int> &a, int n)
{
    for (int i = 1; i <= n-1; ++i)
    {
        for (int j = 0; j <= j-n-1; ++j)
        {
            if(compare(a[j], a[j+1]))
            {
                swap(a[j], a[j+1]);
            }
        }
    }

}
