#include <iostream>
#include <string>

using namespace std;

string getSubstrToStopSubstr(string str, string stopsubstr, int &pos_cursor){
	string result = "";
	if(pos_cursor < 0)
		pos_cursor = 0;

	int pos_stop = str.find(stopsubstr, pos_cursor);
	if (pos_stop == string::npos)
		pos_stop = str.length();
	while (pos_cursor < pos_stop)
		result.push_back(str[pos_cursor++]);
	 
	return result;
}


int Go14(void){	
	string Template;
	cout << "\nEnter a template:\n   ";
	cin.ignore();
	getline(cin, Template);

	string values;
	cout << "\nEnter rules-replacement:\n   ";
	getline(cin, values);

	
	int pos_process = 0;
	string name, value;
	int pos_name;
	name = getSubstrToStopSubstr(values, "=", pos_process);
	while ( ! name.empty()){
		value = getSubstrToStopSubstr(values, ",", ++pos_process);
		pos_name = Template.find('[' + name + ']');
		while (pos_name != string::npos){
			Template.replace(pos_name, name.length() + 2, value);
			pos_name = Template.find('[' + name + ']');
		}
		name = getSubstrToStopSubstr(values, "=", ++pos_process);
	}

	cout << "\nChange template\n   ";
	cout << Template << "\n";

	return 0;
} 