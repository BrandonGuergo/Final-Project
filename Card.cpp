#ifndef "CARD_H"
#define "CARD_H"

Card::Card{

    Card::Card(int val, int suval, string n, string su)
	{
        this->name = n;
        this->Suit = su;
        this->Value = val;
        this->SuitValue = suval;
	}

	Card::Card operator = (Card A)
	{

		Name = A.Name;
		Suit = A.Suit;
		Value = A.Value;
		SuitValue = A.SuitValue;

		return *this;
	}
};
#endif
