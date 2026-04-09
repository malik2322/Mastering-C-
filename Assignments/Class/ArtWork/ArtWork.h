#ifndef ARTWORKH
#define ARTWORKH

#include "Artist.h"
#include <string>

class Artwork
{
public:
    Artwork();

    Artwork(const std::string &title, int yearCreated, const Artist &artist);

    std::string GetTitle() const;

    int GetYearCreated() const;

    void PrintInfo() const;

private:
    std::string title;
    int yearCreated;
    Artist artist;
};

#endif