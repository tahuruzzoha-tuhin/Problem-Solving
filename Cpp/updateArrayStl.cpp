
void updateArray(array<int, 6> &xarr, int i, int key) //Passing by reference in array STL
{
    xarr[i] = key;
}

void print(const array<int,6> &ad){
    for (int i = 0; i < ad.size(); ++i)
    {
        cout << ad[i] << " ";
    }
}

void solve()
{
    array<int, 6> a = {5, 56, 32, 345, 23, 29};
    int n = a.size();

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

    sort(a.begin(), a.end());
    // sort(a+0, a+n);
    print(a);
    cout << endl;

    array<int, 10> fives;
    fives.fill(5);

    for(auto x:fives) cout << x << " ";
}

void updateArray(array<int, 6> &xarr, int i, int key) //Passing by reference in array STL
{
    xarr[i] = key;
}

void print(const array<int,6> &ad){
    for (int i = 0; i < ad.size(); ++i)
    {
        cout << ad[i] << " ";
    }
}

void solve()
{
    array<int, 6> a = {5, 56, 32, 345, 23, 29};
    int n = a.size();

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

    sort(a.begin(), a.end());
    // sort(a+0, a+n);
    print(a);
    cout << endl;

    array<int, 10> fives;
    fives.fill(5);

    for(auto x:fives) cout << x << " ";
}
