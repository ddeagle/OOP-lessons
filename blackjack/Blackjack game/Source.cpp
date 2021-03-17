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
	m_cardvalue value;  //�������� ����� (���, ������, ������ � ��� �����). rank � ��� ������������, ���� ������ ��� 13 ��������

	m_cardsuit suit ;  //����� ����� (�����, �����, ����� � ����). suit � ��� ������������, ���������� ������ ��������� �����
	
	bool m_isFaceUP    //���������, ��� ����������� ����� � ����� ����� ��� ��������. ������ �� ��, ������������ ��� ��� ���

	int Getvalue()		//���������� �������� �����

	void Flip()			//�������������� �����. ����� �������������� ��� ����, ����� ����������� ����� ����� ����� ��� ����

};

class Hand
{
protected:
	vector(Card*) m_card;
	
public:
	vector<Card*> m_Cards    // ��������� ����.������ ��������� �� ������� ���� �ard

	void Add(Card* pCard)	 //��������� ����� � ����.��������� ��������� �� ������ ���� �ard � ������ m_�ards
	{}

	void Clear()			//������� ���� �� ����. ������� ��� ��������� �� ������� m_�ards, �������� ��� ��������� � ���� ������� � ����
	{}

	int GetTotal()			//���������� ����� ����� ���� ����

};

class GenericPlayer
{
protected:
	string m_name;

public:

	virtual bool IsHitting() const = 0 //���������, ����� �� ������ ��� ���� �����. ������ ����������� �������
	{}

	bool IsBoosted() const //���������, ��� � ������ �������
	{}

	void Bust() const // ���������, ��� � ������ �������
	{
		cout << "you're full" << endl;
	}
};

class Player
{
protected:

public:


	virtual bool IsHitting() const		//���������, ����� �� ������ ��� ���� �����
		
	void Win() const		//���������, ��� ����� �������
		
	void Lose() const		//���������, ��� ����� ��������
		
	void Push() const		//���������, ��� ����� ������ ������


};

class House
{
public:

	virtual bool IsHitting() const		//���������, ����� �� ������ ��� ���� �����
		
	void FlipFirstCard()		// �������������� ������ �����


};

class Deck
{
public:


	vold Populate()		//������� ����������� ������ �� 52 ����
		
	void Shuffle()		//������ �����
		
	vold Deal(Hand & aHand)		//������� � ���� ���� �����
		
	void AddltionalCards(GenericPlayer & aGenerlcPlayer)		//������� ������ �������������� ����� �� ��� ���, ���� �� ����� � ����� �� ��������


};

class Game
{

	Deck m_Deck		//������ ����
		
	House m_House		//���� ������
		
	vector<Player> m_Players		//������ ������� - �����.������, ���������� ������� ���� Player
		
	void Play()		//�������� ��� ���� Blackjack


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

	// ������� ����
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
