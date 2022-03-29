// #include<iostream>
// using namespace std;
// int main()
// {
//     double a, b, c, s, v;
//     cout << "Enter Base And Height of an Triangle:" << " ";
//     cin >> a >> b;
//     c = 0.5*a*b;
//     cout << "Area of an Triangle: " << c << endl;
//     a=b=c=0;
//     cout << "Enter Length of Two sides of a Rectangle: " << " ";
//     cin >> a >> b;
//     c = 2*(a+b);
//     cout << "Perimeter of a Rectangle: " << c << endl;
//     a=b=c=0;
//     cout << "Enter Nth number: " << " ";
//     cin >> b;
//     c = (b*(b+1))/2;
//     cout << "Summation of Nth number: " << c << endl;
//     a=b=c=0;
//     cout << "Enter Initial Velocity: "<< " ";
//     cin >> a;
//     cout << "Enter Final Velocity: " << " ";
//     cin >> b;
//     cout << "Enter Accelaration: " << " ";
//     cin >> c;
//     s = ((b*b)-(a*a)/(2*c));
//     cout << "Speed: " << s << endl;
//     a=b=c=s=v=0;
//     cout << "Enter Length, Width & Height of a Rectangle: " << " ";
//     cin >> a >> b  >> c;
//     s = a*b*c;
//     cout << "Volume of a Rectangle: " << s << endl;

// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a, b=1;
//     cin >> a;
//     cout << a+b << endl;

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     if(true)
//         {
//             cout << "Hello World"<<endl;
//         }
//         return 0;
// }

// #include<bits/stdc++.h>
// int main()
// {
//     int a=15, b=7, i = 5;
//     if(a>b && ++i<b)
//     {
//         std::cout << i << std::endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {

//     int n, sum=0, digit=0;
//     cin >> n;
//   //  cout <<"Digits: ";
//     for(;n>0;)
//     {
//         digit = n%10;
//         n = n/10;
//         sum+=digit;
// //        cout << digit <<" ";
//     }
//     cout << endl;
//     cout << "Summation of digits: " << sum << endl;;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {

//     int n, count=0, sum;
//     cin >> n;
//     for(int j=1; j<=n; j++)
//     {

//         for(int i=1; i<=j; i++)
//         {
//             if(j%i==0) count++;
//         }
//         if(count == 2)
//         {
//             cout << j << endl;
//             count = 0;
//         }

//         else
//             count = 0;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{

    int n, m, digit=0, arm=0, mul=0, sum=0 ;
    cin >> n;
    m=n;
    while(n>0)
    {
        digit = n%10;
        n =n/10;
        arm = digit;
        mul = arm*arm*arm;
        sum = sum+mul;
    }
    cout << sum << endl;
    if(sum==m)
    {
        cout << "Armstrong Number" << endl;
        sum=0;
    }
    else
    {
        cout << "Not Armstrong Number" << endl;
        sum=0;
    }
    return 0;
}

// #include<iostream>
// using namespace std;
// int main()
// {
//     long long n, digit=0, rev=0;
//     cin >> n;
//     while(n>0)
//     {

//         digit = n%10;
//         n = n/10;
//         rev = (rev*10) + digit;
//     }
//     cout << rev << endl;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i=1,s=0;
//     cin >> n;
//     while(i<=n)
//     {
//         s=s+i;
//         i++;
//     }
//     cout << "Summation: " << s << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     long double n;
//     cin >> n;
//     for(int i=1; i<=10; i++)
//     {
//         cout << n << " X " << i << " = " << n*i << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {

//     int n, count=0;
//     cin >> n;
//     for(int i=1; i<=n; i++)
//     {
//         if(n%i==0) count++;
//     }
//     if(count>2 || count<2) cout << "Not Prime" << endl;
//     else cout << "Prime" << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {

//     int n, m, digit=0, arm=0, mul=0, sum=0;
//     cin >> n;
//     for(int i=1; i<=n; i++)
//     {
//         m=i;
//         while(i>0)
//         {
//             digit = i%10;
//             i =i/10;
//             arm = digit;
//             sum = sum+(arm*arm*arm);

//         }

//     }

//     if(sum==m)
//     {
//         cout << m <<  " Armstrong" << endl;
//         sum=0;

//     }
//     else sum=0;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int m, n;
//     cin >> m >>n;
//     while (m!=n)
//     {
//         if(m>n) m-=n;
//         else if(n>m) n-=m;
//     }
//     cout << m << endl;
//     return 0;

// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     long long n, digit=0, rev=0, pal;
//     cin >> n;
//     pal=n;
//     while(n>0)
//     {

//         digit = n%10;
//         n = n/10;
//         rev = (rev*10) + digit;
//     }
//    if(pal==rev) cout << pal << " is Palindrome" << endl;
//    else cout << pal << " is not Palinedrome" << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     float w[5] = {3, 5, 4, 7, 9};
//     float p;
//     for (auto s : w)
//     {
//         p += s;
//         cout << p << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     float w[5] = {3, 11, 4, 7, 9};
//     float p;
//     p = w[0];
//     for (auto s : w)
//     {
//        if (s>p)
//        {
//            p=s;
//        }

