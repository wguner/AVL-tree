#include <gtest/gtest.h>        // Google C++ testing harness
#include <gmock/gmock.h>        // Google object mocking library
using namespace testing;        // Google's testing namespace

#include "AVLTree.h"
#include "AVLNode.h"

/* direct access to the root pointer
   This allows for testing shallow/deep comparisions and destructors
   This class is used in some of the tests
*/
template<class T>
class TestableAVL : public AVLTree<T> {
    public:
    AVLNode<T> * getRoot() {       // Gives out our root pointer for testing
        return(this->_root);
    }
};


#include "tests/test_starter.h"
#include "tests/test_base.h"


// Main only sets up the Google gtest system and runs the tests
// Any Functions called "TEST" will be run
// These tests are all kept in the tests/ directory
//  -- See the #include "tests/*" above
int main(int argc, char* argv[])
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
