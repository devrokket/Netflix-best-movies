//
// Created by Rocket on 2022/12/13.
//

#include "UI.h"


void UI::printCategory() {
    // Call the parseMovies() function to parse the movie data from the file

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
}

void UI::printLine() {
    std::cout << "한 줄로 출력" << std::endl;
    for (Movie movie: netflixes) {
        std::cout << "index: " << movie.getIndex() << "/ title: "
        << movie.getTitle() << "/ year: " << movie.getYear() << "/ score: " << movie.getScore()
        << "/ votes: " << movie.getVotes() << "/ genre: " << movie.getGenre() << "/ production: " << movie.getProduction() << std::endl;
    }
}