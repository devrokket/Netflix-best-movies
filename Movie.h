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

    std::string getIndex() const override { return index; };
    std::string getTitle() const override { return title; };
    std::string getYear() override { return year; }
    std::string getScore() const override { return score; }
    std::string getVotes() const override { return numberOfVotes; }
    std::string getDuration() const override { return duration; }
    std::string getGenre() const override { return genre; }
    std::string getProduction() const override { return production; }

    NetflixType getNetflixType() const override;
    void printInfo() const override;

};


#endif //KAGGLEOOP_MOVIE_H
