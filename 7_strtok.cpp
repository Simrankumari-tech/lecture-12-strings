

#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char a[] = "Akshat_$$$%@@@@@@@Ankit@$#****######Rohit%#Niyam##@@@@@@";


	// char *p = strtok(a, "_$%@#*");
	char *p;

	p = strtok(a, "_$%@#*");

	while (p != NULL) {
		cout  <<  p << endl;
		// NULL MEANS PICHLI STRING MEI JAHA TAK READ KAR LIA AB USKE AAGE
		// CONTINUE KRNA HOGA
		p = strtok(NULL, "_$%@#*");
	}




	return 0;
}