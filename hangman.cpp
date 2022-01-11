#include <fstream>
#include <string>
#include <iostream>
using namespace std;

bool is_hung(int); //function prototype that returns a boolean variable which decides whether the game ends or continues

int main()
{
    //PART 1
    
    ofstream questions; //creating an output file stream variable
    questions.open("infile.txt"); //opening a file
    
    //writing to file
    questions << "Question: What relational operator means greater than or equal to?"<< endl; 
    questions << "A Answer: >"<< endl;
    questions << "B Answer: >="<< endl;
    questions << "C Answer: =>"<< endl;
    questions << "D Answer: <"<< endl;
    questions << "Correct answer: B"<< endl;
    
    questions << "Question: What two values does a bool variable allow?"<< endl;
    questions << "A Answer: 0 and 1"<< endl;
    questions << "B Answer: True or false"<< endl;
    questions << "C Answer: Yes and no"<< endl;
    questions << "D Answer: 1 and 2"<< endl;
    questions << "Correct answer: B"<< endl;
    
    questions << "Question: Which relational expression (where x is 4 and y is 8) is true?"<< endl;
    questions << "A Answer: x = y"<< endl;
    questions << "B Answer: x > y"<< endl;
    questions << "C Answer: x < = y"<< endl;
    questions << "D Answer: x >= y"<< endl;
    questions << "Correct answer: C"<< endl;
    
    questions << "Question: If we place an if statement within an if statement, we are creating a "<< endl;
    questions << "A Answer: If-Then-Else statement"<< endl;
    questions << "B Answer: Multiway branch"<< endl;
    questions << "C Answer: If-Then-Else-If statement"<< endl;
    questions << "D Answer: Nested control structure"<< endl;
    questions << "Correct answer: D"<< endl;
    
    questions << "Question: The && and || operators are"<< endl;
    questions << "Answer A: Binary operators"<< endl;
    questions << "Answer B: Unary operators"<< endl;
    questions << "Answer C: Secondary operators"<< endl;
    questions << "Answer D: Primary operators"<< endl;
    questions << "Correct answer: A"<< endl;
    
    questions << "Question: To find out if either the test grade is an A or the quiz grade is an A we would write the expression"<< endl;
    questions << "Answer A: testGrade = `A' || quizGrade = `A'"<< endl;
    questions << "Answer B: testGrade = `A' && quizGrade = `A'"<< endl;
    questions << "Answer C: testGrade == `A' && quizGrade == `A'"<< endl;
    questions << "Answer D: testGrade ==`A' || quizGrade == `A"<< endl;
    questions << "Correct answer: D"<< endl;
    
    questions << "Question: Which two pairs of expressions are equivalent?"<< endl;
    questions << "A Answer: !(a == b) and a != b"<< endl;
    questions << "B Answer: !(a == b) and a =! B"<< endl;
    questions << "C Answer: (a == b)! and a != b"<< endl;
    questions << "D Answer: (a == b)! and a =! B"<< endl;
    questions << "Correct answer: A"<< endl;
    
    questions << "Question: Which operator has the lowest precedence?"<< endl;
    questions << "A Answer: &&"<< endl;
    questions << "B Answer: =="<< endl;
    questions << "C Answer: ||"<< endl;
    questions << "D Answer: ="<< endl;
    questions << "Correct answer: D"<< endl;
    
    questions << "Question: An assertion that must be true before a module is executed for the module to execute correctly is a"<< endl;
    questions << "A Answer: Postcondition"<< endl;
    questions << "B Answer: Precondition"<< endl;
    questions << "C Answer: Priorcondition"<< endl;
    questions << "D Answer: Subsequentcondition"<< endl;
    questions << "Correct answer: B"<< endl;
    
    questions << "Question: The While statement is different from the If statement because"<< endl;
    questions << "A Answer: It is a looping structure"<< endl;
    questions << "B Answer: It is used to repeat a course of action"<< endl;
    questions << "C Answer: The statement is either skipped, executed once, or executed over and over"<< endl;
    questions << "D Answer: All of the above"<< endl;
    questions << "Correct answer: D"<< endl;

    questions << "Question: What are the two major types of loops?"<< endl;
    questions << "A Answer: Count-controlled loops and event-controlled loops"<< endl;
    questions << "B Answer: Sentinel-controlled loops and end-of-file-Controlled loops"<< endl;
    questions << "C Answer: Sentinel-controlled loops and flag-controlled loops"<< endl;
    questions << "D Answer: Count-controlled loops and flag-controlled loops"<< endl;
    questions << "Correct answer: A"<< endl;
    
    questions << "Question: A While statement is a looping construct that allows a program to repeat a statement as long as the value on an expression is"<< endl;
    questions << "A Answer: False"<< endl;
    questions << "B Answer: True"<< endl;
    questions << "C Answer: Positive"<< endl;
    questions << "D Answer: Negative"<< endl;
    questions << "Correct answer: B"<< endl;
    
    questions << "Question: What are the phases of loop execution?"<< endl;
    questions << "A Answer: Entry, test, exit"<< endl;
    questions << "B Answer: Entry, iteration, test"<< endl;
    questions << "C Answer: Entry, iteration, test, exit"<< endl;
    questions << "D Answer: Entry, entry, iteration, exit"<< endl;
    questions << "Correct answer: C"<< endl;

    questions << "Question: Event-controlled loops repeat until"<< endl;
    questions << "A Answer: something happens within the loop"<< endl;
    questions << "B Answer: the specified number of times is reached"<< endl;
    questions << "C Answer: the statement has been executed 25 times"<< endl;
    questions << "D Answer: the statement is false"<< endl;
    questions << "Correct answer: A"<< endl;
    
    questions << "Question: The condition that causes a loop to be exited is the "<< endl;
    questions << "A Answer: exit the loop condition"<< endl;
    questions << "B Answer: termination condition"<< endl;
    questions << "C Answer: conclude condition"<< endl;
    questions << "D Answer: execution condition"<< endl;
    questions << "Correct answer: B"<< endl;

    questions.close(); //closing the file
    
    //PART 2
    
    float marks;
    string q,a,b,c,d,ans,ans2; //declaring variables
    int num_errors = 0; //creating a variable that stores the number of errors the user makes
    bool end_game = false; //creating a variable that controls the end of loop and game
    
    ifstream reader; //creating an input file stream variable
    reader.open("infile.txt"); //opening the file we created previously
    getline(reader,q); //reads the first line of the file //Priming Read
       
    while(end_game == false && !reader.eof()) //checks conditions if the number of errors is 7 and the file ends to continue the loop
    {
        cout << q << endl; //prints the question/the first line from the files
        getline(reader,a); //stores the option A for the respective question
        cout << a << endl; //prints the option A
        getline(reader,b); //stores the option B for the respective question
        cout << b << endl; //prints the option A
        getline(reader,c); //stores the option C for the respective question
        cout << c << endl; //prints the option A    
        getline(reader,d); //stores the option D for the respective question
        cout << d << endl; //prints the option A
        
        reader >> ans >> ans >> ans; //skips the "Correct" and "answer:" from the file and stores the actual answer in the variable answer
        
        cout << "Enter answer(A/B/C/D)" << endl; //asks the user for an input
        cin >> ans2; //stores the users answer in ans2
        
        if (ans2 != ans) //check whether the user's answer is right or not
        {
            num_errors += 1; //incrases the number of errors variable by 1 if the condition applies
        }
        
        end_game = is_hung(num_errors); //calls the function is_hung and stores the returning value to game_continue
        
        getline(reader,q); //stores the end of line character
        getline(reader,q); //stores the next question/line from the file to the variable q
    }
    
    reader.close(); //close the file
    
    if (num_errors == 7) //checks if the number of errors the user made is 7
    {
        cout << "GAME FINISHED" << endl; //prints the message if the check passes
    }
    else
    {
        cout << "GAME COMPLETED!!!" << endl; //prints the message if the first check fails
    }

    return 0; //returns a value 0 which tells the computer everything went right
}

