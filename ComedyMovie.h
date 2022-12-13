//
// Created by Rocket on 2022/12/13.
//

#ifndef KAGGLEOOP_COMEDYMOVIE_H
#define KAGGLEOOP_COMEDYMOVIE_H

#include "Netflix.h"
#include "Movie.h"

class ComedyMovie : public Netflix {
    ComedyMovie(const std::string index, std::string title, std::string year, std::string score, std::string numberOfVotes, std::string duration, std::string genres, std::string production)
            : Netflix (index, title, year, score, numberOfVotes, duration, genres, production) {}

    // Override the getType() function to return "Children's"
    std::string getType() const override
    {
        return "Comedy";
    }

    void printInfo() const override {
        std::cout << " movie: " << getTitle() << " (" << getDuration() << " minutes)"
                  << " produced by " << getProduction() << "\n";
    }

};


#endif //KAGGLEOOP_COMEDYMOVIE_H
