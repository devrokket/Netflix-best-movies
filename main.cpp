#include "sstream"
#include "fstream"
#include "iostream"
#include "vector"

std::string fileRoot = "/Users/rocket/CLionProjects/kaggleOop/Best Movies Netflix.csv";

class Netflix {

public:
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

private:
    std::string index;
    std::string title;
    std::string year;
    std::string score;
    std::string numberOfVotes;
    std::string duration;
    std::string genre;
    std::string production;
};

std::vector<Netflix> parseMovies(std::string filename) {
    std::vector<Netflix> netflixes;
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
            Netflix netflix(index, title, year, score, numberOfVotes, duration, genre, production);
            // Add the new Movie to the vector
            netflixes.push_back(netflix);
        }
    }
    else std::cout << "[error] File is not opened!" << std::endl;

    return netflixes;
}



int main() {
    // Call the parseMovies() function to parse the movie data from the file
    std::vector<Netflix> netflixes = parseMovies(fileRoot);
        // Print the details of each movie in the vector
        for (Netflix movie : netflixes) {
            std::cout << "Title: " << movie.getTitle() << std::endl;
            std::cout << "Year: " << movie.getYear() << std::endl;
            std::cout << "Score: " << movie.getScore() << std::endl;
            std::cout << "Number of Votes: " << movie.getVotes() << std::endl;
            std::cout << "Duration: " << movie.getDuration() << std::endl;
            std::cout << "Genre: " << movie.getGenre() << std::endl;
            std::cout << "Production: " << movie.getProduction() << std::endl;
            std::cout << std::endl;
        }

        return 0;
}



/*int main() {
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
        std::cout << "index: " << netflix.getIndex() << "/ title: "
                  << netflix.getTitle() << "/ year: " << netflix.getYear() << "/ score: " << netflix.getScore()
                  << "/ votes: " << netflix.getVotes() << "/ genre: " << netflix.getGenre() << "/ production: " << netflix.getProduction() << std::endl;
    }


}
 */


















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
}*/




