#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using std::cout;

int main(int argc, char** argv){

        cout << "Hello World\n";

        if(argc > 1){
            cout << "You entered " << argc << " args\n"; 
        }

        for(int i = 0; i < argc; i++){
            cout << argv[i] << "\n";
        }
        return 0;
}
