#include<iostream>
#include <queue>

using namespace std;
class Expresion3 {
protected:
private: queue <char> Q;
public:
	Expresion3(queue <char> q) {
		Q = q;
	}

	void ejecutar() {
		cout << "Expresion 3     ";
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
			return;
		}
		else {
			char c = Q.front();
			if (c == 'a') {
				Q.pop();
				Estado3();
			}

			else {
				cout << "cadena no valida" << endl;
			}
		}
	}

	void Estado2() {
		if (Q.empty()) {
			cout << "cadena no valida" << endl;
			return;
		}
		else {
			char c = Q.front();
			if (c == 'a') {
				Q.pop();
				Estado3();
			}

			else {
				cout << "cadena no valida" << endl;
			}
		}
	}

	void Estado3() {
		if (Q.empty()) {
			cout << "cadena no valida" << endl;
			return;
		}
		else {
			char c = Q.front();

			if (c == 'b') {
				Q.pop();
				Estado4();
			}

			else {
				cout << "cadena no valida" << endl;
			}
		}
	}

	void Estado4() {
		if (Q.empty()) {
			cout << "cadena no valida" << endl;
			return;
		}
		else {
			char c = Q.front();

			if (c == 'b') {
				Q.pop();
				Estado5();
			}

			else {
				cout << "cadena no valida" << endl;
			}
		}
	}

	void Estado5() {
		if (Q.empty()) {
			cout << "cadena no valida" << endl;
			return;
		}
		else {
			char c = Q.front();
			if (c == 'a') {
				Q.pop();
				Estado6();
			}

			else {
				cout << "cadena no valida" << endl;
			}
		}
	}

	void Estado6() {
		if (Q.empty()) {
			cout << "cadena no valida" << endl;
			return;
		}
		else {
			char c = Q.front();
			if (c == 'a') {
				Q.pop();
				Estado7();
			}

			else {
				cout << "cadena no valida" << endl;
			}
		}
	}

	void Estado7() {
		if (Q.empty()) {
			cout << "cadena no valida" << endl;
			return;
		}
		else {
			char c = Q.front();
			if (c == 'a') {
				Q.pop();
				Estado6();
			}

			if (c == 'b') {
				Q.pop();
				Estado8();
			}
		}
	}

	void Estado8() {
		if (Q.empty()) {
			cout << "cadena no valida" << endl;
			return;
		}
		else {
			char c = Q.front();
			if (c == 'b') {
				Q.pop();
				Estado9();
			}

			else {
				cout << "cadena no valida" << endl;
			}
		}
	}

	void Estado9() {
		if (Q.empty()) {
			cout << "cadena valida" << endl;
			return;
		}
		else {
			char c = Q.front();
			if (c == 'b') {
				Q.pop();
				Estado8();
			}
		}
	}
};