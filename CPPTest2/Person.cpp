
#include "Person.h"


Person::Person()
{
	random_device rd;
	mt19937 random(rd()); // инициализируем Вихрь Мерсенна случайным стартовым числом
	
	// инициализируем списки всех параметров, используемых для содания персонажа
	
	//здесь должны быть профессии
	vector<string> Profession = { "pilot", "canoneer" };	

	//здесь должны быть черты характера
	vector<string> Trait = { 
		"fiery",		// вспыльчивый
		"calm"			// спокойный
	};				


	//добавляем профессии. У каждой есть уровень умения(пока не решил, но наверное от 1 до 100)
	for (int i = 0; i < 1; i++){
		string prof = Profession[random() % (Profession.size() - 1)];
		int rate = random() % 100;
		profs.push_back(make_pair(prof, rate));
	}

	//раса только одна (из перечисления рас)
	race = Race(random() % (Race::Race_count));

	//заносим столько трейтов сколько нужно
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