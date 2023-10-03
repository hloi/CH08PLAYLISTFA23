/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newCxxTest.h
 * Author: hloi
 *
 * Created on January 26, 2018, 3:52 PM
 */

#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
//#include "myClass.h"
#include "PlaylistNode.h"
#include "PlayList.h"
using namespace std;

class newCxxTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    void testMyFunction() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        PlaylistNode* node1 = new PlaylistNode("1", "hello", "world", 10);
        TS_ASSERT_EQUALS(node1->GetID(),"1");
        TS_ASSERT_EQUALS(node1->GetArtistName(), "world");
        PlaylistNode* node2 = new PlaylistNode("2", "happy", "tuesday", 20);
        TS_ASSERT_EQUALS(node2->GetID(),"2");
        TS_ASSERT_EQUALS(node2->GetArtistName(), "tuesday");
        node1->InsertAfter(node2);
        TS_ASSERT_EQUALS(node1->GetID(),"1");
        TS_ASSERT_EQUALS(node1->GetArtistName(), "world");
        PlaylistNode* tmp = node1->GetNext();
        TS_ASSERT_EQUALS(tmp->GetID(),"2");
        TS_ASSERT_EQUALS(tmp->GetArtistName(), "tuesday");
        TS_ASSERT_EQUALS(tmp->GetNext(), nullptr);

    }


    void testPushFront() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        PlaylistNode* node1 = new PlaylistNode("1", "hello", "world", 10);
        TS_ASSERT_EQUALS(node1->GetID(),"1");
        TS_ASSERT_EQUALS(node1->GetArtistName(), "world");
        PlaylistNode* node2 = new PlaylistNode("2", "happy", "tuesday", 20);
        TS_ASSERT_EQUALS(node2->GetID(),"2");
        TS_ASSERT_EQUALS(node2->GetArtistName(), "tuesday");
        PlayList newPlaylist;
        newPlaylist.Push_front(node2);
        newPlaylist.Push_front(node1);
        PlaylistNode* tmp = newPlaylist.getHead();
        TS_ASSERT_EQUALS(tmp->GetID(),"1");
        TS_ASSERT_EQUALS(tmp->GetArtistName(), "world");
        tmp = node1->GetNext();
        TS_ASSERT_EQUALS(tmp->GetID(),"2");
        TS_ASSERT_EQUALS(tmp->GetArtistName(), "tuesday");
        TS_ASSERT_EQUALS(tmp->GetNext(), nullptr);

    }

    void testPushBack() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        PlaylistNode* node1 = new PlaylistNode("1", "hello", "world", 10);
        TS_ASSERT_EQUALS(node1->GetID(),"1");
        TS_ASSERT_EQUALS(node1->GetArtistName(), "world");
        PlaylistNode* node2 = new PlaylistNode("2", "happy", "tuesday", 20);
        TS_ASSERT_EQUALS(node2->GetID(),"2");
        TS_ASSERT_EQUALS(node2->GetArtistName(), "tuesday");
        PlayList newPlaylist;
        newPlaylist.Push_back(node1);
        newPlaylist.Push_back(node2);
        PlaylistNode* tmp = newPlaylist.getHead();
        TS_ASSERT_EQUALS(tmp->GetID(),"1");
        TS_ASSERT_EQUALS(tmp->GetArtistName(), "world");
        tmp = node1->GetNext();
        TS_ASSERT_EQUALS(tmp->GetID(),"2");
        TS_ASSERT_EQUALS(tmp->GetArtistName(), "tuesday");
        TS_ASSERT_EQUALS(tmp->GetNext(), nullptr);

    }

    void testCopyContructor() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        PlaylistNode* node1 = new PlaylistNode("1", "hello", "world", 10);
        TS_ASSERT_EQUALS(node1->GetID(),"1");
        TS_ASSERT_EQUALS(node1->GetArtistName(), "world");
        PlaylistNode* node2 = new PlaylistNode("2", "happy", "tuesday", 20);
        TS_ASSERT_EQUALS(node2->GetID(),"2");
        TS_ASSERT_EQUALS(node2->GetArtistName(), "tuesday");
        PlayList newPlaylist;
        newPlaylist.Push_back(node1);
        newPlaylist.Push_back(node2);

        PlayList copyList = newPlaylist;

        PlaylistNode* tmp = copyList.getHead();
        TS_ASSERT_EQUALS(tmp->GetID(),"1");
        TS_ASSERT_EQUALS(tmp->GetArtistName(), "world");
        tmp = node1->GetNext();
        TS_ASSERT_EQUALS(tmp->GetID(),"2");
        TS_ASSERT_EQUALS(tmp->GetArtistName(), "tuesday");
        TS_ASSERT_EQUALS(tmp->GetNext(), nullptr);

        PlaylistNode* tmp1 = newPlaylist.getHead();
        PlaylistNode* tmp2 = copyList.getHead();

        while (tmp1 != nullptr) {
            TS_ASSERT(tmp1 != tmp2);
            tmp1 = tmp1->GetNext();
            tmp2 = tmp2->GetNext();
        }

    }

    void testAssignmentOperator() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        PlaylistNode* node1 = new PlaylistNode("1", "hello", "world", 10);
        TS_ASSERT_EQUALS(node1->GetID(),"1");
        TS_ASSERT_EQUALS(node1->GetArtistName(), "world");
        PlaylistNode* node2 = new PlaylistNode("2", "happy", "tuesday", 20);
        TS_ASSERT_EQUALS(node2->GetID(),"2");
        TS_ASSERT_EQUALS(node2->GetArtistName(), "tuesday");
        PlayList newPlaylist;
        newPlaylist.Push_back(node1);
        newPlaylist.Push_back(node2);

        PlayList copyList;
        copyList = newPlaylist;

        PlaylistNode* tmp = copyList.getHead();
        TS_ASSERT_EQUALS(tmp->GetID(),"1");
        TS_ASSERT_EQUALS(tmp->GetArtistName(), "world");
        tmp = node1->GetNext();
        TS_ASSERT_EQUALS(tmp->GetID(),"2");
        TS_ASSERT_EQUALS(tmp->GetArtistName(), "tuesday");
        TS_ASSERT_EQUALS(tmp->GetNext(), nullptr);

        PlaylistNode* tmp1 = newPlaylist.getHead();
        PlaylistNode* tmp2 = copyList.getHead();

        while (tmp1 != nullptr) {
            TS_ASSERT(tmp1 != tmp2);
            tmp1 = tmp1->GetNext();
            tmp2 = tmp2->GetNext();
        }

    }


};
#endif /* NEWCXXTEST_H */