bool is_hung(int n) //function definition 
{
    if (n == 0) //checks if the number of errors is 0
    {
        return false; //returns a value that continues the loop and the game
    }
    else if (n == 1) //checks if the number of errors is 1
    {
        cout << "\t \t \t" << " O " << endl; //prints the head of the hangman
        return false; //returns a value that continues the loop and the game
    }
    else if (n == 2) //checks if the number of errors is 2
    {
        cout << "\t \t \t" << " O " << endl;
        cout << "\t \t \t" << "  \\" << endl; //prints the head and the left hand of the hang man
        return false; //returns a value that continues the loop and the game
    }
    else if (n == 3) //checks if the number of errors is 3
    {
        cout << "\t \t \t" << " O " << endl;
        cout << "\t \t \t" << "/ \\" << endl; //prints the head and the two hands of the hang man
        return false; //returns a value that continues the loop and the game
    }
    else if (n == 4) //checks if the number of errors is 4
    {
        cout << "\t \t \t" << " O " << endl;
        cout << "\t \t \t" << "/|\\" << endl; //prints the head and the upper body of the hang man
        return false; //returns a value that continues the loop and the game
    }
    else if (n == 5) //checks if the number of errors is 5
    {
        cout << "\t \t \t" << " O " << endl;
        cout << "\t \t \t" << "/|\\" << endl;
        cout << "\t \t \t" << " | " << endl; //prints the head and the body of the hang man
        return false; //returns a value that continues the loop and the game
    }
    else if (n == 6) //checks if the number of errors is 6
    {
        cout << "\t \t \t" << " O " << endl;
        cout << "\t \t \t" << "/|\\" << endl;
        cout << "\t \t \t" << " | " << endl;
        cout << "\t \t \t" << "  \\" << endl; //prints the head, body and left leg of the hang man
        return false; //returns a value that continues the loop and the game
    }
    else if (n == 7) //checks if the number of errors is 7
    {
        cout << "\t \t \t" << " O " << endl;
        cout << "\t \t \t" << "/|\\" << endl;
        cout << "\t \t \t" << " | " << endl;
        cout << "\t \t \t" << "/ \\" << endl; //prints the full body the hang man
        cout << "YOU ARE HUNG" << endl; //prints the hung message
        return true; //returns a value that ends the loop and the game
    }
    
}