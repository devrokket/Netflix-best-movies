//
// Created by Rocket on 2022/12/13.
//

#ifndef KAGGLEOOP_MOVIE_H
#define KAGGLEOOP_MOVIE_H

#include "Netflix.h"

class Movie : public Netflix {
public:
    Movie(const std::string index, std::string title, std::string year, std::string score, std::string numberOfVotes, std::string duration, std::string genres, std::string production)
            : Netflix (index, title, year, score, numberOfVotes, duration, genres, production) {}


    // Override the getType() function to return "Regular"
    std::string getType() const override
    {
        return "Movie";
    }

    void printInfo() const override {
        std::cout << " movie: " << getTitle() << " (" << getDuration() << " minutes)"
                  << " produced by " << getProduction() << "\n";
    }

};


#endif //KAGGLEOOP_MOVIE_H
