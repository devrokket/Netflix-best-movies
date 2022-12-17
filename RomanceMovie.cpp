//
// Created by Rocket on 2022/12/13.
//

#include "RomanceMovie.h"

void RomanceMovie::printInfo() const {
std::cout << " Romance movie: " << getTitle() << " (" << getDuration() << " minutes)"
<< " produced by " << getProduction() << "\n";
}
