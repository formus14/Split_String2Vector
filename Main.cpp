#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

vector<string> split(char one_line_strings[], char sep[]) {
	vector<string> vec_String_Lines;
	char *token;

	token = strtok(one_line_strings, sep);

	cout << "Extracting and storing data in a vector..\n\n\n";

	while (token != NULL)
	{
		vec_String_Lines.push_back(token);
		token = strtok(NULL, sep);
	}
	cout << "Displaying end result in  vector line storage..\n\n";

	for (int i = 0; i < vec_String_Lines.size(); ++i)
		cout << vec_String_Lines[i] << "\n";
	cout << "\n\n\n";
	return vec_String_Lines;
}
int main()
{
	char one_line_string[] = "hello hi how are you nice weather we are having, ok then bye";
	char seps[] = " ,\t\n";
	vector<string> Final_Vector = split(one_line_string, seps);
	cin.get(); // just press enter to endup the cmd
	return 0;
}