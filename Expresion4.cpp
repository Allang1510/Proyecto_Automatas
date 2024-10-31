#include<iostream>
#include <queue>

using namespace std;
class Expresion4 {
protected:
private: queue <char> Q;
public:
	Expresion4(queue <char> q) {
		Q = q;
	}

	void ejecutar() {
		Estado0();
	}

	void Estado0() {
		if (Q.empty()) {
			cout << "" ;
			return;
		}
		else {
			char c = Q.front();
			if (c == '0') {
				Q.pop();
				Estado1();
			} else {
				cout << "" ;
			}
		}
	}

	void Estado1() {
		if (Q.empty()) {
			cout << "" ;
			return;
		}
		else {
			char c = Q.front();
			if (c == '1') {
				Q.pop();
				Estado2();
			}

			else {
				cout << "";
			}
		}
	}

	void Estado2() {
		if (Q.empty()) {
			cout << "";
			return;
		}
		else {
			char c = Q.front();
			if (c == '0') {
				Q.pop();
				Estado1();
			}

			if (c == '1') {
				Q.pop();
				Estado3();
			}
		}
	}

	void Estado3() {
		if (Q.empty()) {
			cout << "";
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
			cout << "";
			return;
		}
		else {
			char c = Q.front();
			if (c == '0') {
				Q.pop();
				Estado6();
			}

			if (c == '1') {
				Q.pop();
				Estado5();
			}
		}
	}

	void Estado5() {
		if (Q.empty()) {
			cout << "";
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
			cout << "";
			return;
		}
		else {
			char c = Q.front();
			if (c == '0') {
				Q.pop();
				Estado7();
			}

			if (c == '1') {
				Q.pop();
				Estado5();
			}
		}
	}

	void Estado7() {
		if (Q.empty()) {
			cout << "";
			return;
		}
		else {
			char c = Q.front();
			if (c == '0') {
				Q.pop();
				Estado7();
			}

			if (c == '1') {
				Q.pop();
				Estado8();
			}
		}
	}

	void Estado8() {
		if (Q.empty()) {
			cout << "Expresion 4     ";
			cout << "cadena valida" << endl;
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
				Estado5();
			}
		}
	}

	void Estado9() {
		if (Q.empty()) {
			cout << "Expresion 4     ";
			cout << "cadena valida" << endl;
			return;
		}
		else {
			char c = Q.front();
			if (c == '0') {
				Q.pop();
				Estado6();
			}

			if (c == '1') {
				Q.pop();
				Estado8();
			}
		}
	}
};
