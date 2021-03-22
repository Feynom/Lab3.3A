#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab3.3A/Lab3.3A/Vector3D_Public.h"
#include "../Lab3.3A/Lab3.3A/Vector3D_Public.cpp"
#include "../Lab3.3A/Lab3.3A/Vector3D.h"
#include "../Lab3.3A/Lab3.3A/Vector3D.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33A
{
	TEST_CLASS(UnitTest33A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector3D_Public A(1, 1, 1);
			++A;
			Assert::AreEqual(A.GetX(), 2.);
		}
	};
}
