#include <iostream>
#include "concreteObserver.cpp"
#include "hilary.cpp"
#include "penaNieto.cpp"
#include "trump.cpp"


int main() {
	// Observers are MVS, Televisa, TVAzteca, RadioFormula, CNNNoticias
	// Personalities are PenaNieto, Hilary, Trump. They talk
	// Hacer clases hijas de ConcreteObserver para cada news network
	// Con patron command hacer attach de las redes correspondientes a cada personalidad

	ConcreteObserver mvs = ConcreteObserver("MVS Noticias", "+-*");
	ConcreteObserver tel = ConcreteObserver("Televisa", "+-*");
	ConcreteObserver tva = ConcreteObserver("TV Azteca", "+-*");
	ConcreteObserver rfo = ConcreteObserver("Radio Formula", "+-*");
	ConcreteObserver cnn = ConcreteObserver("CNN Noticias", "+-");

	Hilary hilary = Hilary('-');
	hilary.Attach(&cnn);
	hilary.Attach(&mvs);

	hilary.Say("Stuff and Things.");
}