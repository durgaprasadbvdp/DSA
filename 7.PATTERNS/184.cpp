/*
PATTERN - 32
184.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    A F K P U
    B G L Q V
    C H M R W
    D I N S X
    E J O T Y
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
    int x;
	for(int i=0;i<n;i++)
    {
        x = i;
        for(int j=1;j<=n;j++)
        {
            x += 5;
            cout<<char(x-n+65)<<" ";
        }
        cout<<endl;
    }
}
int main()
{
	int n;
	cout<<"Enter the input number"<<endl;
	cin>>n;
	patternPrint(n);
return 0;
}
