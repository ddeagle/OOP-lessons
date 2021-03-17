#include <iostream>
#include <vector>
#include <string>


using namespace std;

class card
{
protected:
	enum m_cardsuit { clubs, hearts, diamonds, spades};
	enum m_cardvalue 
	{
	 ACE=1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING
	};
	bool m_isFaceUp;
	int m_card;
public:
	m_cardvalue value;  //Значение карты (туз, двойка, тройка и так долее). rank — это перечисление, куда входят все 13 значений

	m_cardsuit suit ;  //Масть карты (трефы, бубны, червы и пики). suit — это перечисление, содержащее четыре возможные масти
	
	bool m_isFaceUP    //Указывает, как расположена карта — вверх лицом или рубашкой. Влияет на то, отображается она или нет

	int Getvalue()		//Возвращает значение карты

	void Flip()			//Переворачивает карту. Может использоваться для того, чтобы перевернуть карту лицом вверх или вниз

};

class Hand
{
protected:
	vector(Card*) m_card;
	
public:
	vector<Card*> m_Cards    // Коллекция карт.Хранит указатели на объекты типа Сard

	void Add(Card* pCard)	 //Добавляет карту в руку.Добавляет указатель на объект типа Сard в вектор m_Сards
	{}

	void Clear()			//Очищает руку от карт. Удаляет все указатели из вектора m_Сards, устраняя все связанные с ними объекты в куче
	{}

	int GetTotal()			//Возвращает сумму очков карт руки

};

class GenericPlayer
{
protected:
	string m_name;

public:

	virtual bool IsHitting() const = 0 //Указывает, нужна ли игроку еще одна карта. Чистая виртуальная функция
	{}

	bool IsBoosted() const //Указывает, что у игрока перебор
	{}

	void Bust() const // Объявляет, что у игрока перебор
	{
		cout << "you're full" << endl;
	}
};

class Player
{
protected:

public:


	virtual bool IsHitting() const		//Указывает, нужна ли игроку еще одна карта
		
	void Win() const		//Объявляет, что игрок выиграл
		
	void Lose() const		//Объявляет, что игрок проиграл
		
	void Push() const		//Объявляет, что игрок сыграл вничью


};

class House
{
public:

	virtual bool IsHitting() const		//Указывает, нужна ли игроку еще одна карта
		
	void FlipFirstCard()		// Переворачивает первую карту


};

class Deck
{
public:


	vold Populate()		//Создает стандартную колоду из 52 карт
		
	void Shuffle()		//Тасует карты
		
	vold Deal(Hand & aHand)		//Раздает в руку одну карту
		
	void AddltionalCards(GenericPlayer & aGenerlcPlayer)		//Раздает игроку дополнительные карты до тех пор, пока он может и хочет их получать


};

class Game
{

	Deck m_Deck		//Колода карт
		
	House m_House		//Рука дилера
		
	vector<Player> m_Players		//Группа игроков - людей.Вектор, содержащий объекты типа Player
		
	void Play()		//Проводит кон игры Blackjack


};



int main()
{
	cout << "\t\tWelcome to Blackjack!\n\n";

	int numPlayers = 0;
	while (numPlayers < 1 || numPlayers > 7)
	{
		cout << "How many players? (1 - 7): ";
		cin >> numPlayers;
	}

	vector<string> names;
	string name;
	for (int i = 0; i < numPlayers; ++i)
	{
		cout << "Enter player name: ";
		cin >> name;
		names.push_back(name);
	}
	cout << endl;

	// игровой цикл
	Game aGame(names);
	char again = 'y';
	while (again != 'n' && again != 'N')
	{
		aGame.Play();
		cout << "\nDo you want to play again? (Y/N): ";
		cin >> again;
	}

	return 0;
}
