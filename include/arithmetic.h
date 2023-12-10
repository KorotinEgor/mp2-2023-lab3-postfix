// ���������� ������� � ������� ��� ���������� �������������� ���������

#include "stack.h"
#include <vector>
#include <map>
#include <cmath>
#include <string>

class TPostfix {
	std::vector<std::string> RPN;
	
	std::string Error_string(const std::string& s, int i); //����� ���������� ������ ��������� ������� � ������
	
	int get_prior(const std::string& s) noexcept; //�������� ��������� ��������, ���� ��� �� ��������, ���������� 0
	
	int TPostfix::get_prior(char c) noexcept; //����������� ������� ��� ��������

	double valid(const std::string& s); //�����, ������������ ������, ������� ��� ��������� �� ������������, � �����
	
	std::string number_check(const std::string& s, int& i); //����� ��������� �������������� ������ � ������, � �������� ���������� ����� � ��������� ��� �� ������������, ��������� ���
public:
	TPostfix(const std::string& s); //������������� ������ � ����������� ����� ������, ���� ��� ��������
	
	double count(); //��������� ������, ���������� � �������� ������
};