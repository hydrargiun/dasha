#include <iostream>
#include <string>
using namespace std;


int main(){
    string str;
    string a = "1";
    string b = "2";
    for (int i =0;i<198; i++) {
        str +=a;
    }

    int rc = 0;
    do {
        rc = 0;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '1' && str[i + 1] == '1' && str[i + 2] == '1' && str[i + 3] == '1') {
                str.replace(i, 4, 2, '3');
                rc = 1;
                break;
            }
        }
        if(rc == 1) {
            for (int i = 0; i < str.size(); i++) {
                if (str[i] == '3' && str[i + 1] == '3' && str[i + 2] == '3') {
                    str.replace(i, 3, 1, '1');
                    break;
                }
            }
        }


    }
    while (rc ==1);
    cout << str;
}


