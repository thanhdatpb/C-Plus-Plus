#include<iostream>

using namespace std;
int main()
{
int dem = 0;
for (int i = 1; i <= 10; i++)
{
if (i<=5)
{
for (int k = 1; k <= i; k++)
{
cout << "*";
}
}
else if (i>=5)
{
for (int k = 1; k <= 5-dem; k++)
{
cout << "*";
}
dem++;
}
cout << "\n";
}
}
