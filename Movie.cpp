//
// Created by Rocket on 2022/12/13.
//

#include "Movie.h"


NetflixType Movie::getNetflixType() const {
    std::cout << "This type of Neflix is 'movie'" << std::endl;
    return movie;
}

void Movie::printInfo() const {
    std::cout << " movie: " << getTitle() << " (" << getDuration() << " minutes)"
    << " produced by " << getProduction() << "\n";
}