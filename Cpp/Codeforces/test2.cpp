// #include <iostream>
// #include <string>
// #include <cmath>
// #include <cstdio>
// #include <iomanip>
// #include <algorithm>
// #include<bits/stdc++.h>

// #define lli             long long int
// #define ull             unsigned long long
// #define ld              long double
// #define f0(i,n)         for(int i=0;i<n;i++)
// #define f1(i,n)         for(int i=1;i<=n;i++)
// #define nl              "\n"
// #define lg(r,n)         (int)(log2(n)/log2(r))
// #define sf1(a)          scanf("%d",&a)
// #define sfl(a)          scanf("%lld",&a)
// #define sfc(a)          scanf("%c",&a)
// #define sf2(a,b)        scanf("%d %d",&a,&b)
// #define sf2l(a,b)       scanf("%lld %lld",&a,&b)
// #define sf3(a,b,c)      scanf("%d %d %d",&a,&b,&c)
// #define sf3l(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
// #define mx1             110
// #define mx2             1010
// #define mx3             10010
// #define mx4             100010
// #define mx5             1000010
// #define mx6             10000010
// #define PI              3.14159265358979323846
// #define E               2.71828182845904523536

// using namespace std;


// template< class T > T gcd(T a, T b)
// {
//     return (b != 0 ? gcd<T>(b, a%b) : a);
// }
// template< class T > T lcm(T a, T b)
// {
//     return (a / gcd<T>(a, b) * b);
// }

// bool is_prime_helper( size_t target, size_t check )
// {
//     return (check*check > target) || ((target%(check+1) != 0)&&
//                                       (target%(check+5) != 0) && is_prime_helper( target, check+6 ));
// }
// bool tui_prime_naki(size_t target )
// {
//     return (target != 0) && (target !=1) && ((target == 2 || target == 3 || target == 5 )||
//             ((target%2 != 0) && (target%3 != 0) && (target%5)!=0 && is_prime_helper( target, 6 )));
// }
// bool tui_ki_vowel(char c)
// {
//     if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='Y' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y')
//         return 1;
//     else
//         return 0;
// }
// bool tui_ki_constant(char d)
// {
//     if(!(tui_ki_vowel(d)))
//         return 1;
//     else
//         return 0;
// }
// ull distance()
// {
//     int x1, x2, y1, y2, distance=0;
//     cin >> x1 >> y1 >> x2 >> y2;
//     distance = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
//     return distance;
// }

// /*ki dorkar code dekhar *//* Na dekhle hoi na? */





// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);


//     cout << distance() << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int A[10] = {6, 8, 13, 17, 20, 22, 25, 28, 30, 35};
//     int L = 0, H = 9, key, mid;
//     cout  << "Enter Key: "; cin >> key;
//     while (L <= H)
//     {
//         mid = (L+H)/2;
//         if(key == A[mid]){
//             cout << "Found at: " << mid << endl;
//             return 0;
//         }
//         else if(key < A[mid]) H = mid-1;
//         else L = mid+1;
//     }
//     cout << "Not Found!" << endl;
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n = 10;
//     int a[n] = {2,4,1,5,6,4,78,6,4,9};
//     for (int j = 0; j < n-1 ; j++)
//     {
//         for (int i = 0; i < n-1-j; i++)
//         {
//             if(a[i]>a[i+1]) 
//             {
//                 int temp = a[i];
//                 a[i] = a[i+1];
//                 a[i+1] = temp;
//             } 
//         }
        
//     }
//     // for (int i = 0; i < 10; i++)
//     // {
//     //     printf("%d ",a[i]);
//     // }
    
    
//     int mid, low=0, high=9, key;
//     printf("Enter key: ");
//     scanf("%d",&key);
//     while (low <= high)
//     {
//         mid = (low+high)/2;
//         if (key==a[mid])
//         {
//             printf("Found at: a[%d]\n", mid);
//             return 0;
//         }
//         else if (key < a[mid])
//         {
//             high = mid-1;
//         }
//         else
//         {
//             low = mid+1;
//         }       
//     }
//     printf("Not found!!\n");
//     return 0;    
// }


// A1x+B1y+C1=0
// A2x+B2y+C2=0
#include<iostream>
using namespace std;
int main()
{
    int A1, A2, B1, B2, C1, C2;
    char x, var1, var2, y, op1, op2, op3, op4;
    string equalTozero;
    cin >> A1 >> var1 >> op1 >> B1 >> var2 >> op2 >> C1 >> equalTozero;
    cin >> A2 >> var1 >> op3 >> B2 >> var2 >> op4 >> C2 >> equalTozero;
    cout << endl;

    //make the coefficint of x positive.

    y = (A2*C1-A1*C2)/(A1*B2-A2*B1);
    x = (-C1-B1*y)/A1;

    // cout << A1 << x << op1 << B1 << y << op2 << C1 << equalTozero;
    // cout << endl;
    // cout << A2 << x << op3 << B2 << y << op4 << C2 << equalTozero;
    // 
    cout << "X = " << x <<" ; " << "Y = " << y;
    cout << endl;
}