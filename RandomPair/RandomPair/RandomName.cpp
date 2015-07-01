#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <time.h>

int main()
{
	//랜덤 시드값 초기화
	srand(time(NULL));
	//vector : string 컨테이너 객체
	std::vector<std::string> names;
	//string : 문자열 객체
	std::string yunwoo = "yunwoo";
	
	//컨테이너에 string 을 집어넣는 함수
	names.push_back(yunwoo);
	std::string hyunwook = "hyunwook";
	names.push_back(hyunwook);
	std::string mingun = "mingun";
	names.push_back(mingun);

	//랜덤값을 넣어보자.
	int index = rand()%3;

	//출력
	std::cout << names[index] << std::endl;
	names.erase(names.begin() + index);

	getchar();
	return 0;
}
