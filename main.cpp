#include "Netflix.h"
#include "Movie.h"
#include "ParseMovie.h"
#include "RomanceMovie.h"




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
    ParseMovie pMovie;
    std::vector<Movie> netflixes = pMovie.parseMovies(pMovie.getFileRoot());
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

    std::vector<Netflix> result;
    // Code to populate the result vector goes here
    for (Netflix& movie : result) {
        std::cout << "Index: " << movie.getIndex() << std::endl;
    }


    RomanceMovie romanceMovie1("214", "Crazy, Stupid, Love,", "2011", "7.4", "1111.111", "93", "romance", "US");
    std::cout << romanceMovie1.getType() << std::endl;
    romanceMovie1.printInfo();
    return 0;
}
