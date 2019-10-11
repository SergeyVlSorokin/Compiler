#include "pch.h"
#include "..\\Scanner\Lexem.h"
#include <sstream>

TEST(TestLexem, TestPrint) 
{
	Lexem lexem;
	std::ostringstream stream;

	lexem.print(stream);

	ASSERT_EQ(stream.str(), std::string("Lexem print is working"));
}