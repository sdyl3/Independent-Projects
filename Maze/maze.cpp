//
//  maze.cpp
//  maze
//
//  Created by Sandy Li on 5/3/19.
//  Copyright © 2019 Yinling Li. All rights reserved.
//

#include <iostream>
#include <string>
#include <cassert>
#include "grid.h"

using namespace std;

bool isCourseWellFormed(string course);
int driveSegment(int r, int c, char dir, int maxSteps);
int driveCourse(int sr, int sc, int er, int ec, string course, int& nsteps);

int main()
{
    setSize(3,4);
    setWall(1,4);
    setWall(2,2);
    setWall(3,2);
    
    assert(isCourseWellFormed(""));
    assert(isCourseWellFormed("S"));
    assert(isCourseWellFormed("n2e1"));
    assert(isCourseWellFormed("N2eE01n0e2e1"));
    assert(isCourseWellFormed("W42"));
    
    assert(!isCourseWellFormed("3sn"));
    assert(!isCourseWellFormed("e1x"));
    assert(!isCourseWellFormed("N144"));
    assert(!isCourseWellFormed("w2+w3"));
    
    assert(driveSegment(3, 1, 'N', 2) == 2);
    assert(driveSegment(3, 1, 'E', 3) == 0);
    assert(driveSegment(0, 0, 'N', 2) == 0);
    assert(driveSegment(3, 1, 'a', 2) == -1);
    assert(driveSegment(-3, -1, 's', -2) == -1);

    int len;
    len = -999;  // so we can detect whether driveCourse sets len
    assert(driveCourse(3,1, 3,4, "N2eE01n0s2e1", len) == 0  &&  len == 7);
    len = -999;  // so we can detect whether driveCourse sets len
    assert(driveCourse(3,1, 3,4, "e1x", len) == 2  &&  len == -999);
    len = -999;  // so we can detect whether driveCourse sets len
    assert(driveCourse(2,4, 1,1, "w3n1", len) == 3  &&  len == 1);
    len = -999;  // so we can detect whether driveCourse sets len
    assert(driveCourse(-2,-4, -1,-1, "w3n1", len) == 2  &&  len == -999);
    len = -999;  // so we can detect whether driveCourse sets len
    assert(driveCourse(3,1, 2,4, "w1n3", len) == 1  &&  len == -999);
    cout << "All tests succeeded" << endl;
}

//  check to see if the character is an acceptable letter
//  letter is one of the letters N, E, S, or W, in either upper or lower case
bool isletter(char letter)
{
    return (letter == 'N' || letter == 'E' || letter == 'W' || letter == 'S' || letter == 'n' || letter == 'e' || letter == 'w' || letter == 's');
}

// check if the course segment only contains digits and specific letter
bool isdigitsAndletters(string course){
    for (size_t i = 0; i != course.size(); i++){
        if (!isletter(course [i]) && !isdigit(course[i]))
            return false;
    }
    return true;
}

//  This function returns true if its parameter is a syntactically valid course, and false otherwise.
bool isCourseWellFormed(string course){
    // check if the course segment is empty
    if (course.empty())
        return true;
    //check if string contains zero or more segments
    if (course.size() < 0)
        return false;
    // check if string has valid digits and letters
    if (!isdigitsAndletters(course))
        return false;
    
    for (size_t i = 0; i != course.size(); i++){
        // check if the course segment start with a letter
        if (isletter(course[i])){
            return true;
        }

        // check if the course segment allows zero, one or two digits
        string numberofDigits = "";
        while(isdigit(course[i]))
        {
            numberofDigits += course[i];
        }
        if (numberofDigits.size() > 2)
            return false;
    }
    return true;
}

// check to see if grid is at a valid empty grid position
bool isvalidgrid(int r, int c){
    if (r < 0 || r > getRows())
        return false;
    if (c < 0 || c > getCols())
        return false;
    return true;
}

//This function determines the number of steps a car starting at position (r,c) could travel in the direction indicated by dir.
int driveSegment(int r, int c, char dir, int maxSteps){
    int steps = 0;
    // check to see if (r, c) is a valid empty grid position
    if (!isvalidgrid(r, c))
        return -1;
    // check to see if dir is not an invalid direction character
    if (!isletter(dir))
        return -1;
    // check to see if maxSteps is not negative
    if (maxSteps < 0)
        return -1;

    // car is moving to north
    if (dir == 'N' || dir == 'n'){
        for (int i = 0; i < maxSteps; i++){
            r--;
            // check to see if the car moves to a cell containing a wall or running of the edge of the grid
            if (r == 0 || isWall(r, c))
                return steps;
            // function returns the maximum number of valid steps
            else
                steps++;
        }
    }
    
    // car is moving to east
    if (dir == 'E' || dir == 'e'){
        for (int i = 0; i < maxSteps; i++){
            // check to see if the car moves to a cell containing a wall or running of the edge of the grid
            c++;
            if (c > getCols() || isWall(r, c))
                return steps;
            // function returns the maximum number of valid steps
            else
                steps++;
        }
    }
        
    // car is moving to west
    if (dir == 'W' || dir == 'w'){
        for (int i = 0; i < maxSteps; i++){
            c--;
            if (c == 0 || isWall(r, c))
                return steps;
            // function returns the maximum number of valid steps
            else
                steps++;
        }
    }
    
    // car is moving to south
    if (dir == 'S' || dir == 's'){
        for (int i = 0; i < maxSteps; i++){
            // check to see if the car moves to a cell containing a wall or running of the edge of the grid
            r++;
            if (r > getRows() || isWall(r, c))
                return steps;
            // function returns the maximum number of valid steps
            else
                steps++;
        }
    }
    return steps;
}

// This function determines the number of steps a car starting at position (sr,sc) travels when following the indicated course, which should lead to the end position (er,ec).
int driveCourse(int sr, int sc, int er, int ec, string course, int& nsteps){
    // nsteps starts from 0
    nsteps = 0;
    // return 2 if course is syntactically valid
    if (!isdigitsAndletters(course))
        return 2;
    // return 2 if (sr, sc), (er, sc) is a valid empty grid position
    if (!isvalidgrid(sr, sc) && !isvalidgrid(er, ec))
        return 2;
        
    int maxSteps = 0;
    for (int i = 0; i < maxSteps; i++){
        // If (sr,sc) and (er,ec) are empty grid positions and course is syntactically valid
        if (isvalidgrid(sr, sc) && isvalidgrid(er, ec) && isdigitsAndletters(course))
        {
            // cell containing a wall or running off the edge of the grid
            if (isWall(sr, sc) || sr > getRows() || sc > getCols())
            {
                return 3;
                // set nsteps to the maximum number of steps that the car can travel along the course
            }
            if (isWall(er, ec) || er > getRows() || ec > getCols()){
                return 3;
            }
            // sets nsteps to the number of steps a car starting at (sr,sc) travels when driving the complete course
            if (!isWall(sr, sc) || !isWall(er, ec))
                nsteps++;
            // returns 0 if the car ends up at (er,ec)
            if (sr == er && sc == ec)
                return 0;
            else
                return 1;
        }
    }
    return nsteps;
}
