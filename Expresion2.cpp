#include<iostream>
#include <queue>

using namespace std;
class Expresion2 {
protected:
private: queue <char> Q;
public:
	Expresion2(queue <char> q) {
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

		else {
			cout << "cadena no valida" << endl;
		}

	}

	void Estado1() {
		char c = Q.front();

		if (c == 'b') {
			Q.pop();
			Estado2();
		}

		else {
			cout << "cadena no valida" << endl;
		}

	}

	void Estado2() {
		char c = Q.front();
		if (c == 'a') {
			Q.pop();
			Estado3();
		}

		else {
			cout << "cadena no valida" << endl;
		}

	}

	void Estado3() {
		char c = Q.front();

		if (c == 'b') {
			Q.pop();
			Estado4();
		}

		else {
			cout << "cadena no valida" << endl;
		}

	}

	void Estado4() {
		char c = Q.front();
		if (c == 'a') {
			Q.pop();
			Estado3();
		}

		if (c == 'b') {
			Q.pop();
			Estado5();
		}

		if (Q.empty()) {
			cout << "cadena no valida" << endl;
		}

	}

	void Estado5() {
		char c = Q.front();
		if (c == 'a') {
			Q.pop();
			Estado6();
		}

		if (c == 'b') {
			Q.pop();
			Estado7();
		}

		if (Q.empty()) {
			cout << "cadena no valida" << endl;
		}

	}

	void Estado6() {
		char c = Q.front();
		if (c == 'a') {
			Q.pop();
			Estado6();
		}

		if (c == 'b') {
			Q.pop();
			Estado7();
		}

		if (Q.empty()) {
			cout << "cadena valida" << endl;
		}

	}

	void Estado7() {
		char c = Q.front();
		if (c == 'a') {
			Q.pop();
			Estado6();
		}

		if (c == 'b') {
			Q.pop();
			Estado7();
		}

		if (Q.empty()) {
			cout << "cadena valida" << endl;
		}

	}
};