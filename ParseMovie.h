//
// Created by Rocket on 2022/12/13.
//

#ifndef KAGGLEOOP_PARSEMOVIE_H
#define KAGGLEOOP_PARSEMOVIE_H

#include "Netflix.h"
#include "Movie.h"


class ParseMovie {
private:
    std::string fileRoot = "/Users/rocket/CLionProjects/kaggleOop/Best Movies Netflix.csv";

public:
    std::string getFileRoot() { return fileRoot; }
    std::vector<Movie> parseMovies(std::string filename);
};



#endif //KAGGLEOOP_PARSEMOVIE_H
