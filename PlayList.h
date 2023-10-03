//
// Created by hloi on 10/3/2023.
//

#ifndef CH08PLAYLISTFA23_PLAYLIST_H
#define CH08PLAYLISTFA23_PLAYLIST_H
#include "PlaylistNode.h"


class PlayList {
private:
    PlaylistNode* head;
    PlaylistNode* tail;

public:
    PlayList();
    ~PlayList();
    PlayList(const PlayList& other);
    PlayList& operator=(const PlayList& origList);


    void PrintPlaylistNode(); // - Outputs uniqueID, songname, artistName, and songLength based on the format example below.
    void Push_front(PlaylistNode* newNode);
    void Push_back(PlaylistNode* newNode);
    void Insert(int pos);
    void PrintMenu();
    void ExecuteMenu(char c, string title, PlaylistNode* headNode);

    PlaylistNode *getHead() const;
    PlaylistNode *getTail() const;


};


#endif //CH08PLAYLISTFA23_PLAYLIST_H
