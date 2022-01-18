#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    struct Movie
    {
        string Name;
        int ReleaseYear;
    };

    vector<Movie> GoodDisneyMovies;
    GoodDisneyMovies.push_back(Movie());

    GoodDisneyMovies[0].Name = "Frozen";
    GoodDisneyMovies[0].ReleaseYear = 2013;

    GoodDisneyMovies.push_back(Movie());
    
    GoodDisneyMovies[1].Name = "Cinderella";
    GoodDisneyMovies[1].ReleaseYear = 1950;

    GoodDisneyMovies.push_back(Movie());

    GoodDisneyMovies[2].Name = "Wreck it Ralph";
    GoodDisneyMovies[2].ReleaseYear = 2012;

    GoodDisneyMovies.push_back(Movie());

    GoodDisneyMovies[3].Name = "Snow White";
    GoodDisneyMovies[3].ReleaseYear = 1938;

    // int x = 0;

    vector<Movie> DisneyMovies(GoodDisneyMovies.begin(), GoodDisneyMovies.end());

    for (const auto &arr : DisneyMovies)
    {
        cout << "Name: " << arr.Name << endl << "Release Year: " << arr.ReleaseYear << endl;
    }
}
