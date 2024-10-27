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
		cout << "Expresion 2     ";
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

			else {
				cout << "cadena no valida" << endl;
			}
		}
	}

	void Estado1() {
		if (Q.empty()) {
			cout << "cadena no valida" << endl;
		}
		else {
			char c = Q.front();

			if (c == 'b') {
				Q.pop();
				Estado2();
			}

			else {
				cout << "cadena no valida" << endl;
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
		}
		else {
			char c = Q.front();
			if (c == 'a') {
				Q.pop();
				Estado3();
			}

			if (c == 'b') {
				Q.pop();
				Estado5();
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
				Estado6();
			}

			if (c == 'b') {
				Q.pop();
				Estado7();
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
				Estado6();
			}

			if (c == 'b') {
				Q.pop();
				Estado7();
			}
		}
	}

	void Estado7() {
		if (Q.empty()) {
			cout << "cadena valida" << endl;
		}
		else {
			char c = Q.front();
			if (c == 'a') {
				Q.pop();
				Estado6();
			}

			if (c == 'b') {
				Q.pop();
				Estado7();
			}
		}
	}
};