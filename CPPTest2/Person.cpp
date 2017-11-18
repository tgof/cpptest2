
#include "Person.h"


Person::Person()
{
	random_device rd;
	mt19937 random(rd()); // �������������� ����� �������� ��������� ��������� ������
	
	// �������������� ������ ���� ����������, ������������ ��� ������� ���������
	
	//����� ������ ���� ���������
	vector<string> Profession = { "pilot", "canoneer" };	

	//����� ������ ���� ����� ���������
	vector<string> Trait = { 
		"fiery",		// �����������
		"calm"			// ���������
	};				


	//��������� ���������. � ������ ���� ������� ������(���� �� �����, �� �������� �� 1 �� 100)
	for (int i = 0; i < 1; i++){
		string prof = Profession[random() % (Profession.size() - 1)];
		int rate = random() % 100;
		profs.push_back(make_pair(prof, rate));
	}

	//���� ������ ���� (�� ������������ ���)
	race = Race(random() % (Race::Race_count));

	//������� ������� ������� ������� �����
	for (int i = 0; i < 1; i++) {
		traits.push_back(Trait[random() % (Trait.size())]);
	}
}


Person::~Person()
{
}

void Person::interact(Person *other)
{
	int traitCoeff=1;
	for (auto &trait : other->traits) {
		if (trait == "fiery")
			traitCoeff *= 2;

	}

	if (this->mood < 0 && other->mood<0)
	{
		this->mood -= 1* traitCoeff;
		other->mood -= 1* traitCoeff;
	}
}