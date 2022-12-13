#include "sstream"
#include "fstream"
#include "iostream"
#include "vector"
#include "string"

std::string fileRoot = "/Users/rocket/CLionProjects/kaggleOop/Best Movies Netflix.csv";

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

class Movie : public Netflix {
public:
    Movie(const std::string index, std::string title, std::string year, std::string score, std::string numberOfVotes, std::string duration, std::string genres, std::string production)
            : Netflix (index, title, year, score, numberOfVotes, duration, genres, production) {}

    // Override the getType() function to return "Regular"
    std::string getType() const override
    {
        return "Romance";
    }

    void printInfo() const override {
        std::cout << " movie: " << getTitle() << " (" << getDuration() << " minutes)"
                  << " produced by " << getProduction() << "\n";
    }

};

class RomanceMovie : public Netflix {
    RomanceMovie(const std::string index, std::string title, std::string year, std::string score, std::string numberOfVotes, std::string duration, std::string genres, std::string production)
        : Netflix (index, title, year, score, numberOfVotes, duration, genres, production) {}

    // Override the getType() function to return "Regular"
    std::string getType() const override
    {
        return "Romance";
    }

    void printInfo() const override {
        std::cout << " Romance movie: " << getTitle() << " (" << getDuration() << " minutes)"
                  << " produced by " << getProduction() << "\n";
    }
};

class ComedyMovie : public Netflix {
    ComedyMovie(const std::string index, std::string title, std::string year, std::string score, std::string numberOfVotes, std::string duration, std::string genres, std::string production)
            : Netflix (index, title, year, score, numberOfVotes, duration, genres, production) {}

    // Override the getType() function to return "Children's"
    std::string getType() const override
    {
        return "Comedy";
    }

    void printInfo() const override {
        std::cout << " movie: " << getTitle() << " (" << getDuration() << " minutes)"
                  << " produced by " << getProduction() << "\n";
    }

};

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

std::vector<Movie> selectByProduction(std::vector<Movie>& movies, std::string production) {
    std::vector<Movie> result;
    std::string usa = "US";
    for (Movie movie : movies) {
        if (movie.getProduction() == usa) {
            result.push_back(movie);
        }
    }
    return result;
}

int main() {
    // Call the parseMovies() function to parse the movie data from the file
    std::vector<Movie> netflixes = parseMovies(fileRoot);
        // Print the details of each movie in the vector
        std::cout << "항목별 출력" << std::endl;
        for (Movie movie : netflixes) {
            std::cout << "Title: " << movie.getTitle() << std::endl;
            std::cout << "Year: " << movie.getYear() << std::endl;
            std::cout << "Score: " << movie.getScore() << std::endl;
            std::cout << "Number of Votes: " << movie.getVotes() << std::endl;
            std::cout << "Duration: " << movie.getDuration() << std::endl;
            std::cout << "Genre: " << movie.getGenre() << std::endl;
            std::cout << "Production: " << movie.getProduction() << std::endl;
            std::cout << std::endl;
        }

        std::cout << "한 줄로 출력" << std::endl;
        for (Movie movie: netflixes) {
        std::cout << "index: " << movie.getIndex() << "/ title: "
                  << movie.getTitle() << "/ year: " << movie.getYear() << "/ score: " << movie.getScore()
                  << "/ votes: " << movie.getVotes() << "/ genre: " << movie.getGenre() << "/ production: " << movie.getProduction() << std::endl;
    }

    std::cout << "hello";
    std::vector<Netflix> result;
    // Code to populate the result vector goes here
    for (Netflix& movie : result) {
        std::cout << "Index: " << movie.getIndex() << std::endl;
    }

    return 0;
}
