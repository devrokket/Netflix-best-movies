//
// Created by Rocket on 2022/12/13.
//

#ifndef KAGGLEOOP_PARSEMOVIE_H
#define KAGGLEOOP_PARSEMOVIE_H

#include "Netflix.h"
#include "Movie.h"


class ParseMovie {
private:
    std::string fileRoot = "/Users/rocket/CLionProjects/kaggleOop/Best Movies Netflix.csv";

public:
    std::string getFileRoot() {
        return fileRoot;
    }
    std::vector<Movie> parseMovies(std::string filename) {
        std::vector<Movie> netflixes;
        std::ifstream movieFile(fileRoot);

        if(movieFile.is_open()) {
            std::string line;
            while (std::getline(movieFile, line)) {
                // Parse the values from the line
                std::stringstream ss(line);
                std::string index;
                std::string title;
                std::string year;
                std::string score;
                std::string numberOfVotes;
                std::string duration;std::string genre;
                std::string production;
                std::getline(ss, index, ',');
                std::getline(ss, title, ',');
                std::getline(ss, year, ',');
                std::getline(ss, score, ',');
                std::getline(ss, numberOfVotes, ',');
                std::getline(ss, duration, ',');
                std::getline(ss, genre, ',');
                std::getline(ss, production, ',');

                // Create a new Movie object with the parsed values
                Movie netflix(index, title, year, score, numberOfVotes, duration, genre, production);
                // Add the new Movie to the vector
                netflixes.push_back(netflix);
            }
        }
        else std::cout << "[error] File is not opened!" << std::endl;

        return netflixes;
    }
};



#endif //KAGGLEOOP_PARSEMOVIE_H
