/**
 *	This program solves Uebung 3.2 (p. 189).
 */
 
Rational add(long a, Rational b){
	return add(Rational(a,1), b);
}

Rational add(Rational a, long b){
	return add(b, a);
}