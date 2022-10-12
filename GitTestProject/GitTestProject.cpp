#include<iostream>

using namespace std;

namespace game
{
	class CItem
	{
	public:


	};

	class CMonster
	{
		int hp;
		int armor;

	public:
		void Attack(int damage)
		{
			cout << "Attacked" << endl;
		};
	};
}

int main()
{
	game::CItem item;
	cout << "git ¿¬½À" << endl;

	return 0;
}