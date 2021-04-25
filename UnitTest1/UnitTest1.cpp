#include "pch.h"
#include "CppUnitTest.h"
#include "../3.3C/Vector3D.cpp"
#include "../3.3C/Vector3D.h"
#include "../3.3C/Object.cpp"
#include "../3.3C/Object.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			class Vector3D   a(1, 1, 1);
		
			Assert::AreEqual(a.GetX(),1.0);
		}
	};
}