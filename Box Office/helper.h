//  helper.h

#ifndef HELPER_H
#define HELPER_H

#include <string>

class helper
{
public:
    helper();

    bool startsWithOrchestra(const std::string & mainStr );
    bool startsWith(const std::string & mainStr, const std::string & toMatch);

    bool endsWithPM(const std::string & mainStr );
    bool endsWith(const std::string & mainStr, const std::string & toMatch);
};

#endif
