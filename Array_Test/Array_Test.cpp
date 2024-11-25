// ArrayTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <array>

using namespace std;

// 동적 메모리를 관리하는 클래스
template <typename T>
class DynamicArray
{
private:
	unsigned int sz;
	T* arr;

public:
	// 생성자: 매개변수로 크기를 입력받아 배열을 생성
	DynamicArray(int n) : sz(n)
	{
		arr = new T[sz] {};
	}

	// 소멸자: 할당된 메모리를 해제
	~DynamicArray()
	{
		delete[] arr;
		//arr = nullptr;
		cout << "동적 메모리 해제" << endl;
		//cin.get();
	}

	unsigned int size()
	{
		return sz;
	}

	T& operator[] (const int i) { return arr[i]; }
};

int main()
{
	// 메모리 할당
	DynamicArray<float> da(5);
	da[0] = 10.5;
	da[1] = 20.4;
	da[2] = 30.3;

	for (int i = 0; i < da.size(); i++)
	{
		cout << da[i] << endl;
	}

	// 메모리 해제
}

// 동적 메모리 할당 예제
//int main()
//{
//	// 동적 메모리 할당
//	int* ptr = new int[3] {};
//	ptr[0] = 10;
//	ptr[1] = 20;
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << ptr[i] << endl;
//	}
//
//	// 동적 메모리 할당
//	delete[] ptr;
//	ptr = nullptr;
//}

// C++ 언어 배열 구현
//int main()
//{
//	// 배열 선언
//	array<int, 5> scores = { 50, 60, 70, 80, 90 };
//
//	// 합계 구하기
//	int length = scores.size();
//	int sum = 0;
//	for ( int i = 0; i < length; i++ )
//	{
//		sum += scores[i];
//	}
//
//	// 평균 구하기
//	float avg = (float)sum / length;
//
//	cout << "Average Score: " << avg << endl;
//}

// C언어의 배열 구현 - 점수들의 평균을 구하라
//int main()
//{
//	// 배열 선언
//	int scores[5] = { 50, 60, 70, 80, 90 };
//
//	//int length = sizeof(scores) / sizeof(scores[0]);
//	int length = size(scores);
//
//	int sum = 0;
//	for (int i = 0; i < length; i++)
//	{
//		sum += scores[i];
//	}
//	float avg = (float)sum / length;
//
//	cout << "Average Score: " << avg << endl;
//}
//int main()
//{
//    std::cout << "Hello Array!\n";
//}