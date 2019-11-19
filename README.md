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


#  GRAPH REPRESENTATIONS - LinkedList

Write a program to obtain the adjacency list representation of a graph from its adjacency matrix representation.

Input and Output Format:

Refer sample input and output for formatting specifications.
[All text in bold corresponds to input and the rest corresponds to output]

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

1 2 4

Enter the start node, end node and weight of edge no 3

3 0 6

Adjacency Matrix Representation:

0 7 0 6

7 0 4 0

0 4 0 5

6 0 5 0

Adjacency List Representation:

Node 0 is connected to the following nodes:

Node 1 with edge weight 7

Node 3 with edge weight 6

Node 1 is connected to the following nodes:

Node 0 with edge weight 7

Node 2 with edge weight 4

Node 2 is connected to the following nodes:

Node 1 with edge weight 4

Node 3 with edge weight 5

Node 3 is connected to the following nodes:

Node 0 with edge weight 6

Node 2 with edge weight 5

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

Adjacency List Representation:

Node 0 is connected to the following nodes:

Node 1 with edge weight 3

Node 2 with edge weight 4

Node 1 is connected to the following nodes:

Node 2 with edge weight 5


# BINARY SEARCH TREE AND TRAVERSALS


Implement a program to construct a Binary Search Tree and also display the elements in the tree using Inorder , Preorder and Postorder traversals.


Create a structure

 struct tnode {
 
int data;

struct tnode * leftc;

struct tnode * rightc;

};
 

Binary Search tree is a binary tree in which each internal node x stores an element such that the element stored in the left subtree of x are less than x and elements stored in the right subtree of x are greater than or equal to x. This is called binary-search-tree property.

 Input and Output Format:

Refer Sample Input and Output for formatting specifications.

 [All text in bold corresponds to input and the rest corresponds to output]

Sample Input and Output:

Enter the element to be inserted in the tree

1

Do you want to insert another element?

yes

Enter the element to be inserted in the tree

2

Do you want to insert another element?

yes

Enter the element to be inserted in the tree

3

Do you want to insert another element?

yes

Enter the element to be inserted in the tree

4

Do you want to insert another element?

no

Inorder Traversal : The elements in the tree are 1 2 3 4

Preorder Traversal : The elements in the tree are 1 2 3 4

Postorder Traversal : The elements in the tree are 4 3 2 1

 Function Definitions:

void insert (struct tnode **, int num) 

void inorder (struct tnode * s) 

void preorder (struct tnode * s) 

void postorder (struct tnode * s) 


# DEPTH FIRST TRAVERSAL - DFT

Write a program to implement Depth First Traversal for a given graph

Input and Output Format:
Refer Sample Input and Output.
 

Sample Input and Output 1:

Enter the number of nodes in the graph

4

Enter the number of edges in the graph

5

Is the graph directed(yes/no)

no

Enter the start node, end node and weight of edge no 0

0 1 4

Enter the start node, end node and weight of edge no 1

0 3 6

Enter the start node, end node and weight of edge no 2

1 2 2

Enter the start node, end node and weight of edge no 3

1 3 1

Enter the start node, end node and weight of edge no 4

2 3 5

Adjacency Matrix Representation:

0 4 0 6

4 0 2 1

0 2 0 5

6 1 5 0

Adjacency List Representation:

Node 0 is connected to the following nodes:

Node 1 with edge weight 4

Node 3 with edge weight 6

Node 1 is connected to the following nodes:

Node 0 with edge weight 4

Node 2 with edge weight 2

Node 3 with edge weight 1

Node 2 is connected to the following nodes:

Node 1 with edge weight 2

Node 3 with edge weight 5

Node 3 is connected to the following nodes:

Node 0 with edge weight 6

Node 1 with edge weight 1

Node 2 with edge weight 5

Enter the starting node / vertex for depth first traversal

o

Depth First Traversal starting from node 0

0 1 2 3

Sample Input and Output 2:

Enter the number of nodes in the graph

4

Enter the number of edges in the graph

5

Is the graph directed(yes/no)

yes

Enter the start node, end node and weight of edge no 0

0 1 4

Enter the start node, end node and weight of edge no 1

0 3 6

Enter the start node, end node and weight of edge no 2

2 1 2

Enter the start node, end node and weight of edge no 3

1 3 1

Enter the start node, end node and weight of edge no 4

3 2 5

Adjacency Matrix Representation:

0 4 0 6

0 0 0 1

0 2 0 0

0 0 5 0

Adjacency List Representation:

Node 0 is connected to the following nodes:

Node 1 with edge weight 4

Node 3 with edge weight 6

