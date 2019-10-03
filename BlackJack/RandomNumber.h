//
//  RandomNumber.h
//

#ifndef RANDOMNUMBER_H
#define RANDOMNUMBER_H

// This class is fully implemented
// CS 31 students have nothing to do here
class RandomNumber
{
public:
    // what are the min and max values desired for this
    // RandomNumber?
    RandomNumber( int min, int max, bool minInclusive=true, bool maxInclusive=true );
    
    // supply a number between the desired min and max
    // value
    int random( );
private:
    int  mMinimum, mMaximum;
};


#endif
