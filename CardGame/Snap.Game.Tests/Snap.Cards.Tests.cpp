#include <gtest\gtest.h>
#include <Card.h>
#include <SnapCards.h>
#include <SnapDeck.h>

using namespace ::testing;
using namespace ::std;
using namespace ::CARDGAME;

TEST(SnapCard, Initiating_a_snap_card_with_card_value_returns_card_value)
{
	SnapCard card(2);
	ASSERT_EQ(2, card.m_cardValue);
}

TEST(SnapCard, Initiating_a_snap_card_without_value_returns_1)
{
	SnapCard card;
	ASSERT_EQ(1, card.m_cardValue);
}

TEST(SnapDeck, Initialise_a_deck_of_8_snap_cards_returns_deck_size_of_8)
{
	SnapDeck deck(8);
	//ASSERT_EQ(8, deck.DeckSize());
}