Node 1 is connected to the following nodes:

Node 3 with edge weight 1

Node 2 is connected to the following nodes:

Node 1 with edge weight 2

Node 3 is connected to the following nodes:

Node 2 with edge weight 5

Enter the starting node / vertex for depth first traversal

o

Depth First Traversal starting from node 0

0 1 3 2
 
 
# BREADTH FIRST TRAVERSAL - BFT

 Write a program to implement Breadth First Traversal for a given graph


Input and Output Format:

Refer sample input and output for formatting specifications.

 

[All text in bold corresponds to input and the rest corresponds to output]


Sample Input and Output 1:

Enter the number of nodes in the graph

4

Enter the number of edges in the graph

5
Is the graph directed(yes/no)

no

Enter the start node and end node of edge no 0

0 1

Enter the start node and end node of edge no 1

0 3

Enter the start node and end node of edge no 2

1 2

Enter the start node and end node of edge no 3

1 3

Enter the start node and end node of edge no 4

2 3

Enter the starting node / vertex for breadth first traversal

o

Breadth First Traversal starting from node 0

0 1 3 2

Sample Input and Output 2:

Enter the number of nodes in the graph

4

Enter the number of edges in the graph

5

Is the graph directed(yes/no)

yes

Enter the start node and end node of edge no 0

0 1

Enter the start node and end node of edge no 1

3 0

Enter the start node and end node of edge no 2

1 2

Enter the start node and end node of edge no 3

1 3

Enter the start node and end node of edge no 4

3 2

Enter the starting node / vertex for breadth first traversal

o

Breadth First Traversal starting from node 0

0 1 2 3

#  CIRCULAR QUEUE - LINKED LIST IMPLEMENTATION

Queue - Linked List Implementation
Consider implementing a Circular Queue using a Linked List.

 Create a structure

struct node {

    int data ;

    struct node * link ;

};

 Write a program to implement enQueue(addcirq) and deQueue(delcirq) operations on queue and to display the contents of the queue.


Create a function printMenu to print the following:

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

 

Print the message “Queue is empty” in the deQueue(delcirq) function and return the value -1000 when an attempt is made to delete data from an empty queue.


Function specifications:

void addcirq ( struct node **f, struct node **r, int item ) --- f corresponds to the front node and r corresponds to the rear node.

int delcirq ( struct node **f, struct node **r ) --- f corresponds to the front node and r corresponds to the rear node.

void cirq_display ( struct node *f ) --- f coresponds to the pointer to the front node)

void printMenu( )
 

Input and Output Format:

Refer sample input and output for formatting specifications.

Note that the statement “The contents of the queue are” is in the main function. In the display function, if the queue is empty, print “ {}”.


[All text in bold corresponds to input and the rest corresponds to output]
 

Sample Input and Output:

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

1

Enter the element to be inserted/entered

20

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

1

Enter the element to be inserted/entered

30

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

1

Enter the element to be inserted/entered

40

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

3

The contents of the queue are 20 30 40

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

1

Enter the element to be inserted/entered

50

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

3

The contents of the queue are 20 30 40 50

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

2

The deleted element is 20

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

2

The deleted element is 30

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

2

The deleted element is 40

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

2

The deleted element is 50

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

2

Queue is empty

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

3

The contents of the queue are {}

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

4

# QUEUE 2 : ARRAY IMPLEMENTATION

Consider implementing a fixed size circular queue of maximum size 5 using an array.

Create a structure

struct queue {

int contents[5];

int front;

int rear;

} ;

 

Note that the array contents holds the contents of the queue and the integer front stores the index of the front element in the queue and the integer rear stores the index of the last element in the queue.

Write a program to implement enQueue and deQueue operation on queue and to display the contents of the queue.

In the initQueue function intialize the value of front and rear to -1.

Print the message “Queue is full” in the enQueue function when an attempt is made to insert a data into a full queue.

Print the message “Queue is empty” in the deQueue function and return the value -1000 when an attempt is made to delete data from an empty queue.

Refer function specifications for further details.

 

Input and Output Format:

Refer sample input and output for formatting specifications.

Note that the statement “The contents of the queue are” is in the main function. In the display function, if the queue is empty, print “ {}”.

[All text in bold corresponds to input and the rest corresponds to output]

Sample Input and Output:

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

3

The contents of the queue are {}

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

1

Enter the element to be inserted/entered

10

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

1

Enter the element to be inserted/entered

20

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

1

Enter the element to be inserted/entered

30

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

1

Enter the element to be inserted/entered

40

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

1

Enter the element to be inserted/entered

50

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

1

Enter the element to be inserted/entered

