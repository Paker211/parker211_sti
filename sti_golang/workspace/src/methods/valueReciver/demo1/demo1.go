package main

import(
  "fmt"
)

type deck []string

func (d deck) print() {
  for i, card := range d {
    fmt.Println(i, card)
  }
}

func main() {

  cards := deck {
    "Ace of Diamonds.",
    newCard(),
  }

  cards = append(cards, "Six of Spades")

  cards. print()

}

func newCard() string {
  return "Five of Diamonds"
}
