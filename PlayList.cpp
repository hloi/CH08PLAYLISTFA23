//
// Created by hloi on 10/3/2023.
//
#include <iostream>
#include "PlayList.h"

using std::cout;
using std::endl;

PlayList::PlayList() {
    head = nullptr;
    tail = nullptr;

}

void PlayList::Push_front(PlaylistNode* newNode) {
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    }
    else {
        // newNode->SetNext(head);
        newNode->InsertAfter(head);
        head = newNode;
    }
}

PlaylistNode *PlayList::getHead() const {
    return head;
}


PlaylistNode *PlayList::getTail() const {
    return tail;
}



void PlayList::Push_back(PlaylistNode *newNode) {
    if (head == nullptr) {
        Push_front(newNode);
    }
    else {
        // newNode->SetNext(head);
        tail->InsertAfter(newNode);
        tail = newNode;
    }
}

PlayList::PlayList(const PlayList &other) {
    cout << "Copy constructor" << endl;
    PlaylistNode* tmp = other.head;
    head = nullptr;
    tail = nullptr;
    while (tmp != nullptr) {
        PlaylistNode* playNode = new PlaylistNode(tmp->GetID(), tmp->GetSongName(), tmp->GetArtistName(), tmp->GetSongLength());
        Push_back(playNode);
        tmp = tmp->GetNext();
    }
}
PlayList &PlayList::operator=(const PlayList &origList) {
    cout << "assignment operator=" << endl;
    if (this != &origList) { // are they the same?
        PlaylistNode* tmp = origList.head;
        head = nullptr;
        tail = nullptr;
        while (tmp != nullptr) {
            PlaylistNode* playNode = new PlaylistNode(tmp->GetID(), tmp->GetSongName(), tmp->GetArtistName(), tmp->GetSongLength());
            Push_back(playNode);
            tmp = tmp->GetNext();
        }
    }
    return *this;
}

PlayList::~PlayList() {
    cout << "Destructor" << endl;
    PlaylistNode* tmp = head;
    while (tmp != nullptr) {
        PlaylistNode* curNode = tmp;
        tmp = tmp->GetNext();
        delete curNode;
    }
    head = nullptr;
    tail = nullptr;
}

