#include <iostream>

using namespace std;

class triangle {
	private:
		float val1[2];
	
	public:
		float setval(float a, float b) {
			val1[0] = b;
			val1[1] = a;
		}
		
		float calc() {	
			return ((val1[0] * val1[1])/2);
		}
};

int main() {
	triangle boi;

	boi.setval(0.2, 4);
	cout << "Answer: " << boi.calc();
}
