#include <iostream>
#include <cstdlib>
#include "priority_queue.h"

using namespace std;

void pushQueue(TemplatePriorityQueue* Que, int data) {
	cout << "[+] Integer "<< data <<" pushed in the Priority Queue." << endl;
	Que->Push(data);
}

void popQueue(TemplatePriorityQueue* Que) {
	cout << "[+] Integer "<< Que->Top() << " will be poped from the Priority Queue." << endl;
	Que->Pop();
}

int main(int argc, char* argv[]) {
	TemplatePriorityQueue priQueue;
	int customNumber = 0;

	//empty check
	if(priQueue.Empty()){
		cout << "[!] Priority Queue is empty - initalized" << endl;
	}

	// push
	pushQueue(&priQueue, 23);
	pushQueue(&priQueue, 598);
	pushQueue(&priQueue, 302);

	if( argc > 1 ){
		customNumber = atoi(argv[1]);
		if( customNumber > -500 && customNumber < 2000 ){
			pushQueue(&priQueue, customNumber);
		}
		else{
			pushQueue(&priQueue, -1);
		}
	}
	else{
		pushQueue(&priQueue, -1);
	}

	//empty & size
	if(priQueue.Empty()) {
		cout << "[-] Priority Queue is empty. - Push method did not work!" << endl;
		return -1;
	}
	else{
		cout << "[+] Priority Queue has data. - Queue Size : " << priQueue.Size() <<endl;
	}

	// pop twice
	popQueue(&priQueue);
	popQueue(&priQueue);

	cout << "[+] Now, Top element of Priority Queue is " << priQueue.Top() << endl;
	
	return 0;
}
