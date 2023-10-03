#include <iostream>
#include "PlaylistNode.h"

using namespace std;

int main() {

    PlaylistNode* node1 = new PlaylistNode("1", "hello", "world", 10);
    cout << node1->GetID() << endl;
    cout << node1->GetArtistName() << endl;
    PlaylistNode* node2 = new PlaylistNode("2", "happy", "tuesday", 20);
    cout << node2->GetID() << endl;
    cout << node2->GetArtistName() << endl;
    node1->InsertAfter(node2);
    cout << node1->GetID() << endl;
    cout << node1->GetArtistName() << endl;
    cout << node1->GetNext()->GetID() << endl;
    cout << node1->GetNext()->GetArtistName() << endl;
    cout << node1->GetID() << endl;
    cout << node1->GetNext()->GetNext() << endl;
    return 0;
}
