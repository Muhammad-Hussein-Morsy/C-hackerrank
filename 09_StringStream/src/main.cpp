#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
	// Complete this function
	static	vector<int> output;
	int  element;
	char coma;
	stringstream ss(str);

	 while (ss >> element )
	 {
	    // printf("%d",element);
	     output.push_back(element);
	     ss>>coma;
	 }
	 return output;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
   for(unsigned int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
