#include "Read.h"
/*
struct Movie {
    int index;
    std::string title;
    int releaseYear;
    float score;
    int numberOfVotes;
    int duration;
    std::string genre;
    std::string production;
};*/

class Netflix {

public:
    std::string index;
    std::string title;
    std::string year;
    std::string score;
    std::string numberOfVotes;
    std::string duration;
    std::string genre;
    std::string production;

    Netflix(std::string index_, std::string title_, std::string year_, std::string score_, std::string numberOfVotes_, std::string duration_, std::string genres_, std::string production_)
    : index(index_), title(title_), year(year_), score(score_), numberOfVotes(numberOfVotes_), duration(duration_), genre(genres_), production(production_) {}
};

int main() {
    // Open the input file
    std::ifstream myFile("/Users/rocket/CLionProjects/kaggleOop/Best Movies Netflix.csv");
    std::string line;

    // Create a vector to store the Movie objects
    std::vector<Netflix> netflixes;

    // Read the file line by line
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
        Netflix netflix(index, title, year, score, numberOfVotes, duration, genre, production);

        // Add the new Movie to the vector
        netflixes.push_back(netflix);


    }
    for (const auto& netflix : netflixes) {
        std::cout << "index: " << netflix.index << "/ title: "
        << netflix.title << "/ year: " << netflix.year << "/ score: " << netflix.score
        << "/ votes: " << netflix.numberOfVotes << "/ genre: " << netflix.genre << "/ production: " << netflix.production << std::endl;
    }


}


















/*int main()
{
*//*    Read ReadMyFile;
    *//**//*ReadMyFile.ReadWord();
    ReadMyFile.ReadLine();*//**//*
    ReadMyFile.StoreIndex();
    return 0;*//*

    std::string fileRoot = "/Users/rocket/CLionProjects/kaggleOop/Best Movies Netflix.csv";

    // The maximum number of columns that can be read from the file
    const int MAX_COLUMNS = 700;

// The maximum number of characters that can be read from a single cell
    const int MAX_CELL_LENGTH = 1024;

    std::ifstream file(fileRoot);

    // Check if the file was opened successfully
    if (!file.is_open()) {
        std::cout << "Error: Could not open file" << std::endl;
        return 1;
    }

    // Read the file line by line
    std::string line;
    while (std::getline(file, line)) {
        // Parse the line into cells
        std::vector<std::string> cells;
        std::string cell;
        for (int i = 0; i < line.size(); i++) {
            // Check if we have reached the end of a cell
            if (line[i] == ',') {
                cells.push_back(cell);
                cell.clear();
            } else {
                cell.push_back(line[i]);
            }
        }

        // Add the last cell, since it won't be followed by a comma
        cells.push_back(cell);

        // Print the cells
        for (const auto& cell : cells) {
            std::cout << cell << ' ';
        }
        std::cout << std::endl;
        //cells.clear();
        std::cout << "Vector: " << cells[] << std::endl;
    }

    return 0;
}


//Read::~Read() {}*/
