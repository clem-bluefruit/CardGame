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
}