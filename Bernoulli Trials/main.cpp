//	Copyright (C) 2007, 2012 Vaptistis Anogeianakis <el05208@mail.ntua.gr>
/*
 *	This file is part of Bernoulli Trials.
 *
 *	Bernoulli Trials is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	Bernoulli Trials is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with Bernoulli Trials.  If not, see <http://www.gnu.org/licenses/>.
 */

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
	wcout << "supply least desired number of successful random experiments: ";
	wcin >> k;
	wcout << "supply common possibility of success: ";
	wcin >> p;

	BernsteinTriangle bernsteinTriangle(p,n);
	sum = 0;
	for(auto i = 0u ; i < k ; i++)
	    sum += bernsteinTriangle(n,i);

	wcout << '\n' << 1 - sum << endl;

	system("pause");
	return 0;
} // end function main
