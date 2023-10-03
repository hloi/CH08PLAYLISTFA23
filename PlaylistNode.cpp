//
// Created by hloi on 10/3/2023.
//

#include "PlaylistNode.h"

string PlaylistNode::GetID() {
    return uniqueID;
}

string PlaylistNode::GetSongName() {
    return SongName;
}

string PlaylistNode::GetArtistName() {
    return artistName;
}

int PlaylistNode::GetSongLength() {
    return songLength;
}

PlaylistNode *PlaylistNode::GetNext() {
    return nextNodePtr;
}

void PlaylistNode::SetNext(PlaylistNode *nodePtr) {
    this->nextNodePtr = nodePtr;
}

void PlaylistNode::InsertAfter(PlaylistNode *nodePtr) {
    // 1 -> 2 -> 3
    // 1 -> nodePtr -> 2 -> 3;
    PlaylistNode* tmp = this->nextNodePtr;  // tmp  = 2
    this->nextNodePtr = nodePtr;
    nodePtr->nextNodePtr = tmp;
}

PlaylistNode::PlaylistNode() {
    uniqueID = "";
    songLength = 0;
    SongName = "";
    artistName = "";
    nextNodePtr = nullptr;
}

PlaylistNode::PlaylistNode(string id, string song, string artist, int len) {
    uniqueID = id;
    songLength = len;
    SongName = song;
    artistName = artist;
    nextNodePtr = nullptr;
}


