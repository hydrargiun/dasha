#include <iostream>
using namespace std;

int main() {
 int sz;
 cin >>sz;
 int mas[sz];
 for(int i =0; i<sz; i++){
     mas[i] =1;
 }
   int arr33[sz/2 + 3];
    for (int i = 0; i < sz/2 +3; i++) {
        arr33[i] =0;
    }
    int j =0;
    for (int i = 0; i < sz; i++) {
        if(mas[i] == 1 && mas[i+1]==1 && mas[i+2]==1 && mas[i+3]==1){
           arr33[j]= 3;
           j++;
           arr33[j]=3;
           j++;
           i = i+3;
        }
        else {
            arr33[j] = 1;
            j++;
        }
    }

    cout<<endl;
    int arr11[(sz/2 +3 + 3)/3 +6];
    int k =0;
    for (int i = 0; (i < sz/2 +3 && arr33[i] !=0); i++) {
        if (arr33[i] ==3 && arr33[i+1] == 3 && arr33[i+2]){
            arr11[k] = 1;
            k++;
            i=i+2;
        }
        else {
            arr11[k] = 1;
            k++;
        }
    }
    for (int i =0; i < k; i++){
    cout << arr11[i];
}

}