//     }
//     cout << p << endl;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, i = 0;
//     cin >> n;
//     int a[n];
//     while (i<n)
//     {
//         cin >> a[i];
//         i++;
//     }
//     int m;
//     cin >> m;
//     for (int i = 0; i < n; i++)
//     {
//         if (m==a[i])
//         {
//             cout << "Found at " << i << endl;
//             return 0;
//         }

//     }
//     cout << "Not Found" << endl;

// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, m, l, h, k;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = 0; j < n-1-i; j++)
//         {
//             if (a[j]>a[j+1])
//             {
//                 int twmp = a[j];
//                 a[j] = a[j+1];
//                 a[j+1] = twmp;
//             }
//         }
//     }
//     l = 0;
//     h = n-1;
//     int i = 0;
//     for(int x:a)
//     {
//         cout << "a[" << i++ << "] = " << x << " ";
//         cout << endl;
//     }
//     cin >> k;
//     while (l <= h)
//     {
//         m = (l+h)/2;
//         if (k == a[m])
//         {
//             cout << "Index: " << m << endl;
//             return 0;
//         }
//         else if (k < a[m])
//         {
//             h = m-1;
//         }

//         else
//         {
//             l = m+1;
//         }
//     }
//     cout << "Hamba!!" << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {

//     long  double n,f=1;
//     cin >> n;
//     for(int i=1; i<=n; i++)
//     {
//         f*=i;
//         cout << "Factorial of "<< i <<" is: " << f << endl;
//     }
//     f=1;
//     for(int j=1; j<=n; j++)
//     {
//         f*=j;
//         cout << j<<"! = " << f << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     float w[5] = {3, 5, 4, 7, 9};
//     float p;
//     for (auto s : w)
//     {
//         p += s;
//         cout << p << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[3][3] = {{11, 12, 13},{14, 16, 18},{19, 14, 17}};
//     int b[3][3] = {{41, 31, 11},{51, 31, 19},{21, 11, 41}};
//     int c[3][3] = {};

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             c[i][j] = a[i][j] +  b[i][j];
//         }

//     }
//     for (int i = 0; i < 3; i++)
//     {
//         cout << " | ";
//         for (int j = 0; j < 3; j++)
//         {
//             cout << c[i][j] << " ";
//         }
//         cout << " | " << endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int max(int x, int y)
// {
//     return x>y?x:y;
// }

// int min(int x, int y)
// {
//     return x<y?x:y;
// }

// int main()
// {
//     int (*p)(int,int);
//     p = max;
//     int r =  (*p)(1,4);
//     cout << r << endl;
//     p = min;
//     int t = (*p)(1,4);
//     cout << t << endl;
// }

// #include<iostream>
// using namespace std;

// template<class T >
// T max(T x,T y)
// {
//     return x>y?x:y;
// }

// int main()
// {
//     cout << max(3,4) << endl;
//     cout << max(4.3f, 2.55f) << endl;
// }

// #include<iostream>
// using namespace std;
// int add(int a, int b, int c=0)
// {
//     return a+b+c;
// }
// int main()
// {
//     int c = add(12,38,10);
//     cout << c << endl;
// }

// #include<iostream>
// using namespace std;

// void display()
// {
//     cout << "Hello" << endl;
// }
// float add (float x, float y)
// {
//     float z;
//     z = x+y;
//     return z;
// }

// int maxim(int a, int b, int c)
// {
//     if (a>b && a>c)
//     {
//         return a;
//     }
//     else if (b>c)
//     {
//         return b;
//     }
//     else
//     {
//         return c;
//     }
// }
// int main(int argc, char const *argv[])
// {
//     display();
//     float x=2.3, y=7.9, z;
//     z = add(x,y);
//     cout << z << endl;

//     int x1=10, y1=15, z1=5, r;
//     r = maxim(x1, y1, z1);
//     cout << r << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int add(int x, int y)
// {
//     return x+y;
// }
// int add(int x, int y, int z)
// {
//    return x+y+z;
// }
// float add(float x, float y)
// {
//     return x+y;
// }
// int main(int argc, char const *argv[])         //Function Overloading.
// {
//     int a=10, b=5,c,d;
//     c=add(a,b);
//     d=add(a,b,c);
//     int i = 2.5f, j = 3.5f;
//     float k = add(i,j);
//     cout << c << " " << d << " " << k << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int sum(int a,int b)
// {
//     return a+b;
// }

// float sum(float a, float b)
// {
//     return a+b;
// }

// int sum(int a, int b, int c)
// {
//     return a+b+c;
// }
// int main(int argc, char const *argv[])   // Function Overloading also
// {
//     cout << sum(10,5) << endl;
//     cout << sum(12.5f,3.4f) << endl;
//     cout << sum(10,20,3) << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// template<class T>
// T maxim(T a, T b){
//     return a>b?a:b;
// }
// // int maxim (int a, int b){
// //     return a>b?a:b;
// // }

