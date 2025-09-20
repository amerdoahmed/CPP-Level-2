#pragma once

#include<iostream>

using namespace std;

namespace MyInputLib
{
	int Mark;
	string result;
	int ReadMark()
	{
		
		cout << "Please Enter Mark !\n";
		cin >> Mark;

		return Mark;
	};
	void CheckPassFail(int Mark)
	{
		result = (Mark >= 50) ? "Pass" : "Fail";
		cout << result << endl;
	}
}