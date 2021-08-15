#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string a;
	cout << "===========문자열 출력기==========\n문자열을 입력하세요: ";
	cin >> a;

	for (int i = 0; i < a.size();i++) {
		cout << i + 1 << "번째 글자: " << a.at(i) << "\n";
	}

}
