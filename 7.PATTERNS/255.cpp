/*
PATTERN - 103
255.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
    1 2 3 4 5
      2 3 4 5
        3 4 5
          4 5
            5
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=1;i<=n;i++)
    {   
        for(int j = 1;j<=n;j++)
        {
            if(i<=j)
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