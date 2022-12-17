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

void UI::getRomanceMovieName() {
    for(Movie movie : netflixes) {
        if(movie.getGenre() == "romance")
            std::cout << movie.getTitle() << std::endl;
    }
}

void UI::getRomanceMovieIndex() {
    for(Movie movie : netflixes) {
        if(movie.getGenre() == "romance")
            std::cout << movie.getIndex() << std::endl;
    }
}

void UI::getKoreaMovieName() {
    for(Movie movie : netflixes) {
        if(movie.getProduction() == "KR")
            std::cout << movie.getTitle() << std::endl;
    }
}

void UI::getOldMoviesName() {
    for(Movie movie : netflixes) {
        if(movie.getYear()=="RELEASE_YEAR") continue;
        int movieYear = std::stoi(movie.getYear());
        if(movieYear < 2000)
            std::cout << movie.getTitle() << " in " << movie.getYear() << std::endl;
    }
}

int UI::startOption() {
    int option;
    std::cout << "Select your option" << std::endl;
    std::cout << "1. View all Netflix best movies in categories." << std::endl;
    std::cout << "2. View romance movies' name" << std::endl;
    std::cout << "3. View romance movies' index" << std::endl;
    std::cout << "4. View all Netflix best movies in one line" << std::endl;
    std::cout << "5. View Korean Netflix best movies" << std::endl;
    std::cout << "6. View movies mode before 2000" << std::endl;
    std::cin >> option;


    if(option == 1) { printCategory(); }
    else if(option == 2) { getRomanceMovieName(); }
    else if(option == 3) { getRomanceMovieIndex(); }
    else if(option == 4) { printLine(); }
    else if(option == 5) { getKoreaMovieName(); }
    else if(option == 6) { getOldMoviesName(); }
    else

    return 0;
};