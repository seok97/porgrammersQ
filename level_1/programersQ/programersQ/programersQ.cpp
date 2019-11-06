
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <typeinfo>
#include <stdlib.h>

using namespace std;

bool solution(string s);

int main(void)
{
	string s = "1234232";
	
	cout << solution(s);

	return 0;
}


bool solution(string s) {
	bool answer = true;
	if (s.size() == 4 || s.size() == 6)
	{
		for (int i = 0; i < s.size(); i++) {
			if (!(48 <= s.at(i) && s.at(i) <= 57))
			{
				answer = false;
				i += s.size();
			}
		}
	}
	else answer = false;

	return answer;
}