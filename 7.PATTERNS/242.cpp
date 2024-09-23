/*
PATTERN - 90
242.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
            1
          2 4
        3 6 9
      4 8 12 16
    5 10 15 20 25
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=1;i<=n;i++)
    {
        for(int k=n-1;k>=i;k--)
            cout<<" "<<" ";
        
        for(int j = 1;j<=i;j++)
            cout<<(i*j)<<" ";

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