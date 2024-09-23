/*
PATTERN - 89
241.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
            1
          3 5
        7 9 11
      13 15 17 19
    21 23 25 27 29
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
    int x = 1;
	for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n;j++)
        {
            if(i<=j)
            {
                cout<<x<<" ";
                x += 2;
            }
            else
                cout<<" "<< " ";
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