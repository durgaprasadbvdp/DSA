/*
PATTERN - 84
236.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
            1
          1 2
        1 2 3
      1 2 3 4
    1 2 3 4 5
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=1;i<=n;i++)
    {
        for(int j=n-1;j>=i;j--)
            cout<<" "<<" ";
            
        for(int k = 1;k<=i;k++)
            cout<<k<<" ";

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