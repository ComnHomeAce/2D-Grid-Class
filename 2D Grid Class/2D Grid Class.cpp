/*
2D Grid Class.cpp : This program will define the class Grid, with one private data
field (a 10 by 10 two-dimensional array of integer data type). It includes:
- a no-argument constructor that initializes all the elements of the array to zero
- a get function that returns the element at row i and column j of the array
- a set function that sets the element at row i and column j of the array to a given value
- a main function in which:
    - an object of the type Grid is created
    - the value of the element in location 3, 5 is printed
    - the value of the element in location 3, 5 is set to 100
    - the new value of the element in location 3, 5 is printed
*/

#include <iostream>
using namespace std;

//Define class Grid
class Grid
{
private:
    //Attribute
    int grid[10][10];

public:  
    //Constructor
    Grid();

    //Functions
    int get(int i, int j); //Gets value of element at i, j
    void set(int i, int j, int n); //Sets value of element at i, j to n
};

//Implements class Grid
Grid::Grid()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            grid[i][j] = 0;
        }
    }
}

//Implements class Grid function get
int Grid::get(int i, int j)
{
    return grid[i][j]; //Gets value of element at i, j
}

//Implements class Grid function set
void Grid::set(int i, int j, int n)
{
    grid[i][j] = n; //Sets value of element at i, j to n
}

int main()
{
    //Create an object of type Grid
    Grid g1;
    //Print current value of element at 3, 5
    cout << "Current value of element at 3, 5 is " << g1.get(3, 5) << endl;
    //Set value of element at 3, 5 to 100
    g1.set(3, 5, 100);
    //Print new value of element at 3, 5
    cout << "New value of element at 3, 5 is " << g1.get(3, 5) << endl;
}