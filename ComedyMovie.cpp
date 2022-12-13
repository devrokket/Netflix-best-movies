//
// Created by Rocket on 2022/12/13.
//

#include "ComedyMovie.h"

ComedyMovie::ComedyMovie(const std::string index, std::string title,
                         std::string year, std::string score,
                         std::string numberOfVotes, std::string duration,
                         std::string genres, std::string production)
        : Netflix (index, title, year, score, numberOfVotes, duration, genres, production) {}


void ComedyMovie::printInfo() const {
std::cout << " movie: " << getTitle() << " (" << getDuration() << " minutes)"
<< " produced by " << getProduction() << "\n";
}