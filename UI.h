//
// Created by Rocket on 2022/12/13.
//

#ifndef KAGGLEOOP_UI_H
#define KAGGLEOOP_UI_H

#include "parseMovie.h"

class UI {
public:
    ParseMovie pMovie;
    std::vector<Movie> netflixes = pMovie.parseMovies(pMovie.getFileRoot());

    void printCategory();

    void printLine();

};


#endif //KAGGLEOOP_UI_H
