//
// Created by Rocket on 2022/12/07.
//

#include "Read.h"

class Netflix {

public:
    Netflix(std::string index_, std::string title_, std::string year_, std::string score_, std::string numberOfVotes_,
            std::string duration_, std::string genres_, std::string production_);

    /*std::string GetIndex() { return index; }
    std:string GetTitle() { return title; }
    s Netflix(std::string index_, std::string title_, std::string year_, std::string score_, std::string numberOfVotes_, std::string duration_, std::string genres_, std::string production_)
    : index(index_), title(title_), year(year_), score(score_), numberOfVotes(numberOfVotes_), duration(duration_), genre(genres_), production(production_) {}td::string GetYear() const { return year; }
    std::string GetScore() const { return score; }
    std::string GetVotes() { return numberofVotes; }
    std::string GetDuration() { return duration; }
    std::string GetGenre() { return genre; }
    std::string GetProduction() { return production; }
*/
    std::string index;
    std::string title;
    std::string year;
    std::string score;
    std::string numberOfVotes;
    std::string duration;
    std::string genre;
    std::string production;
};

void Read::ReadLine() {
    std::ifstream myFile("/Users/rocket/CLionProjects/kaggleOop/Best Movies Netflix.csv");
    std::string line;
    std::vector<Netflix> netflixes;

    while (std::getline(myFile, line)) {
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
        Netflix netflix(index, title, year, score,
                        numberOfVotes, duration, genre, production);

        // Add the new Movie to the vector
        netflixes.push_back(netflix);
    }
    for (const auto& netflix : netflixes) {
        std::cout << "index: " << netflix.index << "/ title: "
                  << netflix.title << "/ year: " << netflix.year << "/ score: " << netflix.score
                  << "/ votes: " << netflix.numberOfVotes << "/ genre: " << netflix.genre << "/ production: "
                  << netflix.production << std::endl;
    }
}
/*
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

// A simple class to represent a movie
class Movie
{
public:
    std::string title;
    std::string director;
    int year;
    int duration;

    // Constructor to initialize a movie with the given values
    Movie(const std::string &title, const std::string &director, int year, int duration)
            : title(title), director(director), year(year), duration(duration)
    {
    }

    // Output the movie's information to the given stream
    void output(std::ostream &os) const
    {
        os << title << ", directed by " << director << " (" << year << ") [" << duration << " mins]";
    }
};

// Read the movie information from the given input stream and return a vector of movies
std::vector<Movie> readMovies(std::istream &is)
{
    std::vector<Movie> movies;

    std::string line;
    while (std::getline(is, line))
    {
        // Split the line by commas and convert the resulting strings to the appropriate values
        std::istringstream lineStream(line);
        std::string title, director;
        int year, duration;
        std::getline(lineStream, title, ',');
        std::getline(lineStream, director, ',');
        lineStream >> year;
        lineStream.ignore(); // Ignore the comma after the year
        lineStream >> duration;
-------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

// Define a Movie class to represent a movie
        class Movie {
        public:
            // Define the constructor to initialize a movie
            Movie(std::string title, std::string director, int year) : title(title), director(director), year(year) {}

            // Define the getters to return the movie's attributes
            std::string getTitle() const { return title; }
            std::string getDirector() const { return director; }
            int getYear() const { return year; }

        private:
            std::string title;
            std::string director;
            int year;
        };

// Define a function to parse a CSV file containing movie information
        std::vector<Movie> parseMovies(std::string filename) {
            std::vector<Movie> movies;

            std::ifstream file(filename);

            // Check if the file was successfully opened
            if (file.is_open()) {
                std::string line;

                // Read each line of the file
                while (std::getline(file, line)) {
                    std::stringstream lineStream(line);
                    std::string cell;
                    std::vector<std::string> cells;

                    // Split the line into cells using the comma as a delimiter
                    while (std::getline(lineStream, cell, ',')) {
                        cells.push_back(cell);
                    }

                    // If the line has the expected number of cells, create a movie
                    // object with the information and add it to the vector of movies
                    if (cells.size() ==*/






