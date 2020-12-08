#include <iostream>
#include <string>
using namespace std;


int main(){
    string str;
    string a = "1";
    string b = "2";
    for (int i =0;i<2018; i++) {
        str +=a;
    }
    for (int i =0;i<2019; i++) {
        str +=b;
    }
    int rc = 0;
    do {
        rc = 0;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '1' && str[i + 1] == '1' && str[i + 2] == '1') {
                str.replace(i, 3, 1, '2');
                rc = 1;
                break;
            }
        }
        if(rc == 1) {
            for (int i = 0; i < str.size(); i++) {
                if (str[i] == '2' && str[i + 1] == '2' && str[i + 2] == '2') {
                    str.replace(i, 3, 1, '1');
                    break;
                }
            }
        }


    }
    while (rc ==1);
    cout << str;
}


