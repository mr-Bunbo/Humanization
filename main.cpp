#include <iostream>
#include <string>
using namespace std;
class Person
{
	public:
		string name;
		string surname;
		int birth;
		string position;
		int income;
};



int main() 
{
	Person itachi;
	itachi.name = "Itachi";
	itachi.surname = "Uchiha";
	itachi.birth = 2000;
	itachi.position = "Akatsuki member";
	itachi.income = 10000;
	
	Person naruto;
	naruto.name = "Naruto";
	naruto.surname = "Uzumaki";
	naruto.birth = 2005;
	naruto.position = "Hokage";
	naruto.income = 50000;
	
	Person gaara;
	gaara.name = "Gaara";
	gaara.surname = "From sand";
	gaara.birth = 2005;
	gaara.position = "Kazekage";
	gaara.income = 30000;
	
	Person shikamaru;
	shikamaru.name = "Shikamaru";
	shikamaru.surname = "Nara";
	shikamaru.birth = 2005;
	shikamaru.position = "Hokage adviser";
	shikamaru.income = 20000;
	
	Person konohamaru;
	konohamaru.name = "Konohamaru";
	konohamaru.surname = "Sarutobi";
	konohamaru.birth = 2010;
	konohamaru.position = "Jounin";
	konohamaru.income = 7000;
	
	Person orochimaru;
	orochimaru.name = "Orochimaru";
	orochimaru.surname = "Mikami";
	orochimaru.birth = 1950;
	orochimaru.position = "Scientist";
	orochimaru.income = 35000;
	
	Person shino;
	shino.name = "Shino";
	shino.surname = "Aburame";
	shino.birth = 2005;
	shino.position = "Teacher";
	shino.income = 5000;
	
	Person sasuke;
	sasuke.name = "Sasuke";
	sasuke.surname = "Uchiha";
	sasuke.birth = 2005;
	sasuke.position = "Researcher";
	sasuke.income = 1000;
	
	Person teuchi;
	teuchi.name = "Teuchi";
	teuchi.surname = "Ichiraku";
	teuchi.birth = 1945;
	teuchi.position = "Restaurant owner";
	teuchi.income = 60000;
	
	Person zabuza;
	zabuza.name = "Zabuza";
	zabuza.surname = "Momochi";
	zabuza.birth = 1998;
	zabuza.position = "Mercenary";
	zabuza.income = 20000;
	
	int money = 0;
	int mid_money;
	int coffers[10] = {
		itachi.income,
		naruto.income,
		gaara.income,
		shikamaru.income,
		konohamaru.income,
		orochimaru.income,
		shino.income,
		sasuke.income,
		teuchi.income,
		zabuza.income
		};
	int boys_age[10] = {
		itachi.birth,
		naruto.birth,
		gaara.birth,
		shikamaru.birth,
		konohamaru.birth,
		orochimaru.birth,
		shino.birth,
		sasuke.birth,
		teuchi.birth,
		zabuza.birth
	};
	string boys_name[10] = {
		itachi.name,
		naruto.name,
		gaara.name,
		shikamaru.name,
		konohamaru.name,
		orochimaru.name,
		shino.name,
		sasuke.name,
		teuchi.name,
		zabuza.name
	};
	
	cout<<"All 30+ old people: "<<endl;
	
	for(int i = 0; i<10; i++)
	{
		money += coffers[i];
	}
	for(int i = 0; i<10; i++)
	{
		if ((2022 - boys_age[i]) >= 30)
		{
			cout<<boys_name[i];
			cout<<endl;
		}
	}
	mid_money = money / 10;
	cout<<"Middle income: "<<mid_money;
	
	return 0;
}