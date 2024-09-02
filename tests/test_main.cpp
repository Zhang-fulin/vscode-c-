#include <gtest/gtest.h>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

string generateMessage() {
	vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
	
	ostringstream oss;
	for (const string& word : msg)
	{
		oss << word << " ";
	}
	oss << endl;
	return oss.str();
}

TEST(HelloWorldTest, GeneratesCorrectMessage) {
	string expected = "Hello C++ World from VS Code and the C++ extension! \n";
    std::cout << "Expected: 11111111" << expected << std::endl;
	EXPECT_EQ(generateMessage(), expected);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}