// // float maxim(float a, float b){
// //     return a>b?a:b;
// // }
// int main(int argc, char const *argv[])    //Template Function
// {
//     cout << maxim(12,14)<< endl;
//     cout << maxim(2.3,1.4) << endl;
//     cout << maxim(2.3f, 5.6f) << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int sum(int a, int b, int c=0){
//     return a+b+c;
// }

// int max(int a=0, int b=0, int c=0){
//     return  a>b && a>c ? a:(b>c ? b:c);
// }

// int main(int argc, char const *argv[])  //Default arguments
// {
//     cout << sum(10,5) << endl;
//     cout << sum(12,13,14) << endl;
//     cout << max(10,13,12) << endl;
//     cout << max(10,13) << endl;
//     cout << max(10) << endl;
//     cout << max() << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void swap(int a, int b){
//     int temp=a;
//     a=b;
//     b=temp;
//     cout << a << " " << b << endl;
// }
// int main(int argc, char const *argv[])  //Pass by value or Call by value.
// {
//     int x=10, y=20;
//     swap(x,y);
//     cout << x << " " << y << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main(int argc, char const *argv[])   //Pass by Address or call by Address.
// {
//     int x=10, y=20;
//     swap(&x,&y);
//     cout << x << " " << y << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void swap(int &a, int &b){
//     cout << &a << " " << &b << endl;
//     int temp = a;
//     a = b;
//     b = temp;

// }

// int main(int argc, char const *argv[])   //Pass by Reference or call by Reference.
// {
//     int x=10, y=20;
//     swap(x,y);
//     cout << &x << " " << &y << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

//  int * function(){
//      int *p = new int[5];
//      for (int i = 0; i < 5; i++)
//      {
//          p[i]=5*i;
//      }
//      cout << p << endl;
//      return p;

//  }

// int main(int argc, char const *argv[])  //Return by Address..
// {
//     int *q=function();
//     cout << q << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << q[i] << endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int & fun(int &x)
// {
//     x+=10;
//     return x;
// }

// int main(int argc, char const *argv[])  // Return by Address.
// {
//     int a = 10;
//     int c = fun(a);
//     cout << c << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int fun()
// {
//     static int p = 5;
//     p++;
//     cout << p << endl;
// }

// int main(int argc, char const *argv[])
// {
//     fun();
//     fun();
//     fun();
//     getchar();
// }

// #include<iostream>
// using namespace std;

// class Rectangle
// {

// public:
//     int length;
//     int breadth;

//     int area()
//     {
//         return length*breadth;
//     }
//     int perimeter()
//     {
//         return 2*(length+breadth);
//     }
// };

// int main(int argc, char const *argv[])
// {
//     Rectangle r1;
//     r1.length=10;
//     r1.breadth=5;
//     cout << "Area is: " << r1.area() << endl;
//     cout << "Perimeter is: " << r1.perimeter() << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Rectangle
// {
// public:
//     int length;
//     int breadth;

//     int area()
//     {
//         return length * breadth;
//     }
//     int perimeter()
//     {
//         return 2 * (length + breadth);
//     }
// };

// int main(int argc, char const *argv[])
// {
//     Rectangle r1;
//     Rectangle *ptr;
//     ptr=&r1;
//     ptr->length=10;
//     ptr->breadth=5;
//     cout << ptr->area() << endl;
//     cout << ptr->perimeter() << endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// class Rectangle
// {
// public:
//     int length;
//     int breadth;

//     int area()
//     {
//         return length * breadth;
//     }
//     int perimeter()
//     {
//         return 2 * (length + breadth);
//     }
// };

// int main(int argc, char const *argv[])
// {
//     //Rectangle r1;
//     Rectangle *ptr=new Rectangle;
//     //ptr=&r1;
//     ptr->length=10;
//     ptr->breadth=5;
//     cout << ptr->area() << endl;
//     cout << ptr->perimeter() << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Rectangle
// {
// private:
//     int length;
//     int breadth;
// public:
//     int setLength(int l)
//     {
//         if (l<=0)
//         {
//             length=1;
//         }
//         else
//         {
//             length=l;
//         }
        
        
//     }
//     int setBreadth(int b)
//     {
//         if (b<=0)
//         {
//             breadth=1;
//         }
//         else
//         {
//             breadth=b;
//         }
        
                
//     }
//     int getLength()
//     {
//         return length;
//     }
//     int getBreadth()
//     {
//         return breadth;
//     }
//     int area()
//     {
//         return length*breadth;
//     }
//     int perimeter()
//     {
//         return 2*(length+breadth);
//     }
// };
// int main(int argc, char const *argv[])
// {
//     Rectangle r;
//     r.setLength(10);
//     r.setBreadth(5);
//     cout << r.area() << endl;
//     cout << r.getLength() << endl;
//     return 0;
// }

