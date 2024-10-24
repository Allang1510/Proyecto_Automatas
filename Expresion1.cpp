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
		char c = Q.front();
		if (c == 'a') {
			Q.pop();
			Estado1();
		}

		if (c == 'b') {
			Q.pop();
			Estado2();
		}

		if (Q.empty()) {
			cout << "cadena no valida" << endl;
		}

	}

	void Estado1() {
		char c = Q.front();
		if (c == 'a') {
			Q.pop();
			Estado1();
		}

		if (c == 'b') {
			Q.pop();
			Estado3();
		}

		if (Q.empty()) {
			cout << "cadena no valida" << endl;
		}

	}

	void Estado2() {
		char c = Q.front();
		if (c == 'a') {
			Q.pop();
			Estado1();
		}

		if (c == 'b') {
			Q.pop();
			Estado2();
		}

		if (Q.empty()) {
			cout << "cadena no valida" << endl;
		}

	}

	void Estado3() {
		char c = Q.front();
		if (c == 'a') {
			Q.pop();
			Estado1();
		}

		if (c == 'b') {
			Q.pop();
			Estado4();
		}

		if (Q.empty()) {
			cout << "cadena no valida" << endl;
		}

	}

	void Estado4() {
		char c = Q.front();
		if (c == 'a') {
			Q.pop();
			Estado5();
		}

		if (c == 'b') {
			Q.pop();
			Estado2();
		}

		if (Q.empty()) {
			cout << "cadena no valida" << endl;
		}

	}

	void Estado5() {
		char c = Q.front();
		if (c == 'a') {
			Q.pop();
			Estado1();
		}

		if (c == 'b') {
			Q.pop();
			Estado6();
		}

		if (Q.empty()) {
			cout << "cadena no valida" << endl;
		}

	}

	void Estado6() {
		char c = Q.front();
		if (c == 'a') {
			Q.pop();
			Estado5();
		}

		if (c == 'b') {
			Q.pop();
			Estado3();
		}

		if (Q.empty()) {
			cout << "cadena valida" << endl;
		}

	}
};