#include "std_lib_facilities.h"

#include <iostream>
class Name_value {
public:
    string name;
    int value;
    Name_value(string str, int val)
        :name(str), value(val) { }
};

int main()
try {
    
    //Prompting the user what to do once the terminal window is opened
    cout << "Enter a name with a numerical value for example 'bob 9', once finished entering names enter NoName and 0 to terminate window.\n";
    
    string name = "";
    
    int value = -1;
    vector<Name_value> nv_vec;
    //While the input from the user is not equal to the command that terminates the window keep collecting the users input and put it into a list
    while (cin>>name>>value && !(name=="NoName" && value==0)) {
        for (int i = 0; i<nv_vec.size(); ++i)
           
            if (name == nv_vec[i].name) error("name occurs twice: ",name);
        
            nv_vec.push_back(Name_value(name,value));
    }

   //Once window is terminated print out list of names and numbers that the user has inputted
    for (int i = 0; i<nv_vec.size(); ++i) {
        cout << "(" << nv_vec[i].name << ',' << nv_vec[i].value << ")\n";
    }
}
catch (exception& e) {
    cerr << "unknown: " << e.what() << '\n';
    keep_window_open();
    return 1;
}
