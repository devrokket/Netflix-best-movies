//
// Created by Rocket on 2022/12/13.
//

#include "ParseMovie.h"

std::vector<Movie> ParseMovie::parseMovies(std::string filename) {
    std::vector<Movie> movies;
    std::ifstream movieFile(fileRoot);

    if (movieFile.is_open()) {
        std::string line;
        while (std::getline(movieFile, line)) {
            // Parse the values from the line
            std::stringstream ss(line);
            std::string index;
            std::string title;
            std::string year;
            std::string score;
            std::string numberOfVotes;
            std::string duration;
            std::string genre;
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
            Movie movie(index, title, year, score, numberOfVotes, duration, genre, production);
            // Add the new Movie to the vector
            movies.push_back(movie);
        }
    }
    else std::cout << "[error] File is not opened!" << std::endl;

    return movies;
}

