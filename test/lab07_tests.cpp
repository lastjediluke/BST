//
// Created by gokay on 10/5/17.
//

#include "gtest/gtest.h"

#include "../lib/lab06/inc/doubly_linked_list.h"
#include "../lib/lab06/inc/node.h"

//int int_array[10]={1,2,3,4,5,6,7,8,9,10};

TEST(basic_check, test_eq1) {
    EXPECT_EQ(1, 1);
}

TEST(basic_check, test_neq1) {
    EXPECT_NE(1, 0);
}


class NodeFixture : public ::testing::Test {
protected:
    virtual void TearDown() {
    }

    virtual void SetUp() {
    }

public:
    NodeFixture() : Test() {

    }

    virtual ~NodeFixture() {

    }


};

TEST_F(NodeFixture, constructors_check2) {
    int status = 0;
    node node1(1);
    if (&node1 == NULL)
        status =1;
    EXPECT_EQ(status, 0);
}
