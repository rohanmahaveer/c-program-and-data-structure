#  Graph Representations
                                                       
 
The First step of graph is representing the nodes and edges in the matrix form.
Write a program to obtain the adjacency matrix representation of a graph .
 
Input and Output Format:
Refer sample input and output for formatting specifications.


Sample Input and Output 1:

Please enter the number of nodes in the graph

4

Please enter the number of edges in the graph

4

Is the graph directed

no

Enter the start node, end node and weight of edge no 0

0 1 7

Enter the start node, end node and weight of edge no 1

2 3 5

Enter the start node, end node and weight of edge no 2

1 2 3

Enter the start node, end node and weight of edge no 3

3 0 6

Adjacency Matrix Representation:

0 7 0 6 

7 0 3 0

0 3 0 5

6 0 5 0

Sample Input and Output 2:

Please enter the number of nodes in the graph

4

Please enter the number of edges in the graph

3

Is the graph directed

yes

Enter the start node, end node and weight of edge no 0

0 1 3

Enter the start node, end node and weight of edge no 1

0 2 4

Enter the start node, end node and weight of edge no 2

1 2 5

Adjacency Matrix Representation:

0 3 4 0

0 0 5 0

0 0 0 0

0 0 0 0

 
# EVALUATE AN EXPRESSION ENTERED IN POSTFIX FORM

Write a program to evaluate an expression entered in “postfix” form using stack concept.

Function Specifications:

void initpostfix(struct postfix * )
void setexpr(struct postfix *, char *)
void push(struct postfix *, int)
int pop(struct postfix *)
void calculate(struct postfix *)
void show(struct postfix )

 

Steps to be followed:

Step:1

create a structure named “postfix”. The structure should contain the following data members:

   stack -an integer array of size 50, for performing stack operations(push and pop).
   s -a string variable, to get the input infix expression.
  nn -an integer variable, as a temporary variable, and finally to store the result.
   top-an integer variable to store the top value of the stack.
 
Step:2

In the initpostfix function, the data members of the infix structure has to be initialized as follows:

  assign top as '-1'.

Step:3

In the setexpr function, equate the input infix expression to s.

Step:4

In the push function,

 increment top by 1.
 add the passed integer in the top position.

Step:5

In the pop function,

assign the element in the top position of the stack to an integer variable.
Decrement top by 1.
return the integer.

Step:6

In the calculate function,

Start a while loop to parse the input string character by character ( using the condition “ *( p -> s ) ”).
If digit is encountered, push it to the stack.
If operator is encountered,
pop two elements from the stack.
do the operation according to the operator and store it in a variable.
Push the variable to the stack.

Step:7

In the show function, print the result.

Step:8

In the main function,

Call the initpostfix function.
Get the postfix expression to be evaluated.
Call the setexpr function.
Then call the calculate function.
Then display the result by calling the show function.
End the main function.

Input Output Format:
Input consists of a string which corresponds to the postfix expression.
Refer sample Input Output for formating.


Sample input and output 1:
Enter postfix expression to be evaluated:
13+
Result is: 4

Function Definitions:

void initpostfix (struct postfix *) 
void setexpr (struct postfix *, char *) 
void push (struct postfix *, int) 
int pop (struct postfix *) 
void calculate (struct postfix *) 
