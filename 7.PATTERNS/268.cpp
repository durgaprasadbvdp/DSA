/*
PATTERN - 116
268.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
    5 5 5 5 5
     4 4 4 4
      3 3 3
       2 2
        1
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=n;i>=1;i--)
    {   
        for(int k = n-1;k>=i;k--)
            cout<<" ";

        for(int j = i; j >= 1 ; j--)
            cout<<i<<" ";
            
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