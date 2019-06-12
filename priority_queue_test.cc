#include "priority_queue.h"
#include <gtest/gtest.h>


TEST(PriorityQueueTest,Trivial){
	TemplatePriorityQueue expTarget;

	//Test 1 - Initalize
	ASSERT_TRUE(expTarget.Empty()); // empty test

	//Test 2 - Push Datas and Top size
	expTarget.Push(1);
	expTarget.Push(4);
	expTarget.Push(2);
	expTarget.Push(3);
	expTarget.Push(8);
	expTarget.Push(5);
	
	ASSERT_EQ(expTarget.Size(),6); // Pushed 6 elements
	ASSERT_EQ(expTarget.Top(),8);  // The highest pushed value is 8
	ASSERT_FALSE(expTarget.Empty()); // it must not empty

	//Test 3 - pop test

	expTarget.Pop();
	expTarget.Pop();
	expTarget.Pop();
	
	ASSERT_EQ(expTarget.Top(),3);
	ASSERT_EQ(expTarget.Size(),3);
	ASSERT_FALSE(expTarget.Empty());

	expTarget.Pop();
	expTarget.Pop();
	expTarget.Pop();
	
	ASSERT_TRUE(expTarget.Empty());
	
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
