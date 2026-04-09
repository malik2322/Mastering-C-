#include "ArtWork.h"
#include <iostream>

Artwork::Artwork()
    : title(""), yearCreated(0), artist()
{
}

Artwork::Artwork(const std::string &title, int yearCreated, const Artist &artist)
    : title(title), yearCreated(yearCreated), artist(artist)
{
}

std::string Artwork::GetTitle() const
{
    return title;
}

int Artwork::GetYearCreated() const
{
    return yearCreated;
}

void Artwork::PrintInfo() const
{
    artist.PrintInfo();
    std::cout << "Title: " << title << ", " << yearCreated << std::endl;
}
