#include <iostream>
using namespace std;

void shiftArr(int* arr , int n)
{

    int temp = arr[0];
    arr[0] = arr[n-1];
    arr[n-1] = temp;


    for(int i=n-2 ; i>=0 ; i--)
    {
        int temp2 = arr[0];
        arr[0] = arr[i];
        arr[i] = temp2;


    }
}

void shiftArrByK(int* arr , int n , int k)
{
    for(int i=0 ; i<k%n ; i++)
    {
        shiftArr(arr , n) ;
    }
}

int main() {
    
    int n, k;
    cin >> n >> k;

    int arr[n] = {0}; 
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    int size_of_array = n ;
    shiftArrByK(arr , size_of_array , k);

    if(k>n)
    {
        for(int i=0; i<n; i++)
        {
            cout << 0 << " ";
        }
    }
    else
    {
        for(int i=0 ; i<n-k ; i++)
        {
            cout << arr[i] << " " ;
        }
        for(int i=0; i<k; i++)
        {
            cout << 0 << " ";
        }
    }
}