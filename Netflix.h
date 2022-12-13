//
// Created by Rocket on 2022/12/13.
//
// 시작, 중심 클래스

#ifndef KAGGLEOOP_NETFLIX_H
#define KAGGLEOOP_NETFLIX_H

#include "sstream"
#include "fstream"
#include "iostream"
#include "vector"
#include "string"

// Base Class
class Netflix {

public:
    // 생성자
    Netflix(std::string index, std::string title, std::string year, std::string score, std::string numberOfVotes, std::string duration, std::string genres, std::string production)
            : index(index), title(title), year(year), score(score), numberOfVotes(numberOfVotes), duration(duration), genre(genres), production(production) {}

    std::string getIndex() const {return index;}
    std::string getTitle() const {return title;}
    std::string getYear() const {return year;}
    std::string getScore() const {return score;}
    std::string getVotes() const {return numberOfVotes;}
    std::string getDuration() const {return duration;}
    std::string getGenre() const {return genre;}
    std::string getProduction() const {return production;}


    // Virtual destructor (required for polymorphism)
    virtual ~Netflix() = default;

    // Pure virtual function that must be implemented by derived classes --> Netflix를 추상클래스로 만듦.
    virtual std::string getType() const = 0;
    // Pure virtual function for printing movie information
    virtual void printInfo() const = 0;

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
