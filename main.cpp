#include <iostream>
#include <cstring>
#include <vector>
#include <fstream>
#include "student.h"
#include "node.h"

using namespace std;

/*
 * Name | Sophia You
 * Date | 02/08/2024
 * Description | Hash Table. Students are either randomly generated or added
 * manually and stored in a hash table. The user has the option to print,
 * delete, etc. as well.
 * 
 * Sources
 * https://www.softwaretestinghelp.com/random-number-generator-cpp/ 
 */

// function prototypes
int hash(int ID, int tableSize);
void insert(Node** table, Student* student);
void remove(Node** table, int ID);
void printByIndex(Node** table);
void printByNode(Node* nextNode, Node* startNode);
void rehash(Node** table, Node** newtable);
void generateStudents(vector<Student*> randomStudents, int numStudents);

int main()
{
   // create a dynamic array of linked lists
   int tableSize = 101;
   Node** table = new Node*[tableSize];

   // walk through the node table, set all the values to null
   for (int i = 0; i < tableSize - 1; i++)
     {
       table[i] = NULL;
     }
  
   bool editing = true; // while editing is true, the program runs
   while (editing)
     {
       int max = 20;
       char input[max];
       // prompts user for command type
       cout << "LOWER CASE LETTERS ONLY!!!" << endl;
       cout << "Type 'add' to add a student." << endl;
       cout << "Type 'delete' to delete a student." << endl;
       cout << "Type 'print' to print the student roster." << endl;
       cout << "type 'average' to print the school's average GPA." << endl;
       cout << "Type 'quit' to exit editing mode." << endl;
       cin.getline(input, max);
       int length = strlen(input);
       input[length + 1] = '\0';

       if (strcmp(input, "add") == 0)
 	{
 	  cout << "To enter a student manually, type 'manual.' To generate a random student, type 'random.'" << endl;
 	  cin.getline(input, max);
 	  if (strcmp(input, "manual") == 0)
 	    {
 	      int max = 50;
 	      char input[max];
 	      char* first = new char[25];
 	      char* last = new char[50];
 	      int id = 0;
 	      float gpa = 0.0;

 	      // prompt for student information
 	      cout << "Enter student information: " << endl;
 	      cout << "First name: " << endl;
 	      cin.getline(input, max);
 	      strcpy(first, input);
 	      cout << "Last name: " << endl;
	      cin.getline(input, max);
 	      strcpy(last, input);
 	      cout << "Student ID: " << endl;
 	      cin >> id;
 	      cin.ignore(max, '\n');
 	      cout << "Student GPA:" << endl;
 	      cin >> gpa;
 	      cin.ignore(max, '\n');

 	      // new student
 	      Student* student = new Student(first, last, id, gpa);

 	      // insert the student into the hash table
	      
 	    }
 	  else if (strcmp(input, "random") == 0)
 	    {
 	      int numStudents = 0;
	      
 	      // use random student generator
 	      cout << "How many students would you like to generate?" << endl;
 	      cin >> numStudents; // store this number
 	      cin.ignore(80, '\n');

 	      // local array stores students
 	      vector<Student*> randomStudents;
 	      // walk through each array slot, create a new student
 	      // call on the random student generator
 	      for (int i = 0; i < numStudents; i++)
 		{
 		  Student* student = new Student();
 		  randomStudents.push_back(student);
 		  cout << "student " << i << endl;
 		}
	      
 	      generateStudents(randomStudents, numStudents);
	      
 	    }
 	  else
 	    {
 	      cout << "command not found" << endl;
 	    }
 	}
       else if (strcmp(input, "delete") == 0)
 	{
 	  int id = 0;
 	  cout << "enter the ID of the student you want to delete." << endl;
 	  cin >> id;
 	  cin.ignore(25, '\n');
 	  // remove
 	  cout << "Student removed. " << endl;
 	  cout << "" << endl;
 	}
       else if (strcmp(input, "print") == 0)
 	{
 	  // prints student roster

 	}
       else if (strcmp(input, "quit") == 0)
 	{
 	  editing = false;
 	}
       else
 	{
 	  cout << "Command not recognized." << endl;
 	  cout << "Check your spelling and capitalization and try again." << endl;
 	}
     }
 }

 /*
  * This function takes in the student ID, determines the location where 
  * the item should be inserted 
  */
 int hash(int ID, int tableSize)
 {
   // use modulo arithmetic to get the index
   return ID % tableSize; // return the index/key
 }

 /*
  * This function inserts a student into the table according to its key.
  */
 void insert(Node** table, Student* student)
 {
   // hash the student ID to get a key
   // run through the array of linked lists
   // if the index of the array matches the current index
    // if current node = null, create a new node with student info
   // if current node != null, move thru the list until current->next == null
   // keep track of the number of nodes
   // then set current->next to a new node with the student information in it
 }

 /*
  * This function removes a node in the table according to its key.
  */
 void remove(Node** table, int ID)
 {
   // hash the student ID to get a key
   // run through the array of linked lists
   // if the index of the array matches the current index
   // walk through the linked list in that array until you find the index
   // delete the node
 }

 /*
  * This function walks through the table and calls on printByNode for each
  * index
  */
 void printByIndex(Node** table)
 {
   // walk through the entire table by index
   // at each index, print the nodes out through recursion
 }

 /*
  * This function prints out the linked list inside one slot of the table
  */
 void printByNode(Node* nextNode, Node* startNode)
 {
   // prints out the linked list recursively
 }

 /*
  * This function doubles the number of slots in the table and puts all the data
  * in this new, larger table to avoid collisions
  */
 void rehash(Node** table, Node** newtable)
 {
   // create a new table with double the slots
   // walk through the entire old table
   // create keys by hashing all the ids from the old table
   //
 }

 /*
  * generates random student names, IDs, and GPAs
  */
 void generateStudents(vector<Student*> randomStudents, int numStudents)
 {
   srand((unsigned) time(NULL));
   float random = 0.0;
   int ID = 1;
   for (vector<Student*>:: iterator it = randomStudents.begin(); it != randomStudents.end(); it++)
     {
       // generate random GPA
      random = 1.0 + (float(rand() % 400)/100);
      cout.precision(3);
      cout.setf(ios::showpoint);
      cout << random << endl;
      (*it)->setGPA(random);
      cout << "GPA " << (*it)->getGPA() << endl;

      // assign ID number
      (*it)->setID(ID);
      ID++;
      cout << "ID " << (*it)->getID() << endl;
      cout << "" << endl;

      // first names
      // create a vector of firstnames
      vector<char*> firstNames;
      char* first = new char[25];

      //ifstream first_names("first_names.txt");
      ifstream firstNames = file.open("firstnames.txt");
      char* input;
    }
}
