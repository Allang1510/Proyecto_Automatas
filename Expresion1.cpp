#include<iostream>
#include <queue>

using namespace std;
class Expresion1 {
protected:	
private : queue <char> Q;
public:
	Expresion1(queue <char> q) {
		Q = q;
	}

	void ejecutar() {
		Estado0();
	}
	
	void Estado0() {
		if (Q.empty()) {
			cout << "";
			return;
		}
		else {
			char c = Q.front();
			if (c == 'a') {
				Q.pop();
				Estado1();
			}

			if (c == 'b') {
				Q.pop();
				Estado2();
			}
		}
	}

	void Estado1() {
		if (Q.empty()) {
			cout << "";
		}
		else {
			char c = Q.front();
			if (c == 'a') {
				Q.pop();
				Estado1();
			}
			if (c == 'b') {
				Q.pop();
				Estado3();
			}
		}
	}

	void Estado2() {
		if (Q.empty()) {
			cout << "";
		}
		else {
			char c = Q.front();
			if (c == 'a') {
				Q.pop();
				Estado1();
			}

			if (c == 'b') {
				Q.pop();
				Estado2();
			}
		}
	}

	void Estado3() {
		if (Q.empty()) {
			cout << "";
		}
		else {
			char c = Q.front();
			if (c == 'a') {
				Q.pop();
				Estado1();
			}

			if (c == 'b') {
				Q.pop();
				Estado4();
			}
		}
		

	}

	void Estado4() {
		if (Q.empty()) {
			cout << "";
		}
		else {
			char c = Q.front();
			if (c == 'a') {
				Q.pop();
				Estado5();
			}

			if (c == 'b') {
				Q.pop();
				Estado2();
			}
		}

	}

	void Estado5() {
		if (Q.empty()) {
			cout << "";
		}
		else {
			char c = Q.front();
			if (c == 'a') {
				Q.pop();
				Estado1();
			}

			if (c == 'b') {
				Q.pop();
				Estado6();
			}
		}

	}

	void Estado6() {
		if (Q.empty()) {
			cout << "Expresion 1     ";
			cout << "cadena valida" << endl;
		}
		else {
			char c = Q.front();
			if (c == 'a') {
				Q.pop();
				Estado5();
			}

			if (c == 'b') {
				Q.pop();
				Estado4();
			}
		}

	}
};