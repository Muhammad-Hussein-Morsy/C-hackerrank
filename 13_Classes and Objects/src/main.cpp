#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student
{
private:
	 unsigned int scores[5];
public:
	 void input()
	 {
		 for(int i=0;i<5;i++)
		 {
			 cin>>scores[i];
		 }
	 }
	 int calculateTotalScore()
	 {
		 int sum=0;
		 for(unsigned int i=0;i<5;i++)
		 {
			 sum+=scores[i];
		 }
		 return sum;
	 }
};
int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student  st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
