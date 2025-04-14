#include <iostream>
using namespace std;
#include <string>


string Read(string msg) {
    cout << msg << endl;
    string name;
    getline(cin, name);
    return name;
}


string trimStringLeft(string s1) {
    string result = "";
    bool startCopying = false;

    for (int i = 0; i < s1.length(); i++) {
        if (!startCopying && s1[i] != ' ') {
            startCopying = true; // وجدنا أول حرف غير فراغ
        }

        if (startCopying) {
            result += s1[i]; // نبدأ في إضافة الأحرف بعد أول حرف غير فراغ
        }
    }

    return result;
}

string trimStringRight(string s1) {
    string result = "";
    bool startCopying = false;

    for (int i = s1.length() - 1; i >= 0; i--) {
        if (!startCopying && s1[i] != ' ') {
            startCopying = true; // وجدنا أول حرف غير فراغ من اليمين
        }

        if (startCopying) {
            result = s1[i] + result; // نضيف من اليمين لليسار لكن نحفظ الترتيب
        }
    }

    return result;
}




int main() {
    string s = Read("enter name");
    cout << "[" << trimStringLeft(s) << "]";  // الناتج: [Hello World]
    cout << endl << "term right" << endl;
    cout << "[" << trimStringRight(s) << "]"<<endl;

    cout << "After Tirm" << endl;
    cout << "[" << trimStringLeft(trimStringRight(s)) << "]";  // الناتج: [Hello World]

    return 0;
}
