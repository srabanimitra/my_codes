#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;

	string s;
    cin  >> s;
	long long count=0;
	for(int i=0;i<num;i++)
	{
     if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
	 count++;
	}
	if(count==5)
	{
		cout<<"YES"<<endl;

	}

	else
	{
		cout<<"NO"<<endl;
	}


}
