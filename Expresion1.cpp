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
		cout << "Expresion 1     ";
		Estado0();
	}
	
	void Estado0() {
		if (Q.empty()) {
			cout << "error" << endl;
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
			cout << "cadena no valida" << endl;
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
			cout << "cadena no valida" << endl;
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
			cout << "cadena no valida" << endl;
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
			cout << "error" << endl;
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
			cout << "cadena no valida" << endl;
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
				Estado3();
			}
		}

	}
};