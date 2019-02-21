//Lauren Bolin
#include "stdafx.h"
#include "CppUnitTest.h"
#include"..\Rational_Overloadign\Rational.h"
using std::cout;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RationalTest
{		
	TEST_CLASS(TestRationalNoParams)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test;
			Rational TestForced(0, 1);

			if (Test != TestForced)
			{
				Assert::Fail();
			}

		}

	};

	TEST_CLASS(TestRationalOneParams)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test(8);
			Rational TestForced(8,1);

			if (Test != TestForced)
			{
				Assert::Fail();
			}

		}

	};

	TEST_CLASS(TestRationalTwoParams)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test(1,2);
			Rational TestForced(1,2);

			if (Test != TestForced)
			{
				Assert::Fail();
			}

		}

	};

	TEST_CLASS(TestgetNumerator)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test;
			long num = Test.getNumerator();

			if (num != 0 )
			{
				Assert::Fail();
			}

		}

	};

	TEST_CLASS(TestgetDenominator)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test;
			long num = Test.getDenominator();

			if (num != 1)
			{
				Assert::Fail();
			}

		}

	};

	TEST_CLASS(TestConstructorEquals)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test(1,9);
			Rational Test2(1,6);

			Test = Test2;

			if (Test != Test2)
			{
				Assert::Fail();
			}

		}

	};



	TEST_CLASS(TestOperatorReduce)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test(1, 2);
			Rational Test2(1, 3);
			Rational Ans(5, 6);

			Rational result = Test + Test2;
			if (Ans != result)
			{
				Assert::Fail();
			}
			
		}

	};

	TEST_CLASS(TestOperatorParentheses)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test;
			
			if (Test() != "0/1")
			{
				Assert::Fail();
			}
}

	};

	TEST_CLASS(TestOperatorDoubleParentheses)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test(1,2);

			if ((double)Test != 0.5)
			{
				Assert::Fail();
			}
		}

	};

	TEST_CLASS(TestLeastCommonMultiple)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test(1,2);
			Rational Test2(1,3);

			long LCM;
				
				LCM = Test.getLeastCommonMultiple(Test.getDenominator(), Test2.getDenominator());

			if (LCM != 6)
			{
				Assert::Fail();
			}
		}

	};

	TEST_CLASS(TestGreatestCommonDivisor)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test(1, 10);
			Rational Test2(1, 5);

			long GCD;

			GCD = Test.getGreatestCommonDivisor(Test.getDenominator(), Test2.getDenominator());

			if (GCD != 5)
			{
				Assert::Fail();
			}
		}

	};


	TEST_CLASS(TestConstructorExponential)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test(2, 3);
			Rational Exponent = Test ^ 2;
			Rational Ans(4, 9);

			if(Exponent != Ans)
			{
				Assert::Fail();
				}
		}

	};

	TEST_CLASS(TestOperatorMultiply)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational Test(1, 2);
			Rational Test2(1, 3);
			Rational Ans(1, 6);

			Rational result = Test * Test2;
			if (Ans != result)
			{
				Assert::Fail();
			}
		}

	};

	TEST_CLASS(TestOperatorPlus)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test(1, 2);
			Rational Test2(1, 3);
			Rational Ans(5,6);

			Rational result = Test + Test2;
			if (Ans != result)
			{
				Assert::Fail();
			}
		}

	};

	TEST_CLASS(TestOperatorSub)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test(1, 2);
			Rational Test2(1, 3);
			Rational Ans(1,6);

			Rational result = Test - Test2;
			if (Ans != result)
			{
				Assert::Fail();
			}
		}

	};

	TEST_CLASS(TestOperatorDivid)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test(1, 2);
			Rational Test2(1, 3);
			Rational Ans(3,2);

			Rational result = Test / Test2;
			if (Ans != result)
			{
				Assert::Fail();
			}
		}

	};


	TEST_CLASS(TestOperatorPlusEquals)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test(1, 2);
			Rational Test2(1, 3);
			Rational Ans(5, 6);

			Test += Test2;
			if (Ans != Test)
			{
				Assert::Fail();
			}
		}

	};

	TEST_CLASS(TestOperatorMultiplyEquals)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test(1, 2);
			Rational Test2(1, 3);
			Rational Ans(1, 6);

			Test *= Test2;
			if (Ans != Test)
			{
				Assert::Fail();
			}
		}

	};

	TEST_CLASS(TestOperatorSubEquals)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test(1, 2);
			Rational Test2(1, 3);
			Rational Ans(1, 6);

			Test -= Test2;
			if (Ans != Test)
			{
				Assert::Fail();
			}
	
		}

	};

	TEST_CLASS(TestOperatorDividEquals)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test(1, 2);
			Rational Test2(1, 3);
			Rational Ans(3, 2);

			Test /= Test2;
			if (Ans != Test)
			{
				Assert::Fail();
			}
		}

	};

	TEST_CLASS(TestOperatorNotEquals)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test(1, 2);
			Rational Test2(1, 3);


			if (!(Test != Test2))
			{
				Assert::Fail();
			}
		}

	};

	TEST_CLASS(TestOperatorEqualsEquals)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test(1, 2);
			Rational Test2(1, 2);

			if (!(Test == Test2))
			{
				Assert::Fail();
			}
		}

	};

	TEST_CLASS(TestOperatorGreaterThanOrEqualTo)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test(1, 2);
			Rational Test2(1, 3);
			Rational Test3(1, 2);
	

			if (!(Test >= Test2))
			{
				Assert::Fail();
			}

			if (!(Test >= Test3))
			{
				Assert::Fail();
			}
		}

	};

	TEST_CLASS(TestOperatorLessThanOrEqualTo)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test(1, 2);
			Rational Test2(1, 3);
			Rational Test3(1, 2);


			if (!(Test2 <= Test))
			{
				Assert::Fail();
			}

			if (!(Test3 <= Test))
			{
				Assert::Fail();
			}
		}

	};

	TEST_CLASS(TestOperatorGreaterThan)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test(1, 2);
			Rational Test2(1, 3);
			
			if (Test2 > Test)
			{
				Assert::Fail();
			}

			if (!(Test > Test2))
			{
				Assert::Fail();
			}
			
		}
	};

	TEST_CLASS(TestOperatorLessThan)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test(1, 2);
			Rational Test2(1, 3);
			


			if (Test < Test2)
			{
				Assert::Fail();
			}

			if (!(Test2 <= Test))
			{
				Assert::Fail();
			}
			
		}

	};

	TEST_CLASS(TestOperatorPlusPlusPostIncrement)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test(1, 2);
			Rational Ans(3,2);

			Test++;
			if (Ans != Test)
			{
				Assert::Fail();
			}

		}

	};

	TEST_CLASS(TestOperatorPlusPlusPreIncrement)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test(1, 2);
			Rational Ans(3, 2);

			++Test;
			if (Ans != Test)
			{
				Assert::Fail();
			}
		}

	};


	
	TEST_CLASS(TestOperatorSubSubPreIncrement)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational Test(1, 2);
			Rational Ans(-1, 2);

			--Test;
			if (Ans != Test)
			{
				Assert::Fail();
			}
		}

	};

}