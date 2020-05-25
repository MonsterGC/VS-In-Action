#include <iostream>

/*function prototype*/
void simple();

int main() 
{
	using namespace std;
	cout << "main() will be call the simple"<<endl;

	simple();
	system("pause");
}

/*function definition*/

void simple()
{
	using namespace std;
	cout << "I'm but a simple function!!!"<<endl;
}