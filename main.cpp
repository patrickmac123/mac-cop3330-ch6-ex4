#include "std_lib_facilities.h"
#include <iostream>


class Name_value
{
    public:
        string name;
        string value;
};

int main()

{
    string name;
    string value;
    string combined;
    string space = " ";
    bool status = true;
	vector<Name_value> nameValues;

while(status)

    {
    cout << "Please enter a name followed by an interger with a space inbetween:";
    cin >> name;
    cin >> value;

    Name_value nameValue;
    nameValue.name = name;
    nameValue.value = value;

    combined = name + space +value;

    for(int i = 0; i < nameValues.size();i++)
        {
            if(nameValues.at(i).name == nameValue.name)
            {
                cout << "That name is entered twice.\n";
                status = false;
                nameValues.clear();
            }
            else
            {
                status = true;
            }
        }

    if(combined != "NoName 0" && status)
    {
    nameValues.push_back(nameValue);
    }
    else if(combined == "NoName 0")
    {
        status = false;
    }

    }

for(int i = 0; i < nameValues.size();i++)
        {
            cout << nameValues.at(i).name << " ";
            cout << nameValues.at(i).value << "\n";
        }



}




