using namespace std;
#include<iostream>
int main()
{
 int m,n;
 cout<<"enter the number of rows and columns";
 cin>>m>>n;
 for(int i=1; i<=m; i++)
 {
 	for(int j=1; j<=n; j++)
    {
	cout<<"* ";
     }
     cout<<endl;
    }

 cout<<"enter the number of rows and columns";
 cin>>m>>n;
 for(int i=1; i<=m; i++)
 {
 	for(int j=1; j<=n; j++)
    {
	cout<<"$ ";
     }
     cout<<endl;
    }
return 0;
}
