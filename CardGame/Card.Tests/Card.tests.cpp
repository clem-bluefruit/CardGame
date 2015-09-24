#include <gtest\gtest.h>
#include <Card.h>
#include <Deck.h>

using namespace ::testing;
using namespace ::CARDGAME;
using namespace ::std;

TEST(SimpleCard, Initialising_a_card_has_default_name_Card)
{
	Card c;
	ASSERT_EQ("Card", c.ShowCardName());
}

TEST(SimpleCard, Initialising_a_card_passing_custom_name)
{
	Card c("Dave");
	ASSERT_EQ("Dave", c.ShowCardName());
}

TEST(SimpleDeck, Initialising_a_deck_returns_10_card_deck)
{
	Deck d;
	ASSERT_EQ(10, d.DeckSize());
}

TEST(SimpleDeck, Initialising_custom_size_deck)
{
	Deck d(1);
	ASSERT_EQ(1, d.DeckSize());
}

TEST(SimpleDeck, Initialise_empty_deck_Manually_add_cards)
{
	Deck d(0);
	d.AddCard();
	ASSERT_EQ(1, d.DeckSize());
	d.AddCard();
	ASSERT_EQ(2, d.DeckSize());
	d.AddCard();
	ASSERT_EQ(3, d.DeckSize());
}

TEST(SimpleDeck, Inserting_custom_card_name)
{
	Deck d(0);
	d.AddCard("Ace");
	ASSERT_EQ(1, d.DeckSize());
}

TEST(SimpleDeck, Inserting_and_viewing_a_custom_named_card)
{
	Deck d(0);
	d.AddCard("Ace");
	ASSERT_EQ("Ace", d.ViewCardName(0));
	d.AddCard("Joker");
	d.AddCard("King");
	ASSERT_EQ("King", d.ViewCardName(2));
}

TEST(SimpleDeck, Maximum_deck_size_limits_number_of_cards)
{
	Deck d(0);
	const size_t maxSize = 5;
	d.SetMaxDeckSize(maxSize);
	for (size_t i = 0; i <= maxSize; ++i)
	{
		d.AddCard();
	}
	ASSERT_EQ(5, d.DeckSize());
}

TEST(SimpleDeck, Two_decks_differing_max_size_limits)
{
	Deck PlayerOne(10);
	Deck PlayerTwo(10);
	const size_t playerOneMaxSize = 20;
	const size_t playerTwoMaxSize = 50;
	PlayerOne.SetMaxDeckSize(playerOneMaxSize);
	PlayerTwo.SetMaxDeckSize(playerTwoMaxSize);
	for (size_t i = 0; i < playerTwoMaxSize; ++i)
	{
		PlayerOne.AddCard();
		PlayerTwo.AddCard();
	}
	ASSERT_EQ(playerOneMaxSize, PlayerOne.DeckSize());
	ASSERT_EQ(playerTwoMaxSize, PlayerTwo.DeckSize());
}

TEST(SimpleDeck, Deck_with_maximum_size_returns_remaining_deck_capacity)
{
	Deck d(5);
	const size_t maxDeckSize = 10;
	d.SetMaxDeckSize(maxDeckSize);
	ASSERT_EQ(5, d.RemainingDeckCapacity());
	
	Deck cards(10);
	cards.SetMaxDeckSize(maxDeckSize);
	ASSERT_EQ(0, cards.RemainingDeckCapacity());

	Deck moreCards;
	moreCards.SetMaxDeckSize(maxDeckSize);
	ASSERT_EQ(0, moreCards.RemainingDeckCapacity());

	Deck evenMoreCards(0);
	evenMoreCards.SetMaxDeckSize(maxDeckSize);
	ASSERT_EQ(10, evenMoreCards.RemainingDeckCapacity());
}