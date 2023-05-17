#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;
int main() {
	while(true)
	{
	string moz = "";
	cout << "\x1B[92m typing >> \x1B[93m";
	cin >> moz;
	printf("\x1B[94m");
	if(moz == "hello")
	{
		printf("hello my friend\n");
	}
	else if(moz == "help")
	{
		printf("command: hello-ip-files-time\n");
	}
	else if(moz == "ip")
	{
		system("ip address");
	}
	else if(moz == "files")
	{
		system("ls");
	}
	else if(moz == "time")
	{
		system("date");
	}
	else
	{
		printf("error in input\n");
	}
	}
	
}