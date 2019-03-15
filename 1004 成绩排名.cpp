#include<iostream>
#include<string>
using namespace std;
struct Student
{
	string name, id;
	int  score;
};
int main(void)
{
	int n, max = -1, min = 101, maxIndex = 0, minIndex = 0;
	Student s[1000];
	cin >> n;
	for (int i = 0; i <n; i++)
	{
		cin >> s[i].name >> s[i].id >> s[i].score;
		if (s[i].score > max)
		{
			max = s[i].score;
			maxIndex = i;
		}
		if (s[i].score < min)
		{
			min = s[i].score;
			minIndex = i;
		}
	}
	cout << s[maxIndex].name << " " << s[maxIndex].id << endl;
	cout<< s[minIndex].name << " " << s[minIndex].id;
	return 0;
}
