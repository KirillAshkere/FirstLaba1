#include "CppUnitTest.h"
#include "../lab1/map.h"
#include <stdexcept>

using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab1Tests
{
	TEST_CLASS(Lab1Tests)
	{
	public:
		
		TEST_METHOD(insert_and_find_test)
		{
			map<int, int> card;
			bool before = card.find(5);
			card.insert(5, 1);
			bool after = card.find(5);
			Assert::AreEqual(!before, after);
		}
		TEST_METHOD(remove_test)
		{
			map<int, int> card;
			card.insert(5, 1);
			bool before = card.find(5);
			card.remove(5);
			bool after = card.find(5);
			Assert::AreEqual(before, !after);
		}
		TEST_METHOD(clear_test)
		{
			map<int, int> card;
			card.insert(5, 1);
			card.insert(6, 2);
			card.clear();
			Assert::AreEqual(!card.find(5), !card.find(6));
		}
		TEST_METHOD(get_keys_test)
		{
			map<int, int> card;
			card.insert(5, 1);
			card.insert(6, 2);
			card.insert(7, 3);
			List<int> list = card.get_keys();
			int sum_of_keys = 0;
			while (list.isCurrent())
				sum_of_keys += list.next();
			Assert::IsTrue(sum_of_keys == 18);
		}
		TEST_METHOD(get_values_test)
		{
			map<int, int> card;
			card.insert(5, 1);
			card.insert(6, 2);
			card.insert(7, 3);
			List<int> list = card.get_values();
			int sum_of_values = 0;
			while (list.isCurrent())
				sum_of_values += list.next();
			Assert::IsTrue(sum_of_values == 6);
		}
	};
}
