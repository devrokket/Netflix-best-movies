//
// Created by Rocket on 2022/12/13.
//

#ifndef KAGGLEOOP_ROMANCEMOVIE_H
#define KAGGLEOOP_ROMANCEMOVIE_H

#include "Netflix.h"
#include "Movie.h"

class RomanceMovie : public Netflix {
public:
    RomanceMovie(const std::string index, std::string title, std::string year, std::string score, std::string numberOfVotes, std::string duration, std::string genres, std::string production)
            : Netflix (index, title, year, score, numberOfVotes, duration, genres, production) {}

    //std::vector<Movie> getRomanceMovie();


    // Override the getType() function to return "Regular"
    std::string getType() const override
    {
        return "Romance";
    }

    void printInfo() const override {
        std::cout << " Romance movie: " << getTitle() << " (" << getDuration() << " minutes)"
                  << " produced by " << getProduction() << "\n";
    }
};


#endif //KAGGLEOOP_ROMANCEMOVIE_H
