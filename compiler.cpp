#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;

int main(int argc, char* argv[])
{
	size_t pos;
	string str(argv[1]);
	if((pos = str.find(".hawk")) == str.npos)
	{
		cout<<"\nError: Invalid input file!\n";
		exit(0);
	}
	
	ifstream source;
	ofstream tmp;

	string buffer;

	source.open(argv[1]);	
	tmp.open("temp.cpp");
	
	tmp<<"#include\"syntax.h\"\nint main()\n{\nclock_t t1,t2;\nt1=clock();\n";
	while(getline(source,buffer))
        tmp<<buffer;
	tmp<<"t2=clock();\nfloat diff ((float)t2-(float)t1);\ncout<<diff/CLOCKS_PER_SEC<<\"s\"<<endl;}";
	
	source.close();
	tmp.close();

	system("g++ temp.cpp -o output");
	system("./output");
	system("rm temp.cpp");
	system("rm output");
	
	return 0;
}
