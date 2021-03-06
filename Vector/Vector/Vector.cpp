// ** Vector v0.2
#include <iostream>

using namespace std;



int main(void)
{

	/*************************
	
		char str1[2][5] = {
		{'A','B','C','D'},
		{'E','F','G','G'}
	};

	char* str2[2] = {
	{(char*)"ABCD"},
	{(char*)"EFGH"}
	};

	// 선생님 풀이
	for (int i = 0; i < 5; ++i)
		cout << (*str1)[i];
	cout << endl;
	printf_s("%s\n", str2[0]);
	
	**************************/

	/* 내가 한 풀이
	cout << str2[0] << endl;
	cout << str2[0] + 1 << endl;
	cout << str2[0] + 2 << endl;
	// 맨끝의 단어 D와 H는 출력해봤습니다.
	cout << str2[0] + 3 << endl;
	cout << str2[1] + 3 << endl;
	*/
	// 직접접근으로 하나의 알파벳을 출력해보기 숙제

	return 0;
}

//1주차
/*
//배열의 장점
  직접 접근이 가능하다. 직접 접근이 가능한 경우는 거의 없다.
  이것은 큰 장점이다. (직접 접근 경우는 두어개 정도밖에 없다.)
  동일한 크기로 나열되어 있다. >> 접근속도가 항상 일정하다. ('빠르다' 가 아니다. X)

// 배열의 단점
  배열의 길이를 바꿀수가 없다. >> 데이터 동적변환이 불가능하다.
  이는 치명적인 단점이다.
  데이터를 어디에 뒀는지 알수가 없다.

// 데이터의 복사와 이동
 데이터의 복사와 데이터의 이동 중
 이동이 더 시간이 걸린다. 그 데이터를 복사 후 기존 데이터는 삭제의 과정이기 때문에
*/

// 2주차
/*
 배열의 기능을 늘려주는 기능과 삭제기능

// ** 1. 데이터 추가 (새로운 공간 확보)
// ** 2. 데이터 삭제 (배열에서는 실제로 삭제하려고 생성하지는 않는다.)
      //데이터를 불러올때나 텍스쳐를 불러올때 주로 쓰인다.
// ** 3. 데이터를 삽입할 수 있는 공간의 크기
// ** 4. 현재 삽입되어있는 원소의 개수
// ** 5. 컨테이너(뭔가를 담아내기 위한 공간)의 시작 지점
// ** 6. 컨테이너의 종료 지점


*/