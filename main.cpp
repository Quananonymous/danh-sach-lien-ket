#include <iostream>
using namespace std;
#include "list.h"

int main(){
    List<int> l;
    int i = 0;
    while(1){
        for (int k = 0; k < 10; k++){
            i++;
            l.Add(i);
        }
        l.PrintAll();
        cout<<endl;
        char ch;
        cin>> ch;
    }
    return 0;
}