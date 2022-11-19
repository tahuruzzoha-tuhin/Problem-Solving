#include <iostream>
using namespace std;
int main()
{
	char c; int dd, mm, yy, bd, bm, by;
	cin >> dd >> c >> mm >> c >> yy;
	cin >> bd >> c >> bm >> c >> by;
	if(yy-by>=18) cout << "YES" << endl;
	//else if(by>yy) cout << "NO" << endl;
	else if (dd==bd && mm==bm)
	 {
	 	if((yy-by)>=18) cout << "YES" << endl;
	 	else cout << "NO" << endl;
	 } 
	 else if((yy-by)<18 && yy%4!=0)
	 {
	 	if((yy-by)<0) cout << "NO" << endl;
	 	else if((yy-bd)>=18) cout << "YES" << endl;
	 	else if(dd-bd>=18) cout << "YES" << endl;
	 	else if((yy-by)>0) cout << "NO" << endl;
	 }
	 else if ((yy-by)<18 && yy%4==0)
	 {
	 	dd+=1;
	 	if((yy-by)<5 ) cout << "NO" << endl;
	 	else if((yy-by))cout << "NO" << endl;
	 	else if((yy-bd)>=18) cout << "YES" << endl;
		else if(dd-bd>=18) cout << "YES" << endl;
	 	else 
	 }
	else cout << "NO" << endl;
	 return 0;
}