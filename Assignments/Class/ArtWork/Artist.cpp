#include "Artist.h"
#include <iostream>

Artist::Artist()
    : artistName("unknown"), birthYear(-1), deathYear(-1)
{
}

Artist::Artist(const std::string &artistName, int birthYear, int deathYear)
    : artistName(artistName), birthYear(birthYear), deathYear(deathYear)
{
}

std::string Artist::GetName() const
{
    return artistName;
}

int Artist::GetBirthYear() const
{
    return birthYear;
}

int Artist::GetDeathYear() const
{
    return deathYear;
}

void Artist::PrintInfo() const
{
    std::cout << "Artist: " << artistName << " ";
    if (birthYear == -1 && deathYear == -1)
    {
        std::cout << "(unknown)";
    }
    else if (birthYear != -1 && deathYear == -1)
    {
        std::cout << "(" << birthYear << " to present)";
    }
    else
    {
        std::cout << "(" << birthYear << " to " << deathYear << ")";
    }
    std::cout << std::endl;
}
