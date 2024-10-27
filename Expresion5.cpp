#include<iostream>
#include <queue>

using namespace std;
class Expresion5 {
protected:
private: queue <char> Q;
public:
	Expresion5(queue <char> q) {
		Q = q;
	}

	void ejecutar() {
		cout << "Expresion 5     ";
		Estado0();
	}

	void Estado0() {
		if (Q.empty()) {
			cout << "error" << endl;
			return;
		}
		else {
			char c = Q.front();
			if (c == '1') {
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
			return;
		}
		else {
			char c = Q.front();
			if (c == '1') {
				Q.pop();
				Estado2();
			} else {
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
			if (c == '0') {
				Q.pop();
				Estado3();
			} else {
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
			if (c == '0') {
				Q.pop();
				Estado4();
			}

			if (c == '1') {
				Q.pop();
				Estado5();
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
			if (c == '0') {
				Q.pop();
				Estado4();
			}

			if (c == '1') {
				Q.pop();
				Estado6();
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
			if (c == '0') {
				Q.pop();
				Estado4();
			}

			if (c == '1') {
				Q.pop();
				Estado5();
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
			if (c == '0') {
				Q.pop();
				Estado4();
			}

			if (c == '1') {
				Q.pop();
				Estado7();
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
			if (c == '0') {
				Q.pop();
				Estado8();
			}

			if (c == '1') {
				Q.pop();
				Estado5();
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
			if (c == '0') {
				Q.pop();
				Estado9();
			}

			if (c == '1') {
				Q.pop();
				Estado6();
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
			if (c == '0') {
				Q.pop();
				Estado8();
			}

			if (c == '1') {
				Q.pop();
				Estado6();
			}
		}
	}
};