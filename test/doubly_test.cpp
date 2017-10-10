//
// Created by gokay on 10/5/17.
//

#include "gtest/gtest.h"

#include "doubly_linked_list.h"
#include "node.h"

int int_array[10]={1,2,3,4,5,6,7,8,9,10};

TEST(basic_check, test_eq) {
    EXPECT_EQ(1, 1);
}

TEST(basic_check, test_neq) {
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
TEST_F(NodeFixture, constructors_check1) {
    int status = 0;
    node node1(1);
    if (&node1 == NULL)
        status =1;
    EXPECT_EQ(status, 0);
}
