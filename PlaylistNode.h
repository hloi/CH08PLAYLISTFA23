//
// Created by hloi on 10/3/2023.
//

#ifndef CH08PLAYLISTFA23_PLAYLISTNODE_H
#define CH08PLAYLISTFA23_PLAYLISTNODE_H

#include <string>

using std::string;

class PlaylistNode {
private:
    string uniqueID; // - Initialized to "none" in default constructor
            string SongName;  // - Initialized to "none" in default constructor
            string artistName; // - Initialized to "none" in default constructor
    int songLength; // - Initialized to 0 in default constructor
            PlaylistNode* nextNodePtr;
public:
    PlaylistNode();
    PlaylistNode(string id, string song, string artist, int len);

    string GetID(); // - Accessor
    string GetSongName(); // - Accessor
    string GetArtistName(); //- Accessor
    int GetSongLength(); // - Accessor
    PlaylistNode* GetNext(); // - Accessor
    void InsertAfter(PlaylistNode* nodePtr); // - Mutator (1 pt)
    void SetNext(PlaylistNode* nodePtr); // - Mutator (1 pt)

};


#endif //CH08PLAYLISTFA23_PLAYLISTNODE_H
