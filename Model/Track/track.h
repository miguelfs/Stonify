#ifndef TRACK_H
#define TRACK_H

#include <string>

class Track
{
public:
    Track();
private:
    Album album;
    Artist artist;
    std::string availableMarkets[];
    int discNumber;
    int durationMs;
    bool explicito;
    Id externalIds [];
    URL externalUrls [];
    std::tring href;
    std::string id;
    bool isPlayable;
    LinkedTrack linkedFrom;
    Restriction restrictions[];
    std::string name;
    int popularity;
    std::string previewLink; //A link to a 30 second preview (MP3 format) of the track. null if not available.
    integer trackNumber;
    std::string type;
    std::string uri;

};

#endif // TRACK_H
