#include <iostream>
#include <vector>

using namespace std;

int main() {
	string Class, grade;
	float credit, total_credit = 0, total_grade = 0;


	for (int i = 0; i < 20; i++)
	{
		cin >> Class >> credit >> grade;
		if (grade != "P")
		{
			if (grade == "A+")
			{
				total_credit += credit;
				total_grade += (credit * 4.5);
			}
			else if (grade == "A0")
			{
				total_credit += credit;
				total_grade += (credit * 4.0);
			}
			else if (grade == "B+")
			{
				total_credit += credit;
				total_grade += (credit * 3.5);
			}
			else if (grade == "B0")
			{
				total_credit += credit;
				total_grade += (credit * 3.0);
			}
			else if (grade == "C+")
			{
				total_credit += credit;
				total_grade += (credit * 2.5);
			}
			else if (grade == "C0")
			{
				total_credit += credit;
				total_grade += (credit * 2.0);
			}
			else if (grade == "D+")
			{
				total_credit += credit;
				total_grade += (credit * 1.5);
			}
			else if (grade == "D0")
			{
				total_credit += credit;
				total_grade += (credit * 1.0);
			}
			else if (grade == "F")
			{
				total_credit += credit;
				total_grade += (credit * 0.0);
			}
		}
	}
	cout << total_grade / total_credit;

}