#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_9.2.3/Lab_9.2.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			string prizv="Бартен";
			Specialnists special=Specialnists::labor_education;
			int math_grade=5, spec=4;
			Student* stud = new Student[5];
			stud[0].prizv = "Арнест";
			stud[0].kyrs = 1;
			stud[0].specialst = Specialnists::computer_science;
			stud[0].math_grade = 1;
			stud[0].physics_grade = 4;
			stud[0].programing_grade = 3;

			stud[1].prizv = "Бартен";
			stud[1].kyrs = 2;
			stud[1].specialst = Specialnists::labor_education;
			stud[1].math_grade = 5;
			stud[1].physics_grade = 2;
			stud[1].pedagogic_grade = 3;

			stud[2].prizv = "Ромч";
			stud[2].kyrs = 1;
			stud[2].specialst = Specialnists::physics_and_informatics;
			stud[2].math_grade = 4;
			stud[2].physics_grade = 4;
			stud[2].pedagogic_grade = 3;

			stud[3].prizv = "Корсло";
			stud[3].kyrs = 1;
			stud[3].specialst = Specialnists::math_a_economics;
			stud[3].math_grade = 3;
			stud[3].physics_grade = 4;
			stud[3].pedagogic_grade = 3;

			stud[4].prizv = "Корсло";
			stud[4].kyrs = 1;
			stud[4].specialst = Specialnists::informatics;
			stud[4].math_grade = 2;
			stud[4].physics_grade = 4;
			stud[4].pedagogic_grade = 3;

			Assert::AreEqual(BinSearch(stud, 5,prizv,special,math_grade,spec), -1);


		};
	};
}