//
// Created by Rocket on 2022/12/13.
//

#ifndef KAGGLEOOP_NETFLIX_H
#define KAGGLEOOP_NETFLIX_H

#include "sstream"
#include "fstream"
#include "iostream"
#include "vector"
#include "string"

enum NetflixType {movie, documentation, animation, dramaSeries}; // 넷플릭스에는 다양한 미디어 종류가 있다. 미디어 중 영화로 확장.
// Netflix is abstract class
class Netflix {

public:
    // 생성자
    Netflix(std::string index, std::string title,
            std::string year, std::string score, std::string numberOfVotes,
            std::string duration, std::string genres, std::string production);


    virtual std::string getIndex() const = 0;
    virtual std::string getTitle() const = 0;
    virtual std::string getYear() = 0;
    virtual std::string getScore() const = 0;
    virtual std::string getVotes() const = 0;
    virtual std::string getDuration() const = 0;
    virtual std::string getGenre() const = 0;
    virtual std::string getProduction() const = 0;

    virtual NetflixType getNetflixType() const = 0;
    virtual void printInfo() const = 0;
    virtual ~Netflix() = default;


protected:
    std::string index;
    std::string title;
    std::string year;
    std::string score;
    std::string numberOfVotes;
    std::string duration;
    std::string genre;
    std::string production;
};


#endif //KAGGLEOOP_NETFLIX_H