60

Queue is full

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

2

The deleted element is 10

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

2

The deleted element is 20

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

1

Enter the element to be inserted/entered

60

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

3

The contents of the queue are 30 40 50 60

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

2

The deleted element is 30

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

2

The deleted element is 40

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

2

The deleted element is 50

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

3

The contents of the queue are 60

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

2

The deleted element is 60

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

2

Queue is empty

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

3

The contents of the queue are {}

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

4

#  QUEUE 2 - LINKED LIST IMPLEMENTATION

Consider implementing a Queue using a Linked List

Create a structure

struct queue{

     int Data ;

     struct queue * next ;

} ;

 

Write a program to implement enQueue and delQueue operations on queue and to display the contents of the queue.

Print the message “Queue is empty” in the delQueue() function and return the value -1000 when an attempt is made to delete data from an empty queue.


Function specifications:

int delQueue(struct queue *q)
void enQueue(struct queue *q,int value)
void display(struct queue q)
Input and Output Format:

Refer sample input and output for formatting specifications.

Note that the statement “The contents of the queue are” is in the main function. In the display function, if the queue is empty, print “ {}”.


[All text in bold corresponds to input and the rest corresponds to output]

Sample Input and Output:

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

1

Enter the element to be inserted/entered

20

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

1

Enter the element to be inserted/entered

30

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

1

Enter the element to be inserted/entered

40

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

3

The contents of the queue are 20 30 40

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

1

Enter the element to be inserted/entered

50

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

3

The contents of the queue are 20 30 40 50

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

2

The deleted element is 20

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

2

The deleted element is 30

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

2

The deleted element is 40

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

2

The deleted element is 50

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

2

Queue is empty

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

3

The contents of the queue are {}

Choice 1 : Enter element into Queue

Choice 2 : Delete element from Queue

Choice 3 : Display

Any other choice : Exit

Enter your choice

4

Function Definitions:

void enQueue (struct queue *, int value) 

int delQueue (struct queue *q) 

void display (struct queue q) 
 
# - LINKED LIST : APPEND

Write a C program to append a node to the Linked List.

 

Define a structure

struct node

{

int data;

struct node * link;

}

 

Include functions

append --- to add data at the end of the linked list.

display --- to display all the data in the linked list.

 

Refer function specifications for further details.

[Note: The stmt. 'Elements in the linked list are' should be in the main function.

 

Input and Output Format:

Refer sample input and output for formatting specifications.

 

Sample Input and Output:

[All text in bold corresponds to input and the rest corresponds to output.]

 

Enter the value

10

Do you want to add another node? Type Yes/No

Yes

Enter the value

17

Do you want to add another node? Type Yes/No

Yes

Enter the value

11

Do you want to add another node? Type Yes/No

Yes

Enter the value

28

Do you want to add another node? Type Yes/No

No

The elements in the linked list are 10 17 11 28

 

Function Definitions:

void append (struct node **, int ) 

void display (struct node *) 

# LINKED LIST : SEARCH

 

Write a C program to find whether an element is present in the linked list.

 

Define a structure

struct node

{

int data;

struct node * link;

}

 

Include functions

append --- to add data at the end of the linked list.

search --- to search for an element in the linked list. The function returns 1 if the element is present in the linked list and 0 otherwise.

display --- to display all the data in the linked list.

 

Refer function specifications for further details.

[Note: The stmt. 'Elements in the linked list are' should be in the main function.

 

Input and Output Format:

Refer sample input and output for formatting specifications.

 

Sample Input and Output 1:

[All text in bold corresponds to input and the rest corresponds to output.]

 

Enter the value

5

Do you want to add another node? Type Yes/No

Yes

Enter the value

9

Do you want to add another node? Type Yes/No

Yes

Enter the value

2

Do you want to add another node? Type Yes/No

Yes

Enter the value

8

Do you want to add another node? Type Yes/No

No

The elements in the linked list are 5 9 2 8

Enter the element to be searched

2

2 is present in the linked list

 

Sample Input and Output 2:

[All text in bold corresponds to input and the rest corresponds to output.]

 

Enter the value

5

Do you want to add another node? Type Yes/No

Yes

Enter the value

9

Do you want to add another node? Type Yes/No

Yes

Enter the value

2

Do you want to add another node? Type Yes/No

Yes

Enter the value

8

Do you want to add another node? Type Yes/No

No

The elements in the linked list are 5 9 2 8

Enter the element to be searched

12

12 is not present in the linked list

 

 

Function Definitions:

void append (struct node **q, int num) 

void display (struct node *q) 

int search (struct node *q, int e) 

