
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <stdlib.h>
#include <algorithm>
#include <string.h>

using namespace std;
int main()
{
	int T;
	int ArrLength;
	int iLength = 0;
	int iIndex = 0;
	int RDCount = 0;
	int DCount = 0;
	bool bReverse = false;
	bool bError = false;
	
	cin >> T;
	cin.ignore();

	while (T--)
	{
		bError = false;
		bReverse = false;
		iIndex = 0;
		RDCount = 0;
		DCount = 0;
		iLength = 0;

		string p;
		getline(cin, p);

		cin >> ArrLength;
		cin.ignore();

		int* Arr = new int[ArrLength * 2];
		memset(Arr, 0, sizeof(int) * ArrLength);

		string cArr;
		getline(cin, cArr);

		cArr.erase(remove(cArr.begin(), cArr.end(), '['));
		cArr.erase(remove(cArr.begin(), cArr.end(), ']'));
		string buffer;
		vector<string> Number;
		istringstream ss(cArr);

		while (getline(ss, buffer, ','))
		{
			Number.push_back(buffer);
			Arr[iIndex] = stoi(Number[iIndex]);
			++iIndex;
		}

		iIndex = 0;

		iLength = p.length();

		for (int i = 0; i < iLength; ++i)
		{
			if (p[i] == 'R')
			{
				bReverse = !bReverse;
				if (bReverse)
					iIndex = ArrLength - 1 - RDCount;

				else
					iIndex = 0 + DCount;
			}

			else if (p[i] == 'D')
			{
				if (iIndex < 0 + DCount || iIndex >= ArrLength - RDCount)
				{
					cout << "error\n";
					bError = true;
					break;
				}

				Arr[iIndex] = 0;

				if (bReverse)
				{
					++RDCount;
					--iIndex;
				}
				else
				{
					++DCount;
					++iIndex;
				}
			}
		}

		if (!bError)
		{
			if (bReverse)
			{
				cout << "[";
				for (; iIndex >= DCount; --iIndex)
				{
					if (iIndex == DCount)
						cout << Arr[iIndex];
					else
						cout << Arr[iIndex] << ",";
				}
				cout << "]\n";
			}

			else
			{
				cout << "[";
				for (; iIndex < ArrLength - RDCount; ++iIndex)
				{
					if (iIndex == ArrLength - RDCount - 1)
						cout << Arr[iIndex];
					else
						cout << Arr[iIndex] << ",";
				}
				cout << "]\n";
			}
		}

		delete[] Arr;
	}

	return 0;
}