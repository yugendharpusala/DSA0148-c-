using namespace std;
#include<iostream>
int main()
{
string s;
cin>>s;
for (int i=s.length()-1; i>=0; i--)
{
	cout<<s[i];
}
return 0;
}
