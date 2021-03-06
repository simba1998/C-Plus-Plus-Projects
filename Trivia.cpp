﻿// Trivia.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include "Player.h"
#include "Question.h"
#include <vector>
#include <string>
#include <ctime>

using namespace std;

void addPlayer(vector<Player> &players, int num) {
	for (int i = 0; i < num; i++) {
		Player newPlayer;
		string number = to_string(i + 1);
		string name = "Player " + number;
		//cout << name << endl;
		newPlayer.setName(name);
		players.push_back(newPlayer);
	}
}



/*void equals(Question &left, Question right) {
	left.setAnswers(right.gets1(), right.gets2(), right.gets3(), right.gets4(), right.getcorrect());

	left.setQuestion(right.getQuestion());


}*/



bool AlreadyAdded(int array[], int value, int index) {
	for (int i = 0; i < index; i++) {
		if (array[i] == value) {
			return true;
		}

	}
	return false;
}


int main() {
	string name;
	char input;
	int command;
	int players;
	cout << "Hello and welcome to the Fantasy Book Series Quiz!!" << endl;
	cout << endl;




	vector<Question> Questions;

	Question Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10;

	int choose[5];
	srand(time(NULL));
	int j = 0;
	int random;


	int num = 10;


	/*
	Creating 10 question objects and pushing them into a question vector
	*/

	string question1 = "What is the name of the main character in the Hunger Games?";
	string answer1 = "Primrose Everdeen";
	string answer2 = "Tris Prior";
	string answer3 = "Katniss Everdeen";
	string answer4 = "Clary Fairchild";
	char a1 = 'C';

	Q1.setQuestion(question1);
	Q1.setAnswers(answer1, answer2, answer3, answer4, a1);
	Questions.push_back(Q1);

	string question2 = "What is Four's real name in Divergent?";
	answer1 = "Elias";
	answer2 = "Jace";
	answer3 = "Sebastian";
	answer4 = "Tobias";
	char a2 = 'D';

	Q2.setQuestion(question2);
	Q2.setAnswers(answer1, answer2, answer3, answer4, a2);
	Questions.push_back(Q2);



	string question3 = "How many letters did Lara Jean write in 'To All the Boys I've Loved Before'? ";
	answer1 = "fifteen";
	answer2 = "five";
	answer3 = "one";
	answer4 = "ten";
	char a3 = 'B';


	Q3.setQuestion(question3);
	Q3.setAnswers(answer1, answer2, answer3, answer4, a3);
	Questions.push_back(Q3);

	string question4 = "Who opened the Chamber of Secrets in Harry's second year at Hogwarts?";
	answer1 = "Ginny Weasely";
	answer2 = "Tom Riddle";
	answer3 = "Hermione Granger";
	answer4 = "Draco Malfoy";
	char a4 = 'A';


	Q4.setQuestion(question4);
	Q4.setAnswers(answer1, answer2, answer3, answer4, a4);
	Questions.push_back(Q4);

	string question5 = "Who betrayed James and Lily Potter when Harry was a baby?";
	answer1 = "Sirius Black";
	answer2 = "Hagrid";
	answer3 = "Peter Pettigrew";
	answer4 = "Dumbledore";
	char a5 = 'C';


	Q5.setQuestion(question5);
	Q5.setAnswers(answer1, answer2, answer3, answer4, a5);
	Questions.push_back(Q5);

	string question6 = "Where did Clary Fairchild find the Mortal Cup in 'City of Bones'?";
	answer1 = "In a Tarot Card";
	answer2 = "In Alicante";
	answer3 = "Hidden in a Tomb";
	answer4 = "In her Art Journal";
	char a6 = 'A';

	Q6.setQuestion(question6);
	Q6.setAnswers(answer1, answer2, answer3, answer4, a6);
	Questions.push_back(Q6);

	string question7 = "What is Day's real name in the 'Legend' series?";
	answer1 = "David";
	answer2 = "Metias";
	answer3 = "Tobias";
	answer4 = "Daniel";
	char a7 = 'D';

	Q7.setQuestion(question7);
	Q7.setAnswers(answer1, answer2, answer3, answer4, a7);
	Questions.push_back(Q7);

	string question8 = "What was the name of Aelin's pet in the 'Throne of Glass' series?";
	answer1 = "Salem";
	answer2 = "Fleetfoot";
	answer3 = "Buckbeak";
	answer4 = "Abraxos";
	char a8 = 'B';

	Q8.setQuestion(question8);
	Q8.setAnswers(answer1, answer2, answer3, answer4, a8);
	Questions.push_back(Q8);

	string question9 = "What did Professor Snape assume Harry stole from his stock room in 'Harry Potter and the Goblet of Fire'?";
	answer1 = "Ingredients for Felix Felicis potion";
	answer2 = "Ingredients for Polyjuice potion";
	answer3 = "A Horcrux";
	answer4 = "A love potion for Cho";
	char a9 = 'B';

	Q9.setQuestion(question9);
	Q9.setAnswers(answer1, answer2, answer3, answer4, a9);
	Questions.push_back(Q9);

	string question10 = "What color were Sebastian Verlac's eyes at the end of 'City of Heavenly Fire'";
	answer1 = "green";
	answer2 = "blue";
	answer3 = "grey";
	answer4 = "brown";
	char a10 = 'A';

	Q10.setQuestion(question10);
	Q10.setAnswers(answer1, answer2, answer3, answer4, a10);
	Questions.push_back(Q10);





	cout << "How many players would like to play this game? : ";
	cin >> players;

	vector<Player> Players;

	addPlayer(Players, players);

	//cout << "Options:" << endl;
	//cout << "0 to Exit \n1 to Continue" << endl;



	do {
		cout << endl;
		cout << "Options: " << endl;
		cout << "0 to Exit \n1 to Continue" << endl;
		cout << endl;
		cout << "\nWhat would you like to do?" << endl;
		cin >> command;

		if (command == 1) {
			/*
			randomly choosing numbers from 1 to 9 without duplicates and
			storing them into array of 5 integers
			*/
			for (int i = 0; i < 5; i++) {
				int random = rand() % num;
				while (i != 0 && AlreadyAdded(choose, random, i)) {
					random = rand() % num;
				}
				choose[i] = random;

			}





			int n = 1;
			/*
			with the array i created i choose the five question objects from
			the question vector using the values i stored in array
			*/

			for (int v = 0; v < 5; v++) {
				//	Question q; 

				/** ok i changed the code on line 257 and line 261 ti include &Questions[ar]  instead of sending in an object to the class
				and instead of calling the equals function i printed the question and answer using Questions[ar].getQuestion()
				instead of q.getQuestions() so i dont have to keep creating new objects
				**/

				int ar = choose[v]; // choose a random question from the 10
			//	equals(q, Questions[ar]); // decided not to use the equals function (hope it helps with the efficiency)

				for (int i = 0; i < players; i++) {
					/*
					Printing questions to ask user and recording their answer to
					compare with correct answer
					*/
					cout << endl;
					cout << Players[i].getName() << endl;
					cout << "------------------------" << endl;
					cout << n << ". " << Questions[ar].getQuestion() << endl;
					//q.printAnswers(); // not using question object
					Questions[ar].printAnswers();
					cin >> input;

					n++;
					/*
					comparing users answers with the correct answers stored in question objects
					and adding them to right and wrong vectors in player class (player by player)
					*/
					if (Questions[ar].guess(input)) {
						Players[i].rightQ(&Questions[ar]);

					}
					else {
						Players[i].wrongQ(&Questions[ar]);
					}

				}
				n = 1;
			}

			cout << "\n" << endl;
			/*
			Printing the wrong and right questions and the number of wrong and right answers for each player
			*/
			for (int j = 0; j < Players.size(); j++) {
				cout << endl;
				cout << Players[j].getName() << endl;
				cout << "---------------------------" << endl;
				cout << "Missed Questions: (" << Players[j].getWrongSize() << ") " << endl;
				cout << "--------------------" << endl;
				Players[j].printWrong();
				cout << endl;
				cout << "Correct Questions: (" << Players[j].getRightSize() << ")" << endl;
				cout << "--------------------" << endl;
				Players[j].printRight();




			}
		}
		else if (command != 1 && command != 0) {
			cout << "Enter a valid integer." << endl; // makes sure the user doesnt use integers that arent on the option menu
		}
		else if (command == 0) {
			cout << "Thank you for playing!!";
		}

	} while (command != 0);

	return 0;
}






/*Note to self
--------------
Ask the professor why my pointer to the question is being deleted when i exited the loop so i need to create the pointer to the questions outside the loop

i can create 10 question objects then hold them in an array, in a for loop that will run 5 times, randomly choose
an int from 1 to 10 that hasnt been chosen yet to ask the user


create an if statement that asks the object class if the user entered the correct answer if(Question.correct(userInput) --> returns true or false
 create array of random numbers from 0 to 9 then create a variable to store the number from the array to access that question from questions vector
*/
