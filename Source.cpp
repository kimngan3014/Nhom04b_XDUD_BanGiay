#include <iostream>

using namespace std;
int tong(int a, int b){
	return a+ b;
	
}
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a,b;
	cout<<"Nhap 2 so: ";
	cin>>a>>b;
	int kq= tong(a,b);
	cout<<"Tong= "<<kq<<endl;
	system("pause");
	return 0;
}

	