#include <iostream>
#include <string>

using namespace std;

struct info {
    bool internet;
    bool privacy;
    bool hardwareinfo;
    bool hasvga;
    int taskcomplexlevel;
    int localramsize;
    int localvgasize;
    int storagecap;
    int apibudget;
};

void validation(info i) {
    cout << "Internet: " << (i.internet ? "Yes" : "No") << endl;
    cout << "Privacy: " << (i.privacy ? "Yes" : "No") << endl;
    cout << "Hardware Info: " << (i.hardwareinfo ? "Yes" : "No") << endl;
    cout << "Has VGA: " << (i.hasvga ? "Yes" : "No") << endl;
    cout << "Task Complexity Level: " << i.taskcomplexlevel << endl;
    cout << "Local RAM Size: " << i.localramsize << endl;
    cout << "Local VGA Size: " << i.localvgasize << endl;
    cout << "Storage Capacity: " << i.storagecap << endl;
    cout << "API Budget: " << i.apibudget << endl;
}



int main() {
    


    return 0;
}