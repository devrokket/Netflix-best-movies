//
// Created by Rocket on 2022/12/13.
//

#ifndef KAGGLEOOP_UI_H
#define KAGGLEOOP_UI_H

#include "ParseMovie.h"
#include "RomanceMovie.h"

class UI {
public:
    ParseMovie pMovie;
    std::vector<Movie> netflixes = pMovie.parseMovies(pMovie.getFileRoot());

    void printCategory();
    void getRomanceMovieName();
    void getRomanceMovieIndex();
    void printLine();
    void getKoreaMovieName();
    void getOldMoviesName();
    int startOption();



};


#endif //KAGGLEOOP_UI_H
