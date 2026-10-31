// LR4_v17 Êàöåð Ìèðîñëàâ CH-11
#include <iostream>
#include <math.h>
using namespace std;
setlocata(0,"ukr");
int main()
{
	float a=2.1, S;
	int n,i;
	cout<<"n=";cin>>n;
	S=1;
	for (i=1;i<=n;i++)
	S*=(a*i+2);
	cout<<"S="<<S<<endl;
	return 0;
}
