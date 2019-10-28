//  helper.cpp

#include "helper.h"

helper::helper()
{

}

bool helper::endsWithPM(const std::string & mainStr )
{
    return( endsWith( mainStr, "PM" ) );
}

bool helper::endsWith(const std::string & mainStr, const std::string & toMatch)
{
    bool result( false );
    if(mainStr.size() >= toMatch.size() &&
       mainStr.compare(mainStr.size() - toMatch.size(), toMatch.size(), toMatch) == 0)
    {
        result = true;
    }
    return( result );
}


bool helper::startsWith(const std::string & mainStr, const std::string & toMatch)
{
    bool result( false );
    // std::string::find returns 0 if toMatch is found at starting
    if(mainStr.find(toMatch) == 0)
    {
        result = true;
    }
    return( result );
}


bool helper::startsWithOrchestra(const std::string & mainStr )
{
    return( startsWith( mainStr, "Orchestra" ) );
}
