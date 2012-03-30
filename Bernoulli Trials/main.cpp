#include <iostream>
using std::wcout;
using std::wcin;
using std::endl;

#include <Math/mathematical functions.h>
using Math::MathematicalFunctions::BernsteinTriangle;

int main()
{
	unsigned int n, k;
	double sum, p;
	
	
	wcout << "supply number of random experiments: ";
	wcin >> n;
	wcout << "supply least desired number of succesful random experiments: ";
	wcin >> k;
	wcout << "supply common posibility of success: ";
	wcin >> p;

	BernsteinTriangle bernsteinTriangle(p,n);
	sum = 0;
	for(auto i = 0u ; i < k ; i++)
	    sum += bernsteinTriangle(n,i);

	wcout << '\n' << 1 - sum << endl;

	system("pause");
	return 0;
} // end function main
