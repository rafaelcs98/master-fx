#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

    cout << argc << endl;

    int i = 0;

    while(i < argc){
        cout << argv[i] << endl;
        i++;
    }
        
        

    return 0;
}