//
// Created by 杨建伟 on 2021/4/19.
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

#ifndef CPP_STUDY_CPP_STUDY_0001_H
#define CPP_STUDY_CPP_STUDY_0001_H

class PingPangPlayer {
private:
    string first_name;
    string last_name;
    bool has_table;

public:
    PingPangPlayer(const string & fn = "none", const string & ln =  "none", bool ht = false);
    void name() const;
    bool hasTable() const {return has_table;};
    void resetHasTable();
};


class MinePingPangPlayer : public PingPangPlayer {

};

#endif //CPP_STUDY_CPP_STUDY_0001_H
