
void updateArray(int arr[], int i, int key) //Passing by reference by default
{
    arr[i] = key;
}

void solve()
{
    int a[] = {5, 56, 32, 345, 23, 29, 6, 2, 3, 1, 4, 3, 6, 98, 3434, 231, 7};
    int n = sizeof(a) / sizeof(int);

    cout << "length: " << n << endl;
    for(auto x:a) 
        cout << x << " ";

    cout << endl;
    cout << endl;
    
    for (int i = 0; i < n; ++i)
    {
        if(i%2 != 0)
        {
            updateArray(a, i, (i*i+a[i])/2);
        } 
        else if(i%2 == 0)
        {
            updateArray(a, i, (i*i+a[i])*2);
        }
    }
    sort(a+0, a+n);
    for(auto x:a) 
        cout << x << " ";
}