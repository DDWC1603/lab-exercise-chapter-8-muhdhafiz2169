#include <iostream>

using namespace std;

class Log{
  private:
  	int mlogLevel = level[2];
	
  public:
	int level[3] = {1, 2, 3}; // 0 - error, 1 - warning, 2 - info
	int x;
	
	int setLevel(int x) {
		mlogLevel = level[x];
		
		return x;
	}
  	
  	void Error(string msg) {
  		//if (mlogLevel >= level[0])
  			cout << "Error: " << msg;
	}
	
	void Warning(string msg) {
		//if (mlogLevel >= level[1])
  			cout << "Warning: " << msg;
	}
	
	void Info(string msg) {
  		//if (mlogLevel >= level[2])
		  cout << "Info: " << msg;
	}
};

int main() {
	Log log;
	
	log.Info("heheheheheehehehe");
	cout << endl << log.setLevel(1);
}
