/*
PATTERN - 33
185.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    E J O T Y
    D I N S X
    C H M R W
    B G L Q V
    A F K P U
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
    int x;
	for(int i=1;i<=n;i++)
    {
        x = 5 - i;
        for(int j=1;j<=n;j++)
        {
            cout<<char(x+65)<<" ";
            x += 5;

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
