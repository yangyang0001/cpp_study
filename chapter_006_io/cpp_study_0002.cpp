//
// Created by 杨建伟 on 2021/3/15.
//

# include <iostream>
# include <climits>
# include <string>
# include <cstring>
# include <vector>
# include <array>
# include <ctime>
# include <cctype>
# include <cmath>
# include <fstream>

using namespace std;

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);

    ifstream inFile;
    inFile.open("D:\\CLionProjects\\cpp_study\\chapter_006_io\\first.txt");

    char line[1024];
    if(inFile.is_open()) {
        while(inFile.good()) {
            inFile.getline(line, 1024);
            cout << line << endl;
        }
        inFile.close();
    }

    return 0;
}


