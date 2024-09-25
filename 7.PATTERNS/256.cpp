/*
PATTERN - 104
256.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
    5 4 3 2 1
      4 3 2 1
        3 2 1
          2 1
            1
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=n;i>=1;i--)
    {   
        for(int j = n;j>=1;j--)
        {
            if(i >= j)
                cout<<j<<" ";
            else
                cout<<" "<<" ";
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