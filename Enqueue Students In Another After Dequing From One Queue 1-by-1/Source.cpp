#include"Student.h"
#include"myQueue.h"
int main(){
	myQueue<Student> queue(10);
	myQueue<Student> resultQueue(10);
	Student s[10];
	bool check = true;
	int option,i=0;
	while (check){
		std::cin >> option;
		if (option == 1){
			cin >> s[i];
			queue.enqueue(s[i]);
			i++;
		}
		else if (option == 2){
			resultQueue.enqueue(queue.dequeue().startQuizGenerateScore());
		}
		else if (option == 3){
			resultQueue.display();
		}
		else if (option == 4){
			check = false;
		}
		else{
			std::cout << "Entered The Wrong Input" << std::endl;
		}

		


	